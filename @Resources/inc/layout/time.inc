[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

[sensor.TIME]
 Measure                          = TIME
 Format                           = %H:%M:%S


[text.dynamic.TIME]
 MeasureName                      = sensor.TIME
 Meter                            = STRING
 MeterStyle                       = style.text.1x
 X                                = (#X_Axis# + #MainArcRadius#)
 Y                                = (#Y_Axis# + #MainArcRadius#)
 Text                             = %1
 DynamicVariables                 = 1