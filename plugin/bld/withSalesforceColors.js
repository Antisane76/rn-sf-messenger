"use strict";
/**
 * Apply intercom-react-native configuration for Expo SDK 42 projects.
 */
//var ts = require('@expo/config-plugins');
Object.defineProperty(exports, "__esModule", { value: true });
const config_plugins_1 = require("expo/config-plugins");
const pkg = {
    name: "rn-sf-messenger",
    version: "UNVERSIONED",
};
var fs = require('fs');
const withSalesforceColors = (config, { backgroundColor, buttonColor } = {}) => {
    //const { backgroundColor, buttonColor } = <ConfigPlugin>props;
    // Add android plugin
    if (backgroundColor && buttonColor) {
        fs.readFile(__dirname + "/../../android/src/main/res/values/colors.xml", 'utf8', function (err, data) {
            if (err) {
                return console.log(err);
            }
            var smi_navigation_background = '<color name="smi_navigation_background">#';
            var smiNavBackgroundIndex = data.indexOf(smi_navigation_background) + smi_navigation_background.length;
            var currSmiNavBackgroundColor = data.substring(smiNavBackgroundIndex, smiNavBackgroundIndex + 6);
            if (currSmiNavBackgroundColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, smiNavBackgroundIndex) + backgroundColor + data.substring(smiNavBackgroundIndex + backgroundColor.length);
            }
            var smi_cta_buttons = '<color name="smi_cta_buttons">#';
            var smiCtaButtonIndex = data.indexOf(smi_cta_buttons) + smi_cta_buttons.length;
            var currCtaButtonColor = data.substring(smiCtaButtonIndex, smiCtaButtonIndex + 6);
            if (currCtaButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, smiCtaButtonIndex) + buttonColor + data.substring(smiCtaButtonIndex + buttonColor.length);
            }
            var smi_color_secondary = '<color name="smi_color_secondary">#';
            var smiColorButtonIndex = data.indexOf(smi_color_secondary) + smi_color_secondary.length;
            var currColorButtonColor = data.substring(smiColorButtonIndex, smiColorButtonIndex + 6);
            if (currColorButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, smiColorButtonIndex) + buttonColor + data.substring(smiColorButtonIndex + buttonColor.length);
            }
            fs.writeFile(__dirname + "/../../android/src/main/res/values/colors.xml", data, 'utf8', function (err) {
                if (err)
                    return console.log(err);
            });
        });
        fs.readFile(__dirname + "/../../ios/Views/ContentView.swift", 'utf8', function (err, data) {
            if (err) {
                return console.log(err);
            }
            var uiColorBackground = 'colors: [UIColor(rgb: 0x';
            var uiColorBackgroundIndex = data.indexOf(uiColorBackground) + uiColorBackground.length;
            var curruiColorBackgroundColor = data.substring(uiColorBackgroundIndex, uiColorBackgroundIndex + 6);
            if (curruiColorBackgroundColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorBackgroundIndex) + backgroundColor + data.substring(uiColorBackgroundIndex + backgroundColor.length);
            }
            var uiColorAppearance = 'coloredAppearance.backgroundColor = UIColor(rgb: 0x';
            var uiColorAppearanceIndex = data.indexOf(uiColorAppearance) + uiColorAppearance.length;
            var curruiColorAppearanceColor = data.substring(uiColorAppearanceIndex, uiColorAppearanceIndex + 6);
            if (curruiColorAppearanceColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorAppearanceIndex) + backgroundColor + data.substring(uiColorAppearanceIndex + backgroundColor.length);
            }
            var uiColorTint = '.tint(UIColor(rgb: 0x';
            var uiColorTintIndex = data.indexOf(uiColorTint) + uiColorTint.length;
            var curruiColorTintColor = data.substring(uiColorTintIndex, uiColorTintIndex + 6);
            if (curruiColorTintColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorTintIndex) + backgroundColor + data.substring(uiColorTintIndex + backgroundColor.length);
            }
            var uiColorTintIndex2 = data.indexOf(uiColorTint, uiColorTintIndex + 6) + uiColorTint.length;
            var curruiColorTintColor2 = data.substring(uiColorTintIndex2, uiColorTintIndex2 + 6);
            if (curruiColorTintColor2.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorTintIndex2) + backgroundColor + data.substring(uiColorTintIndex2 + backgroundColor.length);
            }
            var uiColorButton = '.suColor, UIColor(rgb: 0x';
            var uiColorButtonIndex = data.indexOf(uiColorButton) + uiColorButton.length;
            var curruiColorButtonColor = data.substring(uiColorButtonIndex, uiColorButtonIndex + 6);
            if (curruiColorButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorButtonIndex) + buttonColor + data.substring(uiColorButtonIndex + buttonColor.length);
            }
            var uiColorForegroundButton = '.foregroundColor(UIColor(rgb: 0x';
            var uiColorForegroundButtonIndex = data.indexOf(uiColorForegroundButton) + uiColorForegroundButton.length;
            var curruiColorForegroundButtonColor = data.substring(uiColorForegroundButtonIndex, uiColorForegroundButtonIndex + 6);
            if (curruiColorForegroundButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorForegroundButtonIndex) + buttonColor + data.substring(uiColorForegroundButtonIndex + buttonColor.length);
            }
            var uiColorAccentButton = '.accentColor(UIColor(rgb: 0x';
            var uiColorAccentButtonIndex = data.indexOf(uiColorAccentButton) + uiColorAccentButton.length;
            var curruiColorAccentButtonColor = data.substring(uiColorAccentButtonIndex, uiColorAccentButtonIndex + 6);
            if (curruiColorAccentButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorAccentButtonIndex) + buttonColor + data.substring(uiColorAccentButtonIndex + buttonColor.length);
            }
            fs.writeFile(__dirname + '/../../ios/Views/ContentView.swift', data, 'utf8', function (err) {
                if (err)
                    return console.log(err);
            });
        });
    }
    else if (backgroundColor) {
        fs.readFile(__dirname + "/../../android/src/main/res/values/colors.xml", 'utf8', function (err, data) {
            if (err) {
                return console.log(err);
            }
            var smi_navigation_background = '<color name="smi_navigation_background">#';
            var smiNavBackgroundIndex = data.indexOf(smi_navigation_background) + smi_navigation_background.length;
            var currSmiNavBackgroundColor = data.substring(smiNavBackgroundIndex, smiNavBackgroundIndex + 6);
            if (currSmiNavBackgroundColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, smiNavBackgroundIndex) + backgroundColor + data.substring(smiNavBackgroundIndex + backgroundColor.length);
            }
            fs.writeFile(__dirname + "/../../android/src/main/res/values/colors.xml", data, 'utf8', function (err) {
                if (err)
                    return console.log(err);
            });
        });
        fs.readFile(__dirname + "/../../ios/Views/ContentView.swift", 'utf8', function (err, data) {
            if (err) {
                return console.log(err);
            }
            var uiColorBackground = 'colors: [UIColor(rgb: 0x';
            var uiColorBackgroundIndex = data.indexOf(uiColorBackground) + uiColorBackground.length;
            var curruiColorBackgroundColor = data.substring(uiColorBackgroundIndex, uiColorBackgroundIndex + 6);
            if (curruiColorBackgroundColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorBackgroundIndex) + backgroundColor + data.substring(uiColorBackgroundIndex + backgroundColor.length);
            }
            var uiColorAppearance = 'coloredAppearance.backgroundColor = UIColor(rgb: 0x';
            var uiColorAppearanceIndex = data.indexOf(uiColorAppearance) + uiColorAppearance.length;
            var curruiColorAppearanceColor = data.substring(uiColorAppearanceIndex, uiColorAppearanceIndex + 6);
            if (curruiColorAppearanceColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorAppearanceIndex) + backgroundColor + data.substring(uiColorAppearanceIndex + backgroundColor.length);
            }
            var uiColorTint = '.tint(UIColor(rgb: 0x';
            var uiColorTintIndex = data.indexOf(uiColorTint) + uiColorTint.length;
            var curruiColorTintColor = data.substring(uiColorTintIndex, uiColorTintIndex + 6);
            if (curruiColorTintColor.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorTintIndex) + backgroundColor + data.substring(uiColorTintIndex + backgroundColor.length);
            }
            var uiColorTintIndex2 = data.indexOf(uiColorTint, uiColorTintIndex + 6) + uiColorTint.length;
            var curruiColorTintColor2 = data.substring(uiColorTintIndex2, uiColorTintIndex2 + 6);
            if (curruiColorTintColor2.localeCompare(backgroundColor) != 0) {
                data = data.substring(0, uiColorTintIndex2) + backgroundColor + data.substring(uiColorTintIndex2 + backgroundColor.length);
            }
            fs.writeFile(__dirname + '/../../ios/Views/ContentView.swift', data, 'utf8', function (err) {
                if (err)
                    return console.log(err);
            });
        });
    }
    else if (buttonColor) {
        fs.readFile(__dirname + "/../../android/src/main/res/values/colors.xml", 'utf8', function (err, data) {
            if (err) {
                return console.log(err);
            }
            var smi_cta_buttons = '<color name="smi_cta_buttons">#';
            var smiCtaButtonIndex = data.indexOf(smi_cta_buttons) + smi_cta_buttons.length;
            var currCtaButtonColor = data.substring(smiCtaButtonIndex, smiCtaButtonIndex + 6);
            if (currCtaButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, smiCtaButtonIndex) + buttonColor + data.substring(smiCtaButtonIndex + buttonColor.length);
            }
            var smi_color_secondary = '<color name="smi_color_secondary">#';
            var smiColorButtonIndex = data.indexOf(smi_color_secondary) + smi_color_secondary.length;
            var currColorButtonColor = data.substring(smiColorButtonIndex, smiColorButtonIndex + 6);
            if (currColorButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, smiColorButtonIndex) + buttonColor + data.substring(smiColorButtonIndex + buttonColor.length);
            }
            fs.writeFile(__dirname + '/../../android/src/main/res/values/colors.xml', data, 'utf8', function (err) {
                if (err)
                    return console.log(err);
            });
        });
        fs.readFile(__dirname + "/../../ios/Views/ContentView.swift", 'utf8', function (err, data) {
            if (err) {
                return console.log(err);
            }
            var uiColorButton = '.suColor, UIColor(rgb: 0x';
            var uiColorButtonIndex = data.indexOf(uiColorButton) + uiColorButton.length;
            var curruiColorButtonColor = data.substring(uiColorButtonIndex, uiColorButtonIndex + 6);
            if (curruiColorButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorButtonIndex) + buttonColor + data.substring(uiColorButtonIndex + buttonColor.length);
            }
            var uiColorForegroundButton = '.foregroundColor(UIColor(rgb: 0x';
            var uiColorForegroundButtonIndex = data.indexOf(uiColorForegroundButton) + uiColorForegroundButton.length;
            var curruiColorForegroundButtonColor = data.substring(uiColorForegroundButtonIndex, uiColorForegroundButtonIndex + 6);
            if (curruiColorForegroundButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorForegroundButtonIndex) + buttonColor + data.substring(uiColorForegroundButtonIndex + buttonColor.length);
            }
            var uiColorAccentButton = '.accentColor(UIColor(rgb: 0x';
            var uiColorAccentButtonIndex = data.indexOf(uiColorAccentButton) + uiColorAccentButton.length;
            var curruiColorAccentButtonColor = data.substring(uiColorAccentButtonIndex, uiColorAccentButtonIndex + 6);
            if (curruiColorAccentButtonColor.localeCompare(buttonColor) != 0) {
                data = data.substring(0, uiColorAccentButtonIndex) + buttonColor + data.substring(uiColorAccentButtonIndex + buttonColor.length);
            }
            fs.writeFile(__dirname + '/../../ios/Views/ContentView.swift', data, 'utf8', function (err) {
                if (err)
                    return console.log(err);
            });
        });
    }
    return config;
};
exports.default = (0, config_plugins_1.createRunOncePlugin)(withSalesforceColors, pkg.name, pkg.version);
