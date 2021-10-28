[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

[Variables]

 Angle_1                          = 90
 Angle_2                          =  
 

 
 ArcMainRadiusX                   = 230
 ArcMainRadiusY                   = 230



 ArcMiddleCenterX                 = 230
 ArcMiddleCenterY                 = 230

 Arc1AngleStart                   = 270
 ;Arc1AngleEnd                     = 180
 Arc1StartX                       = 460
 Arc1StartY                       = 460
 Arc1Angle                        = 0

 Arc2AngleStart                   = 270
 ;Arc2AngleEnd                     = 180
 Arc2StartX                       = 460
 Arc2StartY                       = 460
 Arc2Angle                        = 0

 Arc3StartX                       = 460
 Arc3StartY                       = 460
 Arc3EndX                         = 460
 Arc3EndY                         = 460
 Arc3ProgressRadiusX              = 6900
 Arc3ProgressRadiusY              = 6900
 Arc3Angle                        = 0
 Arc3AngleStart                   = 270

;1 at startup, either 0 or 1

[measureMouse]
 Measure                          = PLUGIN
 Plugin                           = Mouse
 MouseMoveAction                  = [!SetOption text.dynamic.Coordinates Text "mouse move#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 LeftMouseDownAction              = [!SetOption text.dynamic.Coordinates Text "Left mouse down#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 LeftMouseUpAction                = [!SetOption text.dynamic.Coordinates Text "Left mouse up#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 LeftMouseDragAction              = [!SetOption text.dynamic.Coordinates Text "Left mouse drag#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 RightMouseDownAction             = [!SetOption text.dynamic.Coordinates Text "Right mouse down#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 RightMouseUpAction               = [!SetOption text.dynamic.Coordinates Text "Right mouse up#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 RightMouseDragAction             = [!SetOption text.dynamic.Coordinates Text "Right mouse drag#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 MiddleMouseDownAction            = [!SetOption text.dynamic.Coordinates Text "Middle mouse down#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 MiddleMouseUpAction              = [!SetOption text.dynamic.Coordinates Text "Middle mouse up#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 MiddleMouseDragAction            = [!SetOption text.dynamic.Coordinates Text "Middle mouse drag#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 X1MouseDownAction                = [!SetOption text.dynamic.Coordinates Text "X1 mouse down#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 X1MouseUpAction                  = [!SetOption text.dynamic.Coordinates Text "X1 mouse up#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 X1MouseDragAction                = [!SetOption text.dynamic.Coordinates Text "X1 mouse drag#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 X2MouseDownAction                = [!SetOption text.dynamic.Coordinates Text "X2 mouse down#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 X2MouseUpAction                  = [!SetOption text.dynamic.Coordinates Text "X2 mouse up#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 X2MouseDragAction                = [!SetOption text.dynamic.Coordinates Text "X2 mouse drag#CRLF#$mouseX$, $mouseY$"][!UpdateMeter text.dynamic.Coordinates][!Redraw]
 DynamicVariables                 = 1
 RelativeToSkin                   = 1

[shape.background_square]
 Meter                            = SHAPE
 X                                = 0
 Y                                = 0
 Shape                            = Rectangle 0,0,(4 * #MainArcRadius#),(4 * #MainArcRadius#) | Extend Mod
 Mod                              = Fill Color 0,0,0,140 | StrokeWidth 1 | Stroke Color 140,40,100,200
 MouseScrollUpAction              = [!SetVariable MainArcRadius "(#MainArcRadius# + 3)"][!Update]
 MouseScrollDownAction            = [!SetVariable MainArcRadius "(#MainArcRadius# - 3)"][!Update]
 DynamicVariables                 = 1
 Group                            = #substrate#
 Hidden                           = 1

[shape.Axis_X]
 Meter                            = SHAPE
 Shape                            = Line 0,460,920,460 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.Axis_Y]
 Meter                            = SHAPE
 Shape                            = Line 460,0,460,920 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.Axis_Dia_Left_Right]
 Meter                            = SHAPE
 Shape                            = Line 0,0,920,920 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.Axis_Dia_Right_Left]
 Meter                            = SHAPE
 Shape                            = Line 920,0,0,920 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.Y_0.5]
 Meter                            = SHAPE
 Shape                            = Line 115,0,115,920 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.Y_1]
 Meter                            = SHAPE
 Shape                            = Line 230,0,230,920 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.Y_1.5]
 Meter                            = SHAPE
 Shape                            = Line 345,0,345,920 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.Y_2]
 Meter                            = SHAPE
 Shape                            = Line 690,0,690,920 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.Y_2.5]
 Meter                            = SHAPE
 Shape                            = Line 575,0,575,920 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.Y_3]
 Meter                            = SHAPE
 Shape                            = Line 805,0,805,920 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.X_1]
 Meter                            = SHAPE
 Shape                            = Line 0,230,920,230 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.X_1.5]
 Meter                            = SHAPE
 Shape                            = Line 0,345,920,345 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

;[shape.X_1.7]
; Meter                            = SHAPE
; Shape                            = Line 0,415,900,415 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
; Hidden                           = 1

[shape.X_2]
 Meter                            = SHAPE
 Shape                            = Line 0,690,920,690 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.X_2.5]
 Meter                            = SHAPE
 Shape                            = Line 0,575,920,575 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.X_3]
 Meter                            = SHAPE
 Shape                            = Line 0,805,920,805 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[shape.X_3.5]
 Meter                            = SHAPE
 Shape                            = Line 0,115,920,115 | StrokeWidth 1 | Stroke Color 255,255,255,150 | StrokeDashes 2,3.5
 Group                            = #substrate#
 Hidden                           = 1

