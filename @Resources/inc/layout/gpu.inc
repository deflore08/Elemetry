[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

; --- GPU TITLE

; - Calculations below are same for CPU meters, just inverted.

; - X and Y coordinates based on half radius square (diagonal). The next formulas should help you to understand this calculations.

; - X = R - (½R * √2)

; - Y = R + ½R

[text.static.GPU_TITLE]
 Meter                            = STRING
 MeterStyle                       = style.text.2x
 FontColor                        = #RGB#,#FrameOneTransparency#
 X                                = (#FrameOneDisplacementMultiplierY1# * (#X_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2)))))
 Y                                = (#FrameOneDisplacementMultiplierX1# * (#Y_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2)))))
 Text                             = "GPU"
 DynamicVariables                 = 1
 Group                            = #gpu# | #gpu_meters# | #texts# | #texts_static# | #frame_one#

; --- GPU LOAD

; Phi - it is the key to understanding this placements.

; - GPU LOAD = GPU TITLE * Phi

; - X = R - Phi * (½R * √2)

; - Y = R + Phi * (½R * √2)

[text.dynamic.GPU_LOAD]
 Meter                            = STRING
 MeasureName                      = sensor.GPU_LOAD
 MeterStyle                       = style.text.3x
 FontColor                        = #RGB#,#FrameOneTransparency#
 X                                = (#FrameOneDisplacementMultiplierY2# * (#X_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2) * #Phi#))))
 Y                                = (#FrameOneDisplacementMultiplierX2# * (#Y_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2) * #Phi#))))
 Text                             = %1%
 DynamicVariables                 = 1
 Group                            = #gpu# | #gpu_meters# | #texts# | #texts_dynamic# | #frame_one#

; --- GPU TEMP

; - GPU TEMP = GPU LOAD * Phi what equals 

; - X = R - Phi * (Phi * (½R * √2)) what equals Radius - Radius

; - Y = R + Phi * (Phi * (½R * √2)) what equals Radius + Radius

[text.dynamic.GPU_TEMP]
 Meter                            = STRING
 MeasureName                      = sensor.GPU_TEMP
 MeterStyle                       = style.text.4x
 FontColor                        = #RGB#,#FrameOneTransparency#
 X                                = (#FrameOneDisplacementMultiplierY3# * (#X_Axis# + (#MainArcRadius# - (#MainArcRadius#))))
 Y                                = (#FrameOneDisplacementMultiplierX3# * (#Y_Axis# + (#MainArcRadius# + (#MainArcRadius#))))
 Text                             = %1'
 DynamicVariables                 = 1
 Group                            = #gpu# | #gpu_meters# | #texts# | #texts_dynamic# | #frame_one#