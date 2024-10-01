//
//  ContentView.swift
//

import SwiftUI
import SMIClientUI

extension UIColor {
    /// The SwiftUI color associated with the receiver.
    var suColor: Color { Color(self) }
}

let backgroundGradient = LinearGradient(
    colors: [UIColor(rgb: 0x004E43).suColor, UIColor(rgb: 0x26D17C).suColor],
    startPoint: .top, endPoint: .bottom)

struct ContentView: View {
    //@State private var controller: $content// = MessagingController()
    @ObservedObject var controller: MessagingController
    
    //@Environment(\.presentationMode) var presentationMode
    // ios 15
    @Environment(\.dismiss) var dismiss

    init(controller: MessagingController) {
        let coloredAppearance = UINavigationBarAppearance()
        coloredAppearance.configureWithOpaqueBackground()
        coloredAppearance.backgroundColor = UIColor(rgb: 0x004E43)
        coloredAppearance.titleTextAttributes = [.foregroundColor: UIColor.white]
        coloredAppearance.largeTitleTextAttributes = [.foregroundColor: UIColor.white]
        
        UINavigationBar.appearance().standardAppearance = coloredAppearance
        UINavigationBar.appearance().compactAppearance = coloredAppearance
        UINavigationBar.appearance().scrollEdgeAppearance = coloredAppearance
        
        UINavigationBar.appearance().tintColor = .white
        UINavigationBar.appearance().barTintColor = UIColor(.black)
        //UINavigationBar.appearance().backButtonAppearance.normal.titleTextAttributes = [.foregroundColor: UIColor.white]
        self.controller = controller
    }
    
    var body: some View {
        NavigationView {
            ZStack {
                Image("mintbetTicket").resizable().opacity(1.0)
                VStack (alignment: .center) {
                    
                    Text("Support").font(.largeTitle).font(Font.body.bold())
                        .foregroundColor(UIColor(rgb: 0x26D17C).suColor)
                    Spacer()
                    Spacer()
                    Spacer()
                    Spacer()
                    Spacer()
                    if let config = controller.uiConfig {
                        NavigationLink(destination: Interface(config)) {
                            Text("Speak with an Agent") 
                        }
                        .buttonStyle(.borderedProminent).font(Font.body.bold()).font(.largeTitle)
                        .tint(UIColor(rgb: 0x004E43).suColor)
                    }

                    Spacer()
                    Spacer()
                    Spacer()
                    Button("Close") {
                        //presentationMode.wrappedValue.dismiss()
                        dismiss()
                    }
                    .buttonStyle(.borderedProminent)
                    .tint(UIColor(rgb: 0x004E43).suColor)
                }.padding()
            }
            .frame(maxWidth: .infinity)
            .background(backgroundGradient)
        }.accentColor(UIColor(rgb: 0x26D17C).suColor)
        
    }
}

// struct ContentView_Previews: PreviewProvider {
//     static var previews: some View {
//         ContentView(controller: MessagingController())
//     }
// }
