[Metadata]
 Name                                     = Elemetry
 Version                                  = 1.0.0a
 Author                                   = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                                  = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                              = Suite for PC monitoring

[Variables]

 DEFAULT_Phi                              = 1.618

 DEFAULT_MainColor                        = 93, 255, 190, 255
 DEFAULT_SecondaryColor                   = 200,150,255,255
 DEFAULT_MainArcRadius                    = 230

 DEFAULT_X_Axis                           = (#MainArcRadius# * 0.01 + 1)
 DEFAULT_Y_Axis                           = (#MainArcRadius# * 0.01 + 1)

; --- FONTS

 DEFAULT_MainFont                         = BUNGEE HAIRLINE

; --- HWiNFO Indexes
 
 DEFAULT_HWS                              = Sensor
 DEFAULT_HWL                              = Label
 DEFAULT_HWV                              = Value
 DEFAULT_HWVR                             = ValueRaw

; - CPU

 DEFAULT_CpuLoadIndex                     = 5
 DEFAULT_CpuTempIndex                     = 6
 DEFAULT_CpuThrottlingIndex               = 7
 DEFAULT_CpuPowerIndex                    = 8

; - GPU

 DEFAULT_GpuLoadIndex                     = 21
 DEFAULT_GpuTempIndex                     = 19
 DEFAULT_GpuThrottlingIndex               = 23
 DEFAULT_GpuPowerIndex                    = 20

; - RAM

 DEFAULT_RamLoadIndex                     = 4
 DEFAULT_RamFreeIndex                     = 3

; - VIRTUAL RAM

 DEFAULT_VirtualRamLoadIndex              = 1
 DEFAULT_VirtualRamFree                   = 0

; - VIDEO RAM

 DEFAULT_VideoRamLoadIndex                = 22
 DEFAULT_VideoRamFreeIndex                = 24

; - NETWORK

 DEFAULT_NetOneInIndex                    = 25
 DEFAULT_NetOneOutIndex                   = 26

 DEFAULT_NetTwoInIndex                    = 27
 DEFAULT_NetTwoOutIndex                   = 28

; - DRIVE ONE

 DEFAULT_DriveOneReadActivityIndex        = 9
 DEFAULT_DriveOneWriteActivityIndex       = 10
 DEFAULT_DrveOneTotalActivityIndex        = 11
 DEFAULT_DriveOneReadRateIndex            = 12
 DEFAULT_DriveOneWriteRateIndex           = 13

; - DRIVE TWO

 DEFAULT_DriveTwoReadActivityIndex        = 14
 DEFAULT_DriveTowWriteActivityIndex       = 15
 DEFAULT_DriveTwoTotalActivityIndex       = 16
 DEFAULT_DriveTwoReadRateIndex            = 17
 DEFAULT_DriveTwoWriteRateIndex           = 18
