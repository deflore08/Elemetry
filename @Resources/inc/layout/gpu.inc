[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

[text.static.GPU_TITLE]
 Meter                            = STRING
 MeterStyle                       = style.text.2x
 X                                = (#X_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2))))
 Y                                = (#Y_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2))))
 Text                             = "GPU"
 DynamicVariables                 = 1

[text.dynamic.GPU_LOAD]
 Meter                            = STRING
 MeasureName                      = sensor.GPU_LOAD
 MeterStyle                       = style.text.3x
 X                                = (#X_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2) * #Phi#)))
 Y                                = (#Y_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2) * #Phi#)))
 Text                             = %1%
 DynamicVariables                 = 1

[text.dynamic.GPU_TEMP]
 Meter                            = STRING
 MeasureName                      = sensor.GPU_TEMP
 MeterStyle                       = style.text.4x
 X                                = (#X_Axis# + (#MainArcRadius# - (#MainArcRadius#)))
 Y                                = (#Y_Axis# + (#MainArcRadius# + (#MainArcRadius#)))
 Text                             = %1'
 DynamicVariables                 = 1