[text.dynamic.Coordinates]
 Meter                            = STRING
 X                                = 110
 Y                                = 40
 W                                = 120
 H                                = 40
 FontFace                         = Bungee Hairline
 AntiAlias                        = 1
 StringAlign                      = CenterCenter
 FontColor                        = 255,255,255,255
 Y                                = R
 FontSize                         = 8
 Text                             = nothing#CRLF#0, 0
 Group                            = #substrate#
 Hidden                           = 1

[animation.ArcGrow]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 
 ActionList1                      = Repeat ArcGrow, 4, 100
 ArcGrow                          = [!SetVariable Arc1Angle "(Clamp(#Arc1Angle#+5,0,90))"][!SetVariable Arc2Angle "(Clamp(#Arc1Angle#+5,0,90))"][!Update]
 ActionList2                      = Repeat ArcDecay, 4, 100
 ArcDecay                         = [!SetVariable Arc1Angle "(Clamp(#Arc1Angle#-5,0,90))"][!SetVariable Arc2Angle "(Clamp(#Arc1Angle#-5,0,90))"][!Update]
 ActionList3                      = Repeat Arc3GrowLine, 1, 46 
 Arc3GrowLine                     = [!SetVariable Arc3EndX "(Clamp(#Arc3EndX#-20,220,900))"][!SetVariable Arc3EndY "(Clamp(#Arc3EndY#+20,0,680))"][!SetVariable Arc3ProgressRadiusX "(Clamp(#Arc3ProgressRadiusX# - 920,230,6900))"][!SetVariable Arc3ProgressRadiusY "(Clamp(#Arc3ProgressRadiusY# - 920,230,6900))"][!Update]
 ;Arc3GrowRadius                   = [!SetVariable Arc3ProgressRadiusX "(Clamp(#Arc3ProgressRadiusX# - 920,230,6900))"][!SetVariable Arc3ProgressRadiusY "(Clamp(#Arc3ProgressRadiusY# - 920,230,6900))"][!Update]
 ActionList4                      = Repeat Arc3DecayRadius, 1, 50 
 Arc3DecayRadius                  = [!SetVariable Arc3ProgressRadiusX "(Clamp(#Arc3ProgressRadiusX# + 1940,230,6900))"][!SetVariable Arc3ProgressRadiusY "(Clamp(#Arc3ProgressRadiusY# + 1940,230,6900))"][!SetVariable Arc3EndX "(Clamp(#Arc3EndX#+20,0,450))"][!SetVariable Arc3EndY "(Clamp(#Arc3EndY#-20,450,900))"][!Update]
 ;Arc3DecayLine                    = [!SetVariable Arc3EndX "(Clamp(#Arc3EndX#+20,0,450))"][!SetVariable Arc3EndY "(Clamp(#Arc3EndY#-20,450,900))"][!Update]
 
[shape.arc1_CPU]
 Meter                            = Shape
 Shape                            = Arc 460,460,690,230,230,230,0,0,0,0 | StrokeWidth 1 | Stroke Color #ArcArcLeavesStrokeColor# | StrokeDashes 3,4.5
 DynamicVariables                 = 1
 Group                            = #substrate#
 Hidden                           = 1

[shape.arc2_CPU]
 Meter                            = Shape
 Shape                            = Arc #Arc1StartX#,#Arc1StartY#,(#Arc1StartX#+#ArcMainRadiusX#*(Cos(Rad(#Arc1AngleStart#+#Arc1Angle#))-Cos(Rad(#Arc1AngleStart#)))),(#Arc1StartY#+#ArcMainRadiusY#*(Sin(Rad(#Arc1AngleStart#))-Sin(Rad(#Arc1AngleStart#+#Arc1Angle#)))),#ArcMainRadiusX#,#ArcMainRadiusY#,0,1,0,0 | StrokeWidth #ArcLeavesStrokeWidth# | Stroke Color #ArcArcLeavesStrokeColor# | StrokeDashes 3,4.5
 AntiAlias                        = 1
 DynamicVariables                 = 1
 Group                            = #substrate#
 Hidden                           = 1

[shape.arc1_GPU]
 Meter                            = Shape
 Shape                            = Arc #Arc2StartX#,#Arc2StartY#,(#Arc2StartX#-#ArcMainRadiusX#*(Cos(Rad(#Arc2AngleStart#+#Arc2Angle#))-Cos(Rad(#Arc2AngleStart#)))),(#Arc2StartY#-#ArcMainRadiusY#*(Sin(Rad(#Arc2AngleStart#))-Sin(Rad(#Arc2AngleStart#+#Arc2Angle#)))),#ArcMainRadiusX#,#ArcMainRadiusY#,0,1,0,0 | StrokeWidth #ArcLeavesStrokeWidth# | Stroke Color #ArcArcLeavesStrokeColor# | StrokeDashes 3,4.5
 DynamicVariables                 = 1
 Group                            = #substrate#
 Hidden                           = 1

[shape.arc2_GPU]
 Meter                            = Shape
 Shape                            = Arc 460,460,#Arc3EndX#,#Arc3EndY#,#Arc3ProgressRadiusX#,#Arc3ProgressRadiusY#,0,0,0,0 | StrokeWidth 1 | Stroke Color #ArcArcLeavesStrokeColor# | StrokeDashes 3,4.5
 DynamicVariables                 = 1
 Group                            = #substrate#
 Hidden                           = 1