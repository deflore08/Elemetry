[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

[Variables]


 MainArcLeftStartX                = (#X_Axis# + 345)
 MainArcLeftStartY                = (#Y_Axis# + 30)
 MainArcLeftEndX                  = (#X_Axis# + 345)
 MainArcLeftEndY                  = (#Y_Axis# + 30)

 MainArcRightStartX               = (#X_Axis# + 115)
 MainArcRightStartY               = (#Y_Axis# + 430)
 MainArcRightEndX                 = (#X_Axis# + 430)
 MainArcRightEndY                 = (#Y_Axis# + 115)

 MainArcStartAnglePoint           = 60
 MainArcEndAnglePoint             = 0
 MainArcAngleStart                = 60
 MainArcAngle                     = 150

 MainDash1                        = 0

 ArcArcLeavesStrokeColor          = 255,50,255,255
 ArcLeavesStrokeWidth             = 0.5

[shape.round_middle]
 Meter                            = Shape
 X                                = (#X_Axis# + #MainArcRadius#)
 Y                                = (#Y_Axis# + #MainArcRadius#)
 Shape                            = Rectangle -#MainArcRadius#,-#MainArcRadius#,(2*#MainArcRadius#),(2*#MainArcRadius#),(2*#MainArcRadius#) | Extend MyModifiers1
 MyModifiers1                     = Fill Color 50,50,50,1 | StrokeWidth 0 | Stroke Color 46,115,31,111
 DynamicVariables                 = 1
 ;MouseOverAction                  = [!CommandMeasure animation.ArcGrow "Stop 2"][!CommandMeasure animation.ArcGrow "Execute 1"][!CommandMeasure animation.ArcGrow "Stop 4"][!CommandMeasure animation.ArcGrow "Execute 3"]
 ;MouseLeaveAction                 = [!CommandMeasure animation.ArcGrow "Stop 1"][!CommandMeasure animation.ArcGrow "Execute 2"][!CommandMeasure animation.ArcGrow "Stop 3"][!CommandMeasure animation.ArcGrow "Execute 4"]
 ;MouseScrollUpAction              = [!SetVariable MainArcRadius "(#MainArcRadius# + 5)"][!Update]
 ;MouseScrollDownAction            = [!SetVariable MainArcRadius "(#MainArcRadius# - 5)"][!Update]
 MouseScrollUpAction              = [!CommandMeasure animation.FRAME_TWO_TO_FRAME_ONE "Stop 1"][!CommandMeasure animation.FRAME_ONE_TO_FRAME_TWO "Execute 1"]
 MouseScrollDownAction            = [!CommandMeasure animation.FRAME_ONE_TO_FRAME_TWO "Stop 1"][!CommandMeasure animation.FRAME_TWO_TO_FRAME_ONE "Execute 1"]
 ;MouseOverAction                  = [!CommandMeasure animation.DASH "Stop 2"][!CommandMeasure animation.DASH "Execute 1"]
 ;MouseLeaveAction                 = [!CommandMeasure animation.DASH "Stop 1"][!CommandMeasure animation.DASH "Execute 2"]
 MiddleMouseUpAction              = [!ToggleMeterGroup #substrate#]

[shape.arc_left]
 Meter                            = Shape
 DynamicVariables                 = 1
 Shape                            = Arc (#MainArcLeftStartX#+#MainArcRadius#*(Cos(Rad(#MainArcStartAnglePoint#+#MainArcEndAnglePoint#))-Cos(Rad(#MainArcStartAnglePoint#)))),(#MainArcLeftStartY#+#MainArcRadius#*(Sin(Rad(#MainArcStartAnglePoint#))-Sin(Rad(#MainArcStartAnglePoint#+#MainArcEndAnglePoint#)))),(#MainArcLeftStartX#+#MainArcRadius#*(Cos(Rad(#MainArcAngleStart#+#MainArcAngle#))-Cos(Rad(#MainArcAngleStart#)))),(#MainArcLeftStartY#+#MainArcRadius#*(Sin(Rad(#MainArcAngleStart#))-Sin(Rad(#MainArcAngleStart#+#MainArcAngle#)))),#MainArcRadius#,#MainArcRadius#,0,1,0,0 | StrokeWidth #ArcLeavesStrokeWidth# | Stroke Color #SecondaryColor# | StrokeDashes #MainDash1#,#MainDash2#,#MainDash3#

[shape.arc_right]
 Meter                            = Shape
 Shape                            = Arc (#MainArcRightStartX#-#MainArcRadius#*(Cos(Rad(#MainArcStartAnglePoint#+#MainArcEndAnglePoint#))-Cos(Rad(#MainArcStartAnglePoint#)))) ,  (#MainArcRightStartY#-#MainArcRadius#*(Sin(Rad(#MainArcStartAnglePoint#))-Sin(Rad(#MainArcStartAnglePoint#+#MainArcEndAnglePoint#)))) , (#MainArcRightStartX#-#MainArcRadius#*(Cos(Rad(#MainArcAngleStart#+#MainArcAngle#))-Cos(Rad(#MainArcAngleStart#)))) , (#MainArcRightStartY#-#MainArcRadius#*(Sin(Rad(#MainArcAngleStart#))-Sin(Rad(#MainArcAngleStart#+#MainArcAngle#)))) , #MainArcRadius#,#MainArcRadius#,0,1,0,0 | StrokeWidth #ArcLeavesStrokeWidth# | Stroke Color #SecondaryColor# | StrokeDashes 0,0,#MainDash1#
 DynamicVariables                 = 1