# rn-sf-messenger.podspec

require "json"

package = JSON.parse(File.read(File.join(__dir__, "package.json")))

Pod::Spec.new do |s|
  s.name         = "rn-sf-messenger"
  s.version      = package["version"]
  s.summary      = package["description"]
  s.description  = <<-DESC
                  rn-sf-messenger
                   DESC
  s.homepage     = "https://github.com/Antisane76/rn-sf-messenger"
  # brief license entry:
  s.license      = "MIT"
  # optional - use expanded license entry instead:
  # s.license    = { :type => "MIT", :file => "LICENSE" }
  s.authors      = { "Your Name" => "yourname@email.com" }
  s.platforms    = { :ios => "13.0" }
  s.source       = { :git => "https://github.com/Antisane76/rn-sf-messenger.git", :tag => "#{s.version}" }

  s.source_files = "ios/**/*.{h,c,cc,cpp,m,mm,swift}"
  s.requires_arc = true

  s.dependency "React"
  s.dependency "Messaging-InApp-UI"
  s.ios.vendored_frameworks = 'ios/Frameworks/SMIClientUI.framework', 'ios/Frameworks/SMIClientCore.framework' 
  # ...
  # s.dependency "..."
end

