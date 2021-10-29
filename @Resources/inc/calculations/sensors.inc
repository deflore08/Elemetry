[Metadata]
 Name                             = Elemetry
 Version                          = 1.0.0a
 Author                           = deflore08 (deflore08@daid-art.online) | https://www.deviantart.com/deflore08
 License                          = Creative Commons Attribution-Non-Commercial-Share Alike 4.0
 Information                      = Suite for PC monitoring

; --- FONTS SIZES

; - Font size depends on #MainArcRadius# variable directly, it's all about golden proportion (PHI = 1.618).
; - After we get a necessary fonr size in Pixels we should convert it to Points with multipliyng on 0.75 coefficient, because Rainmeter calculates Fonts only in Points.

; - Example:

; - With default Radius value (230px) 1xFontSize = 230 / PHI / PHI / PHI = ~54px. Then we convert it to Points: 54 * 0.75 = ~40.
; - So, 1xFontSize = 40pt. Then we just divided this value on PHI and getting next sequences values: 25, 15, 9... I hope i clarified it well. :)

[calculation.1xFontSize]
 Measure                          = CALC
 Formula                          = (((#MainArcRadius# / #Phi#) / #Phi# / #Phi#) * 0.75)
 DynamicVariables                 = 1
 Group                            = #calculations# | #texts_calculations# | #texts#

[calculation.2xFontSize]
 Measure                          = CALC
 Formula                          = ([calculation.1xFontSize] / #Phi#)
 DynamicVariables                 = 1
 Group                            = #calculations# | #texts_calculations# | #texts#

[calculation.3xFontSize]
 Measure                          = CALC
 Formula                          = ([calculation.2xFontSize] / #Phi#)
 DynamicVariables                 = 1
 Group                            = #calculations# | #texts_calculations# | #texts#

[calculation.4xFontSize]
 Measure                          = CALC
 Formula                          = ([calculation.3xFontSize] / #Phi#)
 DynamicVariables                 = 1
 Group                            = #calculations# | #texts_calculations# | #texts#

; --- CPU SENSORS

[sensor.CPU_LOAD]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##CpuLoadIndex#
 RegExpSubstitute                 = 1
 Substitute                       = \.":"","^(.{0,2}).+$":"\1"
 Group                            = #sensors# | #cpu_sensors# | #cpu#

[sensor.CPU_TEMP]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##CpuTempIndex#
 Group                            = #sensors# | #cpu_sensors# | #cpu#

[sensor.CPU_POWER]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##CpuPowerIndex#
 Group                            = #sensors# | #cpu_sensors# | #cpu#

[sensor.CPU_THROTTLING]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##CpuThrottlingIndex#
 RegExpSubstitute                 = 1
 Substitute                       = "Yes":"1", "No":"0"
 Group                            = #sensors# | #cpu_sensors# | #cpu#

; --- GPU SENSORS

[sensor.GPU_LOAD]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##GpuLoadIndex#
 RegExpSubstitute                 = 1
 Substitute                       = \.":"","^(.{0,2}).+$":"\1"
 Group                            = #sensors# | #gpu_sensors# | #gpu#

[sensor.GPU_TEMP]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##GpuTempIndex#
 RegExpSubstitute                 = 1
 Substitute                       = "^(.{0,2}).+$":"\1"
 Group                            = #sensors# | #gpu_sensors# | #gpu#

[sensor.GPU_POWER]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##GpuPowerIndex#
 Group                            = #sensors# | #gpu_sensors# | #gpu#

[sensor.GPU_THROTTLING]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##GpuThrottlingIndex#
 RegExpSubstitute                 = 1
 Substitute                       = "Yes":"1", "No":"0"
 Group                            = #sensors# | #gpu_sensors# | #gpu#

; --- RAM SENSORS

[sensor.RAM_LOAD]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##RamLoadIndex#
 RegExpSubstitute                 = 1
 Substitute                       = "^(.{0,2}).+$":"\1"
 Group                            = #sensors# | #ram_sensors# | #ram#

[sensor.RAM_FREE]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##RamFreeIndex#
 Group                            = #sensors# | #ram_sensors# | #ram#

; --- VRAM SENSORS

; - VIDEO RAM

[sensor.VIDEO_RAM_LOAD]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##VideoRamLoadIndex#
 RegExpSubstitute                 = 1
 Substitute                       = "^(.{0,2}).+$":"\1"
 Group                            = #sensors# | #vram_sensors# | #vram#

[sensor.VIDEO_RAM_FREE]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##VideoRamFreeIndex#
 Group                            = #sensors# | #vram_sensors# | #vram#

; - VIRTUAL RAM

[sensor.VIRTUAL_RAM_LOAD]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##VirtualRamLoadIndex#
 RegExpSubstitute                 = 1
 Substitute                       = "^(.{0,2}).+$":"\1"
 Group                            = #sensors# | #vram_sensors# | #vram#

[sensor.VIRTUAL_RAM_FREE]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##VirtualRamFreeIndex#
 Group                            = #sensors# | #vram_sensors# | #vram#

; --- FREE MEMORY CALCULATION

[calculation.VIDEO_RAM_FREE]
 Measure                          = CALC
 Formula                          = [sensor.VIDEO_RAM_FREE] / [sensor.VIDEO_RAM_LOAD] * (100 - [sensor.VIDEO_RAM_LOAD])
 DynamicVariables                 = 1
 Group                            = #calculations# | #vram_calculations# | #vram#

[calculation.VIRTUAL_RAM_FREE]
 Measure                          = CALC
 Formula                          = [sensor.VIRTUAL_RAM_FREE] / [sensor.VIRTUAL_RAM_LOAD] * (100 - [sensor.VIRTUAL_RAM_LOAD])
 DynamicVariables                 = 1
 Group                            = #calculations# | #vram_calculations# | #vram#

 ; --- NET

[sensor.NET_ONE_IN]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##NetOneInIndex#
 Group                            = #sensors# | #net_sensors# | #net#

[sensor.NET_ONE_OUT]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##NetOneOutIndex#
 Group                            = #sensors# | #net_sensors# | #net#

[sensor.NET_TWO_IN]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##NetTwoInIndex#
 Group                            = #sensors# | #net_sensors# | #net#

[sensor.NET_TWO_OUT]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##NetTwoOutIndex#
 Group                            = #sensors# | #net_sensors# | #net#

; --- DRIVES

; - DRIVE ONE

[sensor.DRIVE_ONE_READ_ACTIVITY]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##DriveOneReadActivityIndex#
 Group                            = #sensors# | #drives_sensors# | #drives#

[sensor.DRIVE_ONE_WRITE_ACTIVITY]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##DriveOneWriteActivityIndex#
 Group                            = #sensors# | #drives_sensors# | #drives#

[sensor.DRIVE_ONE_TOTAL_ACTIVITY]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##DriveOneTotalActivityIndex#
 Group                            = #sensors# | #drives_sensors# | #drives#

[sensor.DRIVE_ONE_READ_RATE]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##DriveOneReadRateIndex#
 Group                            = #sensors# | #drives_sensors# | #drives#

[sensor.DRIVE_ONE_WRITE_RATE]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##DriveOneWriteRateIndex#
 Group                            = #sensors# | #drives_sensors# | #drives#

; - DRIVE TWO

[sensor.DRIVE_TWO_READ_ACTIVITY]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##DriveTwoReadActivityIndex#
 Group                            = #sensors# | #drives_sensors# | #drives#

[sensor.DRIVE_TWO_WRITE_ACTIVITY]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##DriveTwoWriteActivityIndex#
 Group                            = #sensors# | #drives_sensors# | #drives#

[sensor.DRIVE_TWO_TOTAL_ACTIVITY]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##DriveTwoTotalActivityIndex#
 Group                            = #sensors# | #drives_sensors# | #drives#

[sensor.DRIVE_TWO_READ_RATE]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##DriveTwoReadRateIndex#
 Group                            = #sensors# | #drives_sensors# | #drives#

[sensor.DRIVE_TWO_WRITE_RATE]
 Measure                          = Registry
 RegHKey                          = HKEY_CURRENT_USER
 RegKey                           = SOFTWARE\HWiNFO64\VSB
 RegValue                         = #HWVR##DriveTwoWriteRateIndex#
 Group                            = #sensors# | #drives_sensors# | #drives#