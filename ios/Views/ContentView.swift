//
//  ContentView.swift
//

import SwiftUI
import SMIClientUI

struct ContentView: View {
    //@State private var controller: $content// = MessagingController()
    @ObservedObject var controller: MessagingController
    
    //@Environment(\.presentationMode) var presentationMode
    // ios 15
    @Environment(\.dismiss) var dismiss

    var body: some View {
        NavigationView {
            VStack {
                Spacer()
                Text("Support/Live Chat")
                Spacer()
                VStack {
                    if let config = controller.uiConfig {
                        NavigationLink(destination: Interface(config)) {
                            Text("Speak with an Agent")
                        }
                    }
                    
                    // Button("Reset Conversation ID") {
                    //     controller.resetConfig()
                    // }
                }
                Spacer()
                Button("Close") {
                    //presentationMode.wrappedValue.dismiss()
                    dismiss()
                }
                //.buttonStyle(. bordered)
                //.tint(.blue)
                Spacer()
            }
            .padding()
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView(controller: MessagingController())
    }
}
