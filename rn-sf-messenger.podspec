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
  s.authors      = { "Tim Gurnett" => "timg@punterstech.com" }
  s.platforms    = { :ios => "15.0" }
  s.source       = { :git => "https://github.com/Antisane76/rn-sf-messenger.git", :tag => "#{s.version}" }

  s.source_files = "ios/**/*.{h,c,cc,cpp,m,mm,swift}"
  #s.requires_arc = true

  s.resources = ['ios/en.lproj/Localizable.strings']
  #s.ios.resource_bundle = { 'rn-sf-messenger' => 'ios/*.xcassets' }

  s.dependency "React"
  s.dependency "Messaging-InApp-UI"
  s.dependency "Messaging-InApp-Core"
  #s.ios.vendored_frameworks = '**/ios/Frameworks/SMIClientUI.framework', '**/ios/Frameworks/SMIClientCore.framework' 
  # ...
  # s.dependency "..."
end

