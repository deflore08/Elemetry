[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

; --- FONTS SIZES

; - Font size depends on #MainArcRadius# variable directly, it's all about golden proportion (PHI = 1.618).
; - After we get a necessary fonr size in Pixels we should convert it to Points with multipliyng on 0.75 coefficient, because Rainmeter calculates Fonts only in Points.

; - Example:

; - With default Radius value (230px) 1xFontSize = 230 / PHI / PHI / PHI = ~54px. Then we convert it to Points: 54 * 0.75 = ~40.
; - So, 1xFontSize = 40pt. Then we just divided this value on PHI and getting next sequences values: 25, 15, 9... I hope i clarified it well. :)

[formula.1xFontSize]
 Measure                          = CALC
 Formula                          = (((#MainArcRadius# / #Phi#) / #Phi# / #Phi#) * 0.75)
 DynamicVariables                 = 1

[formula.2xFontSize]
 Measure                          = CALC
 Formula                          = ([formula.1xFontSize] / #Phi#)
 DynamicVariables                 = 1

[formula.3xFontSize]
 Measure                          = CALC
 Formula                          = ([formula.2xFontSize] / #Phi#)
 DynamicVariables                 = 1

[formula.4xFontSize]
 Measure                          = CALC
 Formula                          = ([formula.3xFontSize] / #Phi#)
 DynamicVariables                 = 1

; --- CPU SENSORS

[sensor.CPU_LOAD]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = ValueRaw0
 RegExpSubstitute                 = 1
 Substitute                       = \.":"","^(.{0,2}).+$":"\1"

[sensor.CPU_TEMP]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = ValueRaw1
 ;RegExpSubstitute                 = 1
 ;Substitute                       = \.":"","^(.{0,2}).+$":"\1"

; --- GPU SENSORS

[sensor.GPU_LOAD]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = ValueRaw6
 RegExpSubstitute                 = 1
 Substitute                       = \.":"","^(.{0,2}).+$":"\1"

[sensor.GPU_TEMP]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = ValueRaw3
 RegExpSubstitute                 = 1
 Substitute                       = "^(.{0,2}).+$":"\1"