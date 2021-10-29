[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

; --- RAM TITLE

; - Calculations below are same for VRAM meters, just inverted.

; - X and Y coordinates based on half radius square (diagonal). The next formulas should help you to understand this calculations.

; - X = R - (½R * √2)

; - Y = R - ½R

[text.static.RAM_TITLE]
 Meter                            = STRING
 MeterStyle                       = style.text.2x
 FontColor                        = #RGB#,#FrameTwoTransparency#
 X                                = (#FrameTwoDisplacementMultiplier1# * (#X_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2)))))
 Y                                = (#FrameTwoDisplacementMultiplier1# * (#Y_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2)))))
 Text                             = "RAM"
 DynamicVariables                 = 1
 Group                            = #ram# | #ram_meters# | #texts# | #texts_static# | #frame_two#

; --- RAM LOAD

; Phi - it is the key to understanding this placements.

; - RAM LOAD = RAM TITLE * Phi

; - X = R - Phi * (½R * √2)

; - Y = R - Phi * (½R * √2)

[text.dynamic.RAM_LOAD]
 Meter                            = STRING
 MeasureName                      = sensor.RAM_LOAD
 MeterStyle                       = style.text.3x
 FontColor                        = #RGB#,#FrameTwoTransparency#
 X                                = (#FrameTwoDisplacementMultiplier2# * (#X_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2) * #Phi#))))
 Y                                = (#FrameTwoDisplacementMultiplier2# * (#Y_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2) * #Phi#))))
 Text                             = %1%
 DynamicVariables                 = 1
 Group                            = #ram# | #ram_meters# | #texts# | #texts_dynamic# | #frame_two#

; --- RAM FREE

; - RAM FREE = RAM LOAD * Phi what equals 

; - X = R - Phi * (Phi * (½R * √2)) what equals Radius - Radius

; - Y = R - Phi * (Phi * (½R * √2)) what equals Radius - Radius

[text.dynamic.RAM_FREE]
 Meter                            = STRING
 MeasureName                      = sensor.RAM_FREE
 MeterStyle                       = style.text.4x
 FontColor                        = #RGB#,#FrameTwoTransparency#
 X                                = (#FrameTwoDisplacementMultiplier3# * (#X_Axis# + (#MainArcRadius# - (#MainArcRadius#))))
 Y                                = (#FrameTwoDisplacementMultiplier3# * (#Y_Axis# + (#MainArcRadius# - (#MainArcRadius#))))
 Text                             = %1
 DynamicVariables                 = 1
 Group                            = #ram# | #ram_meters# | #texts# | #texts_dynamic# | #frame_two#