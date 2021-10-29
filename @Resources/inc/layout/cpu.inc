[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

; --- CPU TITLE

; - Calculations below are same for GPU meters, just inverted.

; -  Muptilier needs for displacement animation. In static condition it equals to 1.

; - X and Y coordinates based on half radius square (diagonal). The next formulas should help you to understand this calculations.

; - X = R + (½R * √2)

; - Y = R - ½R

[text.static.CPU_TITLE]
 Meter                            = STRING
 MeterStyle                       = style.text.2x
 FontColor                        = #RGB#,#FrameOneTransparency#
 X                                = (#FrameOneDisplacementMultiplierX1# * (#X_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2)))))
 Y                                = (#FrameOneDisplacementMultiplierY1# * (#Y_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2)))))
 Text                             = "CPU"
 DynamicVariables                 = 1
 Group                            = #cpu# | #cpu_meters# | #texts# | #texts_static# | #frame_one#

; --- CPU LOAD

; Phi - it is the key to understanding this placements.

; - CPU LOAD = CPU TITLE * Phi

; - X = R + Phi * (½R * √2)

; - Y = R - Phi * (½R * √2)

[text.dynamic.CPU_LOAD]
 Meter                            = STRING
 MeasureName                      = sensor.CPU_LOAD
 MeterStyle                       = style.text.3x
 FontColor                        = #RGB#,#FrameOneTransparency#
 X                                = (#FrameOneDisplacementMultiplierX2# * (#X_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2) * #Phi#))))
 Y                                = (#FrameOneDisplacementMultiplierY2# * (#Y_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2) * #Phi#))))
 Text                             = %1%
 DynamicVariables                 = 1
 Group                            = #cpu# | #cpu_meters# | #texts# | #texts_dynamic# | #frame_one#

; --- CPU TEMP

; - CPU TEMP = CPU LOAD * Phi what equals 

; - X = R + Phi * (Phi * (½R * √2)) what equals Radius + Radius

; - Y = R - Phi * (Phi * (½R * √2)) what equals Radius - Radius

[text.dynamic.CPU_TEMP]
 Meter                            = STRING
 MeasureName                      = sensor.CPU_TEMP
 MeterStyle                       = style.text.4x
 FontColor                        = #RGB#,#FrameOneTransparency#
 X                                = (#FrameOneDisplacementMultiplierX3# * (#X_Axis# + (#MainArcRadius# + (#MainArcRadius#))))
 Y                                = (#FrameOneDisplacementMultiplierY3# * (#Y_Axis# + (#MainArcRadius# - (#MainArcRadius#))))
 Text                             = %1'
 DynamicVariables                 = 1
 Group                            = #cpu# | #cpu_meters# | #texts# | #texts_dynamic# | #frame_one#

; --- CLICKABLE ROUNDS

;[shape.CLICK_AREA_CPU_TITLE]
; Meter                            = Shape
 ;X                                = (#X_Axis# + (#MainArcRadius# + ((#MainArcRadius# / 2))))
 ;Y                                = (#Y_Axis# + (#MainArcRadius# - ((#MainArcRadius# / 2))))
; Shape                            = Rectangle -(2*([calculation.1xFontSize])),-(2*([calculation.1xFontSize])),(2*([calculation.1xFontSize])),(2*([calculation.1xFontSize])),(2*#MainArcRadius#) | Extend MyModifiers1
; MyModifiers1                     = Fill Color 150,50,50,200 | StrokeWidth 0 | Stroke Color 46,115,31,111
; DynamicVariables                 = 1