/**
 * Apply intercom-react-native configuration for Expo SDK 42 projects.
 */
//var ts = require('@expo/config-plugins');

import { ConfigPlugin, AndroidConfig, createRunOncePlugin } from 'expo/config-plugins';

const pkg = {
    name: "rn-sf-messenger",
    version: "UNVERSIONED",
  };
var fs = require('fs')


const withSalesforceColors: ConfigPlugin<{ backgroundColor?: string | false, buttonColor?: string | false, useGradient?: boolean | false }> = (config, {backgroundColor, buttonColor, useGradient} = {}) => {
    //const { backgroundColor, buttonColor } = <ConfigPlugin>props;
  
    // Add android plugin
    if (backgroundColor && buttonColor) {   
        fs.readFile(__dirname+"/../../android/src/main/res/values/colors.xml", 'utf8', function (err: string, data: string) {
            if (err) {
                return console.log(err);
            }
            var smi_navigation_background = '<color name="smi_navigation_background">#'
            var smiNavBackgroundIndex: number = data.indexOf(smi_navigation_background) + smi_navigation_background.length
            var currSmiNavBackgroundColor: string = data.substring(smiNavBackgroundIndex,smiNavBackgroundIndex+6)
            if (currSmiNavBackgroundColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, smiNavBackgroundIndex)  + backgroundColor + data.substring(smiNavBackgroundIndex+backgroundColor.length)
            }

            var smi_cta_buttons = '<color name="smi_cta_buttons">#'
            var smiCtaButtonIndex: number = data.indexOf(smi_cta_buttons) + smi_cta_buttons.length
            var currCtaButtonColor: string = data.substring(smiCtaButtonIndex,smiCtaButtonIndex+6)
            if (currCtaButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, smiCtaButtonIndex)  + buttonColor + data.substring(smiCtaButtonIndex+buttonColor.length)
            }

            var smi_color_secondary = '<color name="smi_color_secondary">#'
            var smiColorButtonIndex: number = data.indexOf(smi_color_secondary) + smi_color_secondary.length
            var currColorButtonColor: string = data.substring(smiColorButtonIndex,smiColorButtonIndex+6)
            if (currColorButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, smiColorButtonIndex)  + buttonColor + data.substring(smiColorButtonIndex+buttonColor.length)
            }
            
            fs.writeFile(__dirname+"/../../android/src/main/res/values/colors.xml", data, 'utf8', function (err: string) {
                if (err) return console.log(err);
            });
        });
        fs.readFile(__dirname+"/../../ios/Views/ContentView.swift", 'utf8', function (err: string,data: string) {
            if (err) {
                return console.log(err);
            }

            var uiColorBackground = 'colors: [UIColor(rgb: 0x'
            var uiColorBackgroundIndex: number = data.indexOf(uiColorBackground) + uiColorBackground.length
            var curruiColorBackgroundColor: string = data.substring(uiColorBackgroundIndex,uiColorBackgroundIndex+6)
            if (curruiColorBackgroundColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorBackgroundIndex)  + backgroundColor + data.substring(uiColorBackgroundIndex+backgroundColor.length)
            }

            var uiColorAppearance = 'coloredAppearance.backgroundColor = UIColor(rgb: 0x'
            var uiColorAppearanceIndex: number = data.indexOf(uiColorAppearance) + uiColorAppearance.length
            var curruiColorAppearanceColor: string = data.substring(uiColorAppearanceIndex,uiColorAppearanceIndex+6)
            if (curruiColorAppearanceColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorAppearanceIndex)  + backgroundColor + data.substring(uiColorAppearanceIndex+backgroundColor.length)
            }

            var uiColorTint = '.tint(UIColor(rgb: 0x'
            var uiColorTintIndex: number = data.indexOf(uiColorTint) + uiColorTint.length
            var curruiColorTintColor: string = data.substring(uiColorTintIndex,uiColorTintIndex+6)
            if (curruiColorTintColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorTintIndex)  + backgroundColor + data.substring(uiColorTintIndex+backgroundColor.length)
            }
            
            var uiColorTintIndex2: number = data.indexOf(uiColorTint, uiColorTintIndex+6) + uiColorTint.length
            var curruiColorTintColor2: string = data.substring(uiColorTintIndex2,uiColorTintIndex2+6)
            if (curruiColorTintColor2.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorTintIndex2)  + backgroundColor + data.substring(uiColorTintIndex2+backgroundColor.length)
            }

            var uiColorButton = '.suColor, UIColor(rgb: 0x'
            var uiColorButtonIndex: number = data.indexOf(uiColorButton) + uiColorButton.length
            var curruiColorButtonColor: string = data.substring(uiColorButtonIndex,uiColorButtonIndex+6)
            if (curruiColorButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorButtonIndex)  + buttonColor + data.substring(uiColorButtonIndex+buttonColor.length)
            }

            var uiColorForegroundButton = '.foregroundColor(UIColor(rgb: 0x'
            var uiColorForegroundButtonIndex: number = data.indexOf(uiColorForegroundButton) + uiColorForegroundButton.length
            var curruiColorForegroundButtonColor: string = data.substring(uiColorForegroundButtonIndex,uiColorForegroundButtonIndex+6)
            if (curruiColorForegroundButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorForegroundButtonIndex)  + buttonColor + data.substring(uiColorForegroundButtonIndex+buttonColor.length)
            }

            var uiColorAccentButton = '.accentColor(UIColor(rgb: 0x'
            var uiColorAccentButtonIndex: number = data.indexOf(uiColorAccentButton) + uiColorAccentButton.length
            var curruiColorAccentButtonColor: string = data.substring(uiColorAccentButtonIndex,uiColorAccentButtonIndex+6)
            if (curruiColorAccentButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorAccentButtonIndex)  + buttonColor + data.substring(uiColorAccentButtonIndex+buttonColor.length)
            }

            if (!useGradient) {
                data = data.replaceAll('Image("mintbetTicket").resizable().opacity(0.3)','Image("mintbetTicket").resizable().opacity(1.0)')
                data = data.replaceAll('.background(backgroundGradient)', '')
            }

            fs.writeFile(__dirname+'/../../ios/Views/ContentView.swift', data, 'utf8', function (err: string) {
                if (err) return console.log(err);
            });
        });
    } else if (backgroundColor) {

            fs.readFile(__dirname+"/../../android/src/main/res/values/colors.xml", 'utf8', function (err: string, data: string) {
                if (err) {
                    return console.log(err);
                }
                var smi_navigation_background = '<color name="smi_navigation_background">#'
                var smiNavBackgroundIndex: number = data.indexOf(smi_navigation_background) + smi_navigation_background.length
                var currSmiNavBackgroundColor: string = data.substring(smiNavBackgroundIndex,smiNavBackgroundIndex+6)
                if (currSmiNavBackgroundColor.localeCompare(backgroundColor) != 0) {
                    data = data.substring(0, smiNavBackgroundIndex)  + backgroundColor + data.substring(smiNavBackgroundIndex+backgroundColor.length)
                }
                fs.writeFile(__dirname+"/../../android/src/main/res/values/colors.xml", data, 'utf8', function (err: string) {
                    if (err) return console.log(err);
                });
            });
            fs.readFile(__dirname+"/../../ios/Views/ContentView.swift", 'utf8', function (err: string,data: string) {
                if (err) {
                    return console.log(err);
                }
                var uiColorBackground = 'colors: [UIColor(rgb: 0x'
                var uiColorBackgroundIndex: number = data.indexOf(uiColorBackground) + uiColorBackground.length
                var curruiColorBackgroundColor: string = data.substring(uiColorBackgroundIndex,uiColorBackgroundIndex+6)
                if (curruiColorBackgroundColor.localeCompare(backgroundColor) != 0) {
                    data = data.substring(0, uiColorBackgroundIndex)  + backgroundColor + data.substring(uiColorBackgroundIndex+backgroundColor.length)
                }

                var uiColorAppearance = 'coloredAppearance.backgroundColor = UIColor(rgb: 0x'
                var uiColorAppearanceIndex: number = data.indexOf(uiColorAppearance) + uiColorAppearance.length
                var curruiColorAppearanceColor: string = data.substring(uiColorAppearanceIndex,uiColorAppearanceIndex+6)
                if (curruiColorAppearanceColor.localeCompare(backgroundColor) != 0) {
                    data = data.substring(0, uiColorAppearanceIndex)  + backgroundColor + data.substring(uiColorAppearanceIndex+backgroundColor.length)
                }
    
                var uiColorTint = '.tint(UIColor(rgb: 0x'
                var uiColorTintIndex: number = data.indexOf(uiColorTint) + uiColorTint.length
                var curruiColorTintColor: string = data.substring(uiColorTintIndex,uiColorTintIndex+6)
                if (curruiColorTintColor.localeCompare(backgroundColor) != 0) {
                    data = data.substring(0, uiColorTintIndex)  + backgroundColor + data.substring(uiColorTintIndex+backgroundColor.length)
                }

                var uiColorTintIndex2: number = data.indexOf(uiColorTint, uiColorTintIndex+6) + uiColorTint.length
                var curruiColorTintColor2: string = data.substring(uiColorTintIndex2,uiColorTintIndex2+6)
                if (curruiColorTintColor2.localeCompare(backgroundColor) != 0) {
                    data = data.substring(0, uiColorTintIndex2)  + backgroundColor + data.substring(uiColorTintIndex2+backgroundColor.length)
                }

                if (!useGradient) {
                    data = data.replaceAll('Image("mintbetTicket").resizable().opacity(0.3)','Image("mintbetTicket").resizable().opacity(1.0)')
                    data = data.replaceAll('.background(backgroundGradient)', '')
                }
    
                fs.writeFile(__dirname+'/../../ios/Views/ContentView.swift', data, 'utf8', function (err: string) {
                    if (err) return console.log(err);
                });
            });
    } else if (buttonColor) {   
        fs.readFile(__dirname+"/../../android/src/main/res/values/colors.xml", 'utf8', function (err: string, data: string) {
            if (err) {
                return console.log(err);
            }
            var smi_cta_buttons = '<color name="smi_cta_buttons">#'
            var smiCtaButtonIndex: number = data.indexOf(smi_cta_buttons) + smi_cta_buttons.length
            var currCtaButtonColor: string = data.substring(smiCtaButtonIndex,smiCtaButtonIndex+6)
            if (currCtaButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, smiCtaButtonIndex)  + buttonColor + data.substring(smiCtaButtonIndex+buttonColor.length)
            }
            var smi_color_secondary = '<color name="smi_color_secondary">#'
            var smiColorButtonIndex: number = data.indexOf(smi_color_secondary) + smi_color_secondary.length
            var currColorButtonColor: string = data.substring(smiColorButtonIndex,smiColorButtonIndex+6)
            if (currColorButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, smiColorButtonIndex)  + buttonColor + data.substring(smiColorButtonIndex+buttonColor.length)
            }
            fs.writeFile(__dirname+'/../../android/src/main/res/values/colors.xml', data, 'utf8', function (err: string) {
                if (err) return console.log(err);
            });
        });
        fs.readFile(__dirname+"/../../ios/Views/ContentView.swift", 'utf8', function (err: string,data: string) {
            if (err) {
                return console.log(err);
            }
            var uiColorButton = '.suColor, UIColor(rgb: 0x'
            var uiColorButtonIndex: number = data.indexOf(uiColorButton) + uiColorButton.length
            var curruiColorButtonColor: string = data.substring(uiColorButtonIndex,uiColorButtonIndex+6)
            if (curruiColorButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorButtonIndex)  + buttonColor + data.substring(uiColorButtonIndex+buttonColor.length)
            }

            var uiColorForegroundButton = '.foregroundColor(UIColor(rgb: 0x'
            var uiColorForegroundButtonIndex: number = data.indexOf(uiColorForegroundButton) + uiColorForegroundButton.length
            var curruiColorForegroundButtonColor: string = data.substring(uiColorForegroundButtonIndex,uiColorForegroundButtonIndex+6)
            if (curruiColorForegroundButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorForegroundButtonIndex)  + buttonColor + data.substring(uiColorForegroundButtonIndex+buttonColor.length)
            }

            var uiColorAccentButton = '.accentColor(UIColor(rgb: 0x'
            var uiColorAccentButtonIndex: number = data.indexOf(uiColorAccentButton) + uiColorAccentButton.length
            var curruiColorAccentButtonColor: string = data.substring(uiColorAccentButtonIndex,uiColorAccentButtonIndex+6)
            if (curruiColorAccentButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorAccentButtonIndex)  + buttonColor + data.substring(uiColorAccentButtonIndex+buttonColor.length)
            }

            fs.writeFile(__dirname+'/../../ios/Views/ContentView.swift', data, 'utf8', function (err:string ) {
                if (err) return console.log(err);
            });
        });
    }
    return config
  };
  

  export default createRunOncePlugin(withSalesforceColors, pkg.name, pkg.version);
