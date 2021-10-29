[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

[Variables]
 
 MainAngleMultiplier              = 5
 MainDashMultiplier               = 48

 FrameOneTransparency             = 255
 FrameOneTransparencySpeed        = 20
 FrameTwoTransparency             = 0
 FrameTwoTransparencySpeed        = 20
 FrameThreeTransparency           = 0

; - CPU TITLE: X1 = 0.7; Y1 = 1.8

 FrameOneDisplacementMultiplierX1 = 1
 FrameOneDisplacementMultiplierY1 = 1

; - CPU LOAD: X2 = 0.6; Y2 = 3.5

 FrameOneDisplacementMultiplierX2 = 1
 FrameOneDisplacementMultiplierY2 = 1

; - CPU TEMP: X3 = 0.55; Y3 = 8.5

 FrameOneDisplacementMultiplierX3 = 1
 FrameOneDisplacementMultiplierY3 = 1

; - RAM TITLE: X1 = 1.8; Y1 = 1.8

 FrameTwoDisplacementMultiplier1  = 1.8

; - RAM LOAD: X2 = 3.5; Y2 = 3.5

 FrameTwoDisplacementMultiplier2  = 3.5

; - RAM FREE: X3 = 8.5; Y3 = 8.5

 FrameTwoDisplacementMultiplier3  = 8.5

; -- VRAM TITLE

 FrameTwoDisplacementMultiplier4  = 0.7

; - RAM LOAD: X2 = 1.8; Y2 = 3.5

 FrameTwoDisplacementMultiplier5  = 0.6

; - RAM FREE: X3 = 1.8; Y3 = 8.5

 FrameTwoDisplacementMultiplier6  = 0.55

 FrameTwoShow1                    = [!SetVariable FrameTwoDisplacementMultiplier1 "(Clamp((#FrameTwoDisplacementMultiplier1#-(1/10)),1,1.8))"]
 FrameTwoShow2                    = [!SetVariable FrameTwoDisplacementMultiplier2 "(Clamp((#FrameTwoDisplacementMultiplier2#-(1/10)),1,3.5))"]
 FrameTwoShow3                    = [!SetVariable FrameTwoDisplacementMultiplier3 "(Clamp((#FrameTwoDisplacementMultiplier3#-(1/2)),1,8.5))"]
 FrameTwoShow4                    = [!SetVariable FrameTwoDisplacementMultiplier4 "(Clamp(#FrameTwoDisplacementMultiplier4#+(1/26),0.7,1))"]
 FrameTwoShow5                    = [!SetVariable FrameTwoDisplacementMultiplier5 "(Clamp(#FrameTwoDisplacementMultiplier5#+(1/25),0.6,1))"]
 FrameTwoShow6                    = [!SetVariable FrameTwoDisplacementMultiplier6 "(Clamp(#FrameTwoDisplacementMultiplier6#+(1/33),0.55,1))"]

; --- 1 FRAME -> 2 FRAME

[animation.FRAME_ONE_TO_FRAME_TWO]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 
 ActionList1                      = Repeat FrameOneToFrameTwo, 1, 35
 FrameOneToFrameTwo               = [!SetVariable MainDash1 "(Clamp(#Maindash1#+#MainDashMultiplier#,0,1200))"][!SetVariable MainArcEndAnglePoint "(Clamp(#MainArcEndAnglePoint#+#MainAngleMultiplier#,0,90))"][!SetVariable MainArcAngle "(Clamp(#MainArcAngle#+#MainAngleMultiplier#,150,240))"][!SetVariable FrameOneTransparency "(Clamp(#FrameOneTransparency#-#FrameOneTransparencySpeed#,0,255))"][!SetVariable FrameTwoTransparency "(Clamp(#FrameTwoTransparency#+#FrameTwoTransparencySpeed#,0,255))"][!SetVariable FrameOneDisplacementMultiplierX1 "(Clamp(#FrameOneDisplacementMultiplierX1#-(1/26),0.7,1))"][!SetVariable FrameOneDisplacementMultiplierY1 "(Clamp((#FrameOneDisplacementMultiplierY1#+(1/10)),1,1.8))"][!SetVariable FrameOneDisplacementMultiplierX2 "(Clamp(#FrameOneDisplacementMultiplierX2#-(1/25),0.6,1))"][!SetVariable FrameOneDisplacementMultiplierY2 "(Clamp((#FrameOneDisplacementMultiplierY2#+(1/10)),1,3.5))"][!SetVariable FrameOneDisplacementMultiplierX3 "(Clamp(#FrameOneDisplacementMultiplierX3#-(1/33),0.55,1))"][!SetVariable FrameOneDisplacementMultiplierY3 "(Clamp((#FrameOneDisplacementMultiplierY3#+(1/2)),1,8.5))"]   [!SetVariable FrameTwoDisplacementMultiplier1 "(Clamp((#FrameTwoDisplacementMultiplier1#-(1/10)),1,1.8))"] [!SetVariable FrameTwoDisplacementMultiplier2 "(Clamp((#FrameTwoDisplacementMultiplier2#-(1/10)),1,3.5))"]  [!SetVariable FrameTwoDisplacementMultiplier3 "(Clamp((#FrameTwoDisplacementMultiplier3#-(1/2)),1,8.5))"]   [!SetVariable FrameTwoDisplacementMultiplier4 "(Clamp(#FrameTwoDisplacementMultiplier4#+(1/26),0.7,1))"]   [!SetVariable FrameTwoDisplacementMultiplier5 "(Clamp(#FrameTwoDisplacementMultiplier5#+(1/25),0.6,1))"] [!SetVariable FrameTwoDisplacementMultiplier6 "(Clamp(#FrameTwoDisplacementMultiplier6#+(1/33),0.55,1))"]   [!Update]


; --- 2 FRAME -> FRAME

[animation.FRAME_TWO_TO_FRAME_ONE]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1

 ActionList1                      = Repeat FrameTwoToFrameOne, 1, 35
 FrameTwoToFrameOne               = [!SetVariable MainDash1 "(Clamp(#Maindash1#-#MainDashMultiplier#,0,1200))"][!SetVariable MainArcEndAnglePoint "(Clamp(#MainArcEndAnglePoint#-#MainAngleMultiplier#,0,90))"][!SetVariable MainArcAngle "(Clamp(#MainArcAngle#-#MainAngleMultiplier#,150,240))"][!SetVariable FrameOneTransparency "(Clamp(#FrameOneTransparency#+#FrameOneTransparencySpeed#,0,255))"][!SetVariable FrameTwoTransparency "(Clamp(#FrameTwoTransparency#-#FrameTwoTransparencySpeed#,0,255))"][!SetVariable FrameOneDisplacementMultiplierX1 "(Clamp(#FrameOneDisplacementMultiplierX1#+(1/26),0.7,1))"][!SetVariable FrameOneDisplacementMultiplierY1 "(Clamp((#FrameOneDisplacementMultiplierY1#-(1/10)),1,1.8))"][!SetVariable FrameOneDisplacementMultiplierX2 "(Clamp(#FrameOneDisplacementMultiplierX2#+(1/25),0.6,1))"][!SetVariable FrameOneDisplacementMultiplierY2 "(Clamp((#FrameOneDisplacementMultiplierY2#-(1/10)),1,3.5))"][!SetVariable FrameOneDisplacementMultiplierX3 "(Clamp(#FrameOneDisplacementMultiplierX3#+(1/33),0.55,1))"][!SetVariable FrameOneDisplacementMultiplierY3 "(Clamp((#FrameOneDisplacementMultiplierY3#-(1/2)),1,8.5))"]  [!SetVariable FrameTwoDisplacementMultiplier1 "(Clamp((#FrameTwoDisplacementMultiplier1#+(1/10)),1,1.8))"]  [!SetVariable FrameTwoDisplacementMultiplier2 "(Clamp((#FrameTwoDisplacementMultiplier2#+(1/10)),1,3.5))"]  [!SetVariable FrameTwoDisplacementMultiplier3 "(Clamp((#FrameTwoDisplacementMultiplier3#+(1/2)),1,8.5))"]   [!SetVariable FrameTwoDisplacementMultiplier4 "(Clamp(#FrameTwoDisplacementMultiplier4#-(1/26),0.7,1))"]   [!SetVariable FrameTwoDisplacementMultiplier5 "(Clamp(#FrameTwoDisplacementMultiplier5#-(1/25),0.6,1))"] [!SetVariable FrameTwoDisplacementMultiplier6 "(Clamp(#FrameTwoDisplacementMultiplier6#-(1/33),0.55,1))"]   [!Update]

; --- AXIS BACKGROUND

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