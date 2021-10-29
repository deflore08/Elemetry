[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

; --- VRAM TITLE

; - Calculations below are same for RAM meters, just inverted.

; - X and Y coordinates based on half radius square (diagonal). The next formulas should help you to understand this calculations.

; - X = R + (½R * √2)

; - Y = R + ½R

[text.static.VRAM_TITLE]
 Meter                            = STRING
 MeterStyle                       = style.text.2x
 FontColor                        = #RGB#,#FrameTwoTransparency#
 X                                = (#FrameTwoDisplacementMultiplier4# * (#X_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2)))))
 Y                                = (#FrameTwoDisplacementMultiplier4# * (#Y_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2)))))
 Text                             = "VRM"
 DynamicVariables                 = 1
 Group                            = #vram# | #vram_meters# | #texts# | #texts_static# | #frame_two#

; --- VRAM LOAD

; Phi - it is the key to understanding this placements.

; - VRAM LOAD = VRAM TITLE * Phi

; - X = R + Phi * (½R * √2)

; - Y = R + Phi * (½R * √2)

[text.dynamic.VRAM_LOAD]
 Meter                            = STRING
 MeasureName                      = sensor.VIDEO_RAM_LOAD
 MeterStyle                       = style.text.3x
 FontColor                        = #RGB#,#FrameTwoTransparency#
 X                                = (#FrameTwoDisplacementMultiplier5# * (#X_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2) * #Phi#))))
 Y                                = (#FrameTwoDisplacementMultiplier5# * (#Y_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2) * #Phi#))))
 Text                             = %1%
 DynamicVariables                 = 1
 Group                            = #vram# | #vram_meters# | #texts# | #texts_dynamic# | #frame_two#

; --- VRAM FREE

; - VRAM FREE = VRAM LOAD * Phi what equals 

; - X = R + Phi * (Phi * (½R * √2)) what equals Radius - Radius

; - Y = R + Phi * (Phi * (½R * √2)) what equals Radius - Radius

[text.dynamic.VRAM_FREE]
 Meter                            = STRING
 MeasureName                      = calculation.VIDEO_RAM_FREE
 MeterStyle                       = style.text.4x
 FontColor                        = #RGB#,#FrameTwoTransparency#
 X                                = (#FrameTwoDisplacementMultiplier6# * (#X_Axis# + (#MainArcRadius# + (#MainArcRadius#))))
 Y                                = (#FrameTwoDisplacementMultiplier6# * (#Y_Axis# + (#MainArcRadius# + (#MainArcRadius#))))
 Text                             = %1
 DynamicVariables                 = 1
 Group                            = #vram# | #vram_meters# | #texts# | #texts_dynamic# | #frame_two#