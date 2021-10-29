[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

[Variables]

; --- CONSTANTS

 Phi                              = 1.618

; --- COLORS
 Red                              = 255
 Green                            = 255
 Blue                             = 255
 RGB                              = 255,255,255
 MainTransparency                 = 255
 SecondaryTransparency            = 255
 MainColor                        = #Red#,#Green#,#Blue#,#MainTransparency#
 SecondaryColor                   = 255,255,255,#SecondaryTransparency#


; --- FONTS

 MainFont                         = BUNGEE HAIRLINE

; --- DIMENSIONS

 MainArcRadius                    = 230

 X_Axis                           = 30
 Y_Axis                           = 30

; --- HWiNFO Indexes
 
 HWS                              = Sensor
 HWL                              = Label
 HWV                              = Value
 HWVR                             = ValueRaw

; - CPU

 CpuLoadIndex                     = 5
 CpuTempIndex                     = 6
 CpuThrottlingIndex               = 7
 CpuPowerIndex                    = 8

; - GPU

 GpuLoadIndex                     = 21
 GpuTempIndex                     = 19
 GpuThrottlingIndex               = 23
 GpuPowerIndex                    = 20

; - RAM

 RamLoadIndex                     = 4
 RamFreeIndex                     = 3

; - VIRTUAL RAM

 VirtualRamLoadIndex              = 1
 VirtualRamFreeIndex              = 0

; - VIDEO RAM

 VideoRamLoadIndex                = 22
 VideoRamFreeIndex                = 24

; - NETWORK

 NetOneInIndex                    = 25
 NetOneOutIndex                   = 26

 NetTwoInIndex                    = 27
 NetTwoOutIndex                   = 28

; - DRIVE ONE

 DriveOneReadActivityIndex        = 9
 DriveOneWriteActivityIndex       = 10
 DrveOneTotalActivityIndex        = 11
 DriveOneReadRateIndex            = 12
 DriveOneWriteRateIndex           = 13

; - DRIVE TWO

 DriveTwoReadActivityIndex        = 14
 DriveTowWriteActivityIndex       = 15
 DriveTwoTotalActivityIndex       = 16
 DriveTwoReadRateIndex            = 17
 DriveTwoWriteRateIndex           = 18