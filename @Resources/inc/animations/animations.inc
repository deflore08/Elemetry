[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

; --- 1 FRAME -> 2 FRAME

[animation.DASH]
 Measure                          = PLUGIN
 Plugin                           = ActionTimer
 DynamicVariables                 = 1
 
 ActionList1                      = Repeat Dash1Grow, 1, 100
 Dash1Grow                        = [!SetVariable MainDash1 "(Clamp(#Maindash1#+6,0,600))"][!SetVariable MainArcEndAnglePoint "(Clamp(#MainArcEndAnglePoint#+2,0,90))"][!SetVariable MainArcAngle "(Clamp(#MainArcAngle#+2,150,240))"][!Update]
 ActionList2                      = Repeat Dash1Decay, 1, 100
 Dash1Decay                       = [!SetVariable MainDash1 "(Clamp(#Maindash1#-6,0,600))"][!SetVariable MainArcEndAnglePoint "(Clamp(#MainArcEndAnglePoint#-2,0,90))"][!SetVariable MainArcAngle "(Clamp(#MainArcAngle#-2,150,240))"][!Update]
