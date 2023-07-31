# PX4 Drone Autopilot

test

[![Releases](https://img.shields.io/github/release/PX4/PX4-Autopilot.svg)](https://github.com/PX4/PX4-Autopilot/releases) [![DOI](https://zenodo.org/badge/22634/PX4/PX4-Autopilot.svg)](https://zenodo.org/badge/latestdoi/22634/PX4/PX4-Autopilot)

[![Nuttx Targets](https://github.com/PX4/PX4-Autopilot/workflows/Nuttx%20Targets/badge.svg)](https://github.com/PX4/PX4-Autopilot/actions?query=workflow%3A%22Nuttx+Targets%22?branch=master) [![SITL Tests](https://github.com/PX4/PX4-Autopilot/workflows/SITL%20Tests/badge.svg?branch=master)](https://github.com/PX4/PX4-Autopilot/actions?query=workflow%3A%22SITL+Tests%22)

[![Discord Shield](https://discordapp.com/api/guilds/1022170275984457759/widget.png?style=shield)](https://discord.gg/dronecode)

This repository holds the [PX4](http://px4.io) flight control solution for drones, with the main applications located in the [src/modules](https://github.com/PX4/PX4-Autopilot/tree/main/src/modules) directory. It also contains the PX4 Drone Middleware Platform, which provides drivers and middleware to run drones.

PX4 is highly portable, OS-independent and supports Linux, NuttX and MacOS out of the box.

* Official Website: http://px4.io (License: BSD 3-clause, [LICENSE](https://github.com/PX4/PX4-Autopilot/blob/main/LICENSE))
* [Supported airframes](https://docs.px4.io/main/en/airframes/airframe_reference.html) ([portfolio](https://px4.io/ecosystem/commercial-systems/)):
  * [Multicopters](https://docs.px4.io/main/en/frames_multicopter/)
  * [Fixed wing](https://docs.px4.io/main/en/frames_plane/)
  * [VTOL](https://docs.px4.io/main/en/frames_vtol/)
  * [Autogyro](https://docs.px4.io/main/en/frames_autogyro/)
  * [Rover](https://docs.px4.io/main/en/frames_rover/)
  * many more experimental types (Blimps, Boats, Submarines, High altitude balloons, etc)
* Releases: [Downloads](https://github.com/PX4/PX4-Autopilot/releases)


## Building a PX4 based drone, rover, boat or robot

The [PX4 User Guide](https://docs.px4.io/main/en/) explains how to assemble [supported vehicles](https://docs.px4.io/main/en/airframes/airframe_reference.html) and fly drones with PX4.
See the [forum and chat](https://docs.px4.io/main/en/#getting-help) if you need help!


## Changing code and contributing

This [Developer Guide](https://docs.px4.io/main/en/development/development.html) is for software developers who want to modify the flight stack and middleware (e.g. to add new flight modes), hardware integrators who want to support new flight controller boards and peripherals, and anyone who wants to get PX4 working on a new (unsupported) airframe/vehicle.

Developers should read the [Guide for Contributions](https://docs.px4.io/main/en/contribute/).
See the [forum and chat](https://docs.px4.io/main/en/#getting-help) if you need help!


### Weekly Dev Call

The PX4 Dev Team syncs up on a [weekly dev call](https://docs.px4.io/main/en/contribute/).

> **Note** The dev call is open to all interested developers (not just the core dev team). This is a great opportunity to meet the team and contribute to the ongoing development of the platform. It includes a QA session for newcomers. All regular calls are listed in the [Dronecode calendar](https://www.dronecode.org/calendar/).


## Maintenance Team

Note: This is the source of truth for the active maintainers of PX4 ecosystem.

| Sector | Maintainer |
|---|---|
| Founder | [Lorenz Meier](https://github.com/LorenzMeier) |
| Architecture | [Daniel Agar](https://github.com/dagar) / [Beat Küng](https://github.com/bkueng)|
| State Estimation | [Mathieu Bresciani](https://github.com/bresch) / [Paul Riseborough](https://github.com/priseborough) |
| OS/NuttX | [David Sidrane](https://github.com/davids5) |
| Drivers | [Daniel Agar](https://github.com/dagar) |
| Simulation | [Jaeyoung Lim](https://github.com/Jaeyoung-Lim) |
| ROS2 | [Beniamino Pozzan](https://github.com/beniaminopozzan) |
| Community QnA Call | [Ramon Roche](https://github.com/mrpollo) |
| [Documentation](https://docs.px4.io/main/en/) | [Hamish Willee](https://github.com/hamishwillee) |

| Vehicle Type | Maintainer |
|---|---|
| Multirotor | [Matthias Grob](https://github.com/MaEtUgR) |
| Fixed Wing | [Thomas Stastny](https://github.com/tstastny) |
| Hybrid VTOL | [Silvan Fuhrer](https://github.com/sfuhrer) |
| Boat | x |
| Rover | x |

See also [maintainers list](https://px4.io/community/maintainers/) (px4.io) and the [contributors list](https://github.com/PX4/PX4-Autopilot/graphs/contributors) (Github). However it may be not up to date.

## Supported Hardware

Pixhawk standard boards and proprietary boards are shown below (discontinued boards aren't listed).

For the most up to date information, please visit [PX4 user Guide > Autopilot Hardware](https://docs.px4.io/main/en/flight_controller/).

### Pixhawk Standard Boards

These boards fully comply with Pixhawk Standard, and are maintained by the PX4-Autopilot maintainers and Dronecode team

* FMUv6X and FMUv6C
  * [CUAV Pixahwk V6X (FMUv6X)](https://docs.px4.io/main/en/flight_controller/cuav_pixhawk_v6x.html)
  * [Holybro Pixhawk 6X (FMUv6X)](https://docs.px4.io/main/en/flight_controller/pixhawk6x.html)
  * [Holybro Pixhawk 6C (FMUv6C)](https://docs.px4.io/main/en/flight_controller/pixhawk6c.html)
  * [Holybro Pix32 v6 (FMUv6C)](https://docs.px4.io/main/en/flight_controller/holybro_pix32_v6.html)
* FMUv5 and FMUv5X (STM32F7, 2019/20)
  * [Pixhawk 4 (FMUv5)](https://docs.px4.io/main/en/flight_controller/pixhawk4.html)
  * [Pixhawk 4 mini (FMUv5)](https://docs.px4.io/main/en/flight_controller/pixhawk4_mini.html)
  * [CUAV V5+ (FMUv5)](https://docs.px4.io/main/en/flight_controller/cuav_v5_plus.html)
  * [CUAV V5 nano (FMUv5)](https://docs.px4.io/main/en/flight_controller/cuav_v5_nano.html)
  * [Auterion Skynode (FMUv5X)](https://docs.auterion.com/avionics/skynode)
* FMUv4 (STM32F4, 2015)
  * [Pixracer](https://docs.px4.io/main/en/flight_controller/pixracer.html)
  * [Pixhawk 3 Pro](https://docs.px4.io/main/en/flight_controller/pixhawk3_pro.html)
* FMUv3 (STM32F4, 2014)
  * [Pixhawk 2](https://docs.px4.io/main/en/flight_controller/pixhawk-2.html)
  * [Pixhawk Mini](https://docs.px4.io/main/en/flight_controller/pixhawk_mini.html)
  * [CUAV Pixhack v3](https://docs.px4.io/main/en/flight_controller/pixhack_v3.html)
* FMUv2 (STM32F4, 2013)
  * [Pixhawk](https://docs.px4.io/main/en/flight_controller/pixhawk.html)

### Manufacturer supported

These boards are maintained to be compatible with PX4-Autopilot by the Manufacturers.

* [ARK Electronics ARKV6X](https://docs.px4.io/main/en/flight_controller/arkv6x.html)
* [CubePilot Cube Orange+](https://docs.px4.io/main/en/flight_controller/cubepilot_cube_orangeplus.html)
* [CubePilot Cube Orange](https://docs.px4.io/main/en/flight_controller/cubepilot_cube_orange.html)
* [CubePilot Cube Yellow](https://docs.px4.io/main/en/flight_controller/cubepilot_cube_yellow.html)
* [Holybro Durandal](https://docs.px4.io/main/en/flight_controller/durandal.html)
* [Airmind MindPX V2.8](http://www.mindpx.net/assets/accessories/UserGuide_MindPX.pdf)
* [Airmind MindRacer V1.2](http://mindpx.net/assets/accessories/mindracer_user_guide_v1.2.pdf)
* [Holybro Kakute F7](https://docs.px4.io/main/en/flight_controller/kakutef7.html)

### Community supported

These boards don't fully comply industry standards, and thus is solely maintained by the PX4 publc community members.

### Experimental

These boards are nor maintained by PX4 team nor Manufacturer, and is not guaranteed to be compatible with up to date PX4 releases.

* [Raspberry PI with Navio 2](https://docs.px4.io/main/en/flight_controller/raspberry_pi_navio2.html)
* [Bitcraze Crazyflie 2.0](https://docs.px4.io/main/en/complete_vehicles/crazyflie2.html)

## Project Roadmap

**Note: Outdated**

A high level project roadmap is available [here](https://github.com/orgs/PX4/projects/25).

## Project Governance

The PX4 Autopilot project including all of its trademarks is hosted under [Dronecode](https://www.dronecode.org/), part of the Linux Foundation.

<a href="https://www.dronecode.org/" style="padding:20px" ><img src="https://mavlink.io/assets/site/logo_dronecode.png" alt="Dronecode Logo" width="110px"/></a>
<a href="https://www.linuxfoundation.org/projects" style="padding:20px;"><img src="https://mavlink.io/assets/site/logo_linux_foundation.png" alt="Linux Foundation Logo" width="80px" /></a>
<div style="padding:10px">&nbsp;</div>

#Changes

chris@chris-ThinkPad-T460s:~/Desktop/PX4-Autopilot$ git show


commit 86f9647bd3625581a95732fe0131830ec3db0bde (HEAD -> main, origin/main, origin/HEAD)
Author: lazy-boi-13 <chriggi.weidmann@gmail.com>
Date:   Mon Jul 31 10:23:21 2023 -0400

    second commit

diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert b/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert
index 2782817873..c98cc5c8ed 100644
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert
+++ b/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert
@@ -17,7 +17,6 @@ param set-default SENS_EN_GPSSIM 1
 param set-default SENS_EN_BAROSIM 1
 param set-default SENS_EN_MAGSIM 1

-param set-default VT_B_TRANS_DUR 5
 param set-default VT_ELEV_MC_LOCK 0
 param set-default VT_TYPE 0
 param set-default VT_FW_DIFTHR_EN 1
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter b/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter
index 1fe1fdde6e..d5f86862fe 100644
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter
+++ b/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter
@@ -47,33 +47,38 @@ param set-default PWM_MAIN_REV 96 # invert both elevons
 # Single-EKF (for replay)
 param set-default EKF2_MULTI_IMU 0
 param set-default SENS_IMU_MODE 1
+param set-default EKF2_MULTI_MAG 0
+param set-default SENS_MAG_MODE 1

-param set-default FW_P_TC 0.6
-
-param set-default FW_PR_FF 0.1
+param set-default NPFG_PERIOD 12
+param set-default FW_PR_I 0.2
+param set-default FW_PR_P 0.2
 param set-default FW_PSP_OFF 2
-param set-default FW_RR_FF 0.1
-param set-default FW_RR_I 0.2
-param set-default FW_RR_P 0.3
-param set-default FW_THR_TRIM 0.35
-param set-default FW_THR_MAX 0.8
+param set-default FW_P_LIM_MIN -15
+param set-default FW_RR_P 0.2
+param set-default FW_THR_TRIM 0.33
+param set-default FW_THR_MAX 0.6
 param set-default FW_THR_MIN 0.05
-param set-default FW_T_CLMB_MAX 6
-param set-default FW_T_HRATE_FF 0.5
-param set-default FW_T_SINK_MAX 3
-param set-default FW_T_SINK_MIN 1.6
+param set-default FW_T_ALT_TC 2
+param set-default FW_T_CLMB_MAX 8
+param set-default FW_T_SINK_MAX 2.7
+param set-default FW_T_SINK_MIN 2.2
+param set-default FW_T_TAS_TC 2

 param set-default MC_AIRMODE 1
-param set-default MC_ROLL_P 3
-param set-default MC_PITCH_P 3
 param set-default MC_ROLLRATE_P 0.3
-param set-default MC_PITCHRATE_P 0.3

-param set-default VT_ARSP_TRANS 10
-param set-default VT_B_TRANS_DUR 5
+param set-default MPC_XY_P 0.8
+param set-default MPC_XY_VEL_P_ACC 3
+param set-default MPC_XY_VEL_I_ACC 4
+param set-default MPC_XY_VEL_D_ACC 0.1
+
+param set-default NAV_ACC_RAD 5
+
 param set-default VT_FW_DIFTHR_EN 1
-param set-default VT_FW_DIFTHR_S_Y 1
+param set-default VT_FW_DIFTHR_S_Y 0.5
 param set-default VT_F_TRANS_DUR 1.5
+param set-default VT_F_TRANS_THR 0.7
 param set-default VT_TYPE 0

 param set-default WV_EN 0
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/1045_gazebo-classic_quadtailsitter b/ROMFS/px4fmu_common/init.d-posix/airframes/1045_gazebo-classic_quadtailsitter
deleted file mode 100644
index 87afb523b1..0000000000
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/1045_gazebo-classic_quadtailsitter
+++ /dev/null
@@ -1,74 +0,0 @@
-#!/bin/sh
-#
-# @name Quadrotor + Tailsitter
-#
-# @type VTOL Quad Tailsitter
-#
-
-. ${R}etc/init.d/rc.vtol_defaults
-
-param set-default MAV_TYPE 20
-
-param set-default CA_AIRFRAME 4
-
-param set-default CA_ROTOR_COUNT 4
-param set-default CA_ROTOR0_PX 0.15
-param set-default CA_ROTOR0_PY 0.23
-param set-default CA_ROTOR0_KM 0.05
-param set-default CA_ROTOR1_PX -0.15
-param set-default CA_ROTOR1_PY -0.23
-param set-default CA_ROTOR1_KM 0.05
-param set-default CA_ROTOR2_PX 0.15
-param set-default CA_ROTOR2_PY -0.23
-param set-default CA_ROTOR2_KM -0.05
-param set-default CA_ROTOR3_PX -0.15
-param set-default CA_ROTOR3_PY 0.23
-param set-default CA_ROTOR3_KM -0.05
-
-param set-default CA_SV_CS_COUNT 0
-
-param set-default PWM_MAIN_FUNC1 101
-param set-default PWM_MAIN_FUNC2 102
-param set-default PWM_MAIN_FUNC3 103
-param set-default PWM_MAIN_FUNC4 104
-param set-default PWM_MAIN_FUNC5 0
-
-parm set-default FD_FAIL_R 70
-
-param set-default FW_P_TC 0.6
-
-param set-default FW_PR_I 0.3
-param set-default FW_PR_P 0.5
-param set-default FW_PSP_OFF 2
-param set-default FW_RR_FF 0.1
-param set-default FW_RR_I 0.1
-param set-default FW_RR_P 0.2
-param set-default FW_YR_FF 0 # make yaw rate controller very weak, only keep default P
-param set-default FW_YR_I 0
-param set-default FW_THR_TRIM 0.35
-param set-default FW_THR_MAX 0.8
-param set-default FW_THR_MIN 0.05
-param set-default FW_T_CLMB_MAX 6
-param set-default FW_T_HRATE_FF 0.5
-param set-default FW_T_SINK_MAX 3
-param set-default FW_T_SINK_MIN 1.6
-param set-default FW_AIRSPD_STALL 10
-param set-default FW_AIRSPD_MIN 14
-param set-default FW_AIRSPD_TRIM 18
-param set-default FW_AIRSPD_MAX 22
-
-param set-default MC_AIRMODE 2
-param set-default MAN_ARM_GESTURE 0 # required for yaw airmode
-param set-default MC_ROLL_P 3
-param set-default MC_PITCH_P 3
-param set-default MC_ROLLRATE_P 0.3
-param set-default MC_PITCHRATE_P 0.3
-
-param set-default VT_ARSP_TRANS 15
-param set-default VT_B_TRANS_DUR 5
-param set-default VT_FW_DIFTHR_EN 7
-param set-default VT_FW_DIFTHR_S_Y 1
-param set-default VT_F_TRANS_DUR 1.5
-param set-default VT_TYPE 0
-
-param set-default WV_EN 0
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/8011_gz_omnicopter b/ROMFS/px4fmu_common/init.d-posix/airframes/8011_gz_omnicopter
deleted file mode 100644
index 707df1bba1..0000000000
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/8011_gz_omnicopter
+++ /dev/null
@@ -1,122 +0,0 @@
-#!/bin/sh
-#
-# @name 6DoF Omnicopter SITL
-#
-# @type Quadrotor Wide
-#
-# @maintainer Jaeyoung Lim <jalim@ethz.ch>
-#
-
-. ${R}etc/init.d/rc.mc_defaults
-
-PX4_SIMULATOR=${PX4_SIMULATOR:=gz}
-PX4_GZ_WORLD=${PX4_GZ_WORLD:=default}
-PX4_SIM_MODEL=${PX4_SIM_MODEL:=omnicopter}
-
-param set-default CA_AIRFRAME 0
-
-param set-default CA_ROTOR_COUNT 8
-param set-default CA_R_REV 255
-
-param set-default CA_ROTOR0_PX 0.14435
-param set-default CA_ROTOR0_PY -0.14435
-param set-default CA_ROTOR0_PZ -0.14435
-param set-default CA_ROTOR0_KM 0.05 # CCW
-param set-default CA_ROTOR0_AX -0.788675
-param set-default CA_ROTOR0_AY -0.211325
-param set-default CA_ROTOR0_AZ -0.57735
-
-param set-default CA_ROTOR1_PX -0.14435
-param set-default CA_ROTOR1_PY -0.14435
-param set-default CA_ROTOR1_PZ -0.14435
-param set-default CA_ROTOR1_KM 0.05
-param set-default CA_ROTOR1_AX 0.211325
-param set-default CA_ROTOR1_AY -0.788675
-param set-default CA_ROTOR1_AZ 0.57735
-
-param set-default CA_ROTOR2_PX 0.14435
-param set-default CA_ROTOR2_PY 0.14435
-param set-default CA_ROTOR2_PZ -0.14435
-param set-default CA_ROTOR2_KM 0.05
-param set-default CA_ROTOR2_AX -0.211325
-param set-default CA_ROTOR2_AY 0.788675
-param set-default CA_ROTOR2_AZ 0.57735
-
-param set-default CA_ROTOR3_PX -0.14435
-param set-default CA_ROTOR3_PY 0.14435
-param set-default CA_ROTOR3_PZ -0.14435
-param set-default CA_ROTOR3_KM 0.05
-param set-default CA_ROTOR3_AX 0.788675
-param set-default CA_ROTOR3_AY 0.211325
-param set-default CA_ROTOR3_AZ -0.57735
-
-param set-default CA_ROTOR4_PX 0.14435
-param set-default CA_ROTOR4_PY -0.14435
-param set-default CA_ROTOR4_PZ 0.14435
-param set-default CA_ROTOR4_KM 0.05
-param set-default CA_ROTOR4_AX 0.788675
-param set-default CA_ROTOR4_AY 0.211325
-param set-default CA_ROTOR4_AZ -0.57735
-
-param set-default CA_ROTOR5_PX -0.14435
-param set-default CA_ROTOR5_PY -0.14435
-param set-default CA_ROTOR5_PZ 0.14435
-param set-default CA_ROTOR5_KM 0.05
-param set-default CA_ROTOR5_AX -0.211325
-param set-default CA_ROTOR5_AY 0.788675
-param set-default CA_ROTOR5_AZ 0.57735
-
-param set-default CA_ROTOR6_PX 0.14435
-param set-default CA_ROTOR6_PY 0.14435
-param set-default CA_ROTOR6_PZ 0.14435
-param set-default CA_ROTOR6_KM 0.05
-param set-default CA_ROTOR6_AX 0.211325
-param set-default CA_ROTOR6_AY -0.788675
-param set-default CA_ROTOR6_AZ 0.57735
-
-param set-default CA_ROTOR7_PX -0.14435
-param set-default CA_ROTOR7_PY 0.14435
-param set-default CA_ROTOR7_PZ 0.14435
-param set-default CA_ROTOR7_KM 0.05
-param set-default CA_ROTOR7_AX -0.788675
-param set-default CA_ROTOR7_AY -0.211325
-param set-default CA_ROTOR7_AZ -0.57735
-
-param set-default SIM_GZ_EN 1
-param set-default SENS_EN_GPSSIM 1
-param set-default SENS_EN_BAROSIM 0
-param set-default SENS_EN_MAGSIM 1
-
-param set-default SIM_GZ_EC_FUNC1 101
-param set-default SIM_GZ_EC_FUNC2 102
-param set-default SIM_GZ_EC_FUNC3 103
-param set-default SIM_GZ_EC_FUNC4 104
-param set-default SIM_GZ_EC_FUNC5 105
-param set-default SIM_GZ_EC_FUNC6 106
-param set-default SIM_GZ_EC_FUNC7 107
-param set-default SIM_GZ_EC_FUNC8 108
-
-param set-default SIM_GZ_EC_MIN1 0
-param set-default SIM_GZ_EC_MIN2 0
-param set-default SIM_GZ_EC_MIN3 0
-param set-default SIM_GZ_EC_MIN4 0
-param set-default SIM_GZ_EC_MIN5 0
-param set-default SIM_GZ_EC_MIN6 0
-param set-default SIM_GZ_EC_MIN7 0
-param set-default SIM_GZ_EC_MIN8 0
-
-param set-default SIM_GZ_EC_MAX1 1100
-param set-default SIM_GZ_EC_MAX2 1100
-param set-default SIM_GZ_EC_MAX3 1100
-param set-default SIM_GZ_EC_MAX4 1100
-param set-default SIM_GZ_EC_MAX5 1100
-param set-default SIM_GZ_EC_MAX6 1100
-param set-default SIM_GZ_EC_MAX7 1100
-param set-default SIM_GZ_EC_MAX8 1100
-# disable MC desaturation which improves attitude tracking
-param set-default CA_METHOD 0
-
-# disable attitude failure detection
-param set-default FD_FAIL_P 0
-param set-default FD_FAIL_R 0
-
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt b/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt
index 0ba0c0be9d..4c61e70643 100644
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt
+++ b/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt
@@ -60,7 +60,6 @@ px4_add_romfs_files(
        1042_gazebo-classic_tiltrotor
        1043_gazebo-classic_standard_vtol_drop
        1044_gazebo-classic_plane_lidar
-       1045_gazebo-classic_quadtailsitter
        1060_gazebo-classic_rover
        1061_gazebo-classic_r1_rover
        1062_flightgear_tf-r1
@@ -81,8 +80,6 @@ px4_add_romfs_files(
        6011_gazebo-classic_typhoon_h480
        6011_gazebo-classic_typhoon_h480.post

-       8011_gz_omnicopter
-
        10015_gazebo-classic_iris
        10016_none_iris
        10017_jmavsim_iris
@@ -96,6 +93,4 @@ px4_add_romfs_files(

        17001_flightgear_tf-g1
        17002_flightgear_tf-g2
-
-       # [22000, 22999] Reserve for custom models
 )
diff --git a/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator b/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator
index 01216f7910..1f4693d4c1 100644
--- a/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator
+++ b/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator
@@ -59,7 +59,7 @@ elif [ "$PX4_SIMULATOR" = "gz" ] || [ "$(param show -q SIM_GZ_EN)" -eq "1" ]; th
        fi

        # look for running ${gz_command} gazebo world
-       gz_world=$( ${gz_command} topic -l | grep -m 1 -e "^/world/.*/clock" | sed 's/\/world\///g; s/\/clock//g' )
+       gz_world=$( ${gz_command} topic -l | grep -m 1 -e "/world/.*/clock" | sed 's/\/world\///g; s/\/clock//g' )

        # shellcheck disable=SC2153
        if [ -z "${gz_world}" ] && [ -n "${PX4_GZ_WORLDS}" ] && [ -n "${PX4_GZ_WORLD}" ]; then
diff --git a/ROMFS/px4fmu_common/init.d-posix/rcS b/ROMFS/px4fmu_common/init.d-posix/rcS
index 7ecbfc3dcb..3828b62f4b 100644
--- a/ROMFS/px4fmu_common/init.d-posix/rcS
+++ b/ROMFS/px4fmu_common/init.d-posix/rcS
@@ -168,6 +168,8 @@ param set-default EKF2_REQ_GPS_H 0.5
 # Multi-EKF
 param set-default EKF2_MULTI_IMU 3
 param set-default SENS_IMU_MODE 0
+param set-default EKF2_MULTI_MAG 2
+param set-default SENS_MAG_MODE 0

 param set-default IMU_GYRO_FFT_EN 1
 param set-default MAV_PROTO_VER 2 # Ensures QGC does not drop the first few packets after a SITL restart due to MAVLINK 1 packets
diff --git a/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil b/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil
index d47d11545b..cbb41cccd5 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil
+++ b/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil
@@ -20,7 +20,6 @@
 param set-default EKF2_FUSE_BETA 0 # side slip fusion is currently not supported for tailsitters

 param set UAVCAN_ENABLE 0
-param set-default VT_B_TRANS_DUR 5
 param set-default VT_ELEV_MC_LOCK 0
 param set-default VT_MOT_COUNT 2
 param set-default VT_TYPE 0
diff --git a/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter b/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter
index 2424a72d0a..fccaee8cf5 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter
+++ b/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter
@@ -31,4 +31,3 @@ param set-default CA_SV_CS1_TYPE 6
 param set-default MAV_TYPE 19
 param set-default VT_TYPE 0
 param set-default VT_ELEV_MC_LOCK 0
-param set-default VT_B_TRANS_DUR 5
diff --git a/ROMFS/px4fmu_common/init.d/airframes/2106_albatross b/ROMFS/px4fmu_common/init.d/airframes/2106_albatross
index 3b51c32f61..e918ea0f3c 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/2106_albatross
+++ b/ROMFS/px4fmu_common/init.d/airframes/2106_albatross
@@ -17,7 +17,6 @@
 # @maintainer Andreas Antener <andreas@uaventure.com>
 #
 # @board bitcraze_crazyflie exclude
-# @board diatone_mamba-f405-mk2 exclude
 #

 . ${R}etc/init.d/rc.fw_defaults
diff --git a/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2 b/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2
index 4cc12633de..1fb639236e 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2
+++ b/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2
@@ -34,9 +34,9 @@ param set-default CA_ROTOR3_PX -0.25
 param set-default CA_ROTOR3_PY 0.25
 param set-default CA_ROTOR3_KM -0.05

-param set-default PWM_MAIN_FUNC1 101
-param set-default PWM_MAIN_FUNC2 102
-param set-default PWM_MAIN_FUNC3 103
-param set-default PWM_MAIN_FUNC4 104
-param set-default PWM_MAIN_TIM0 -4
+param set-default PWM_AUX_FUNC1 101
+param set-default PWM_AUX_FUNC2 102
+param set-default PWM_AUX_FUNC3 103
+param set-default PWM_AUX_FUNC4 104
+param set-default PWM_AUX_TIM0 -4

diff --git a/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie b/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie
index 994ff02383..211feb4924 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie
+++ b/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie
@@ -13,7 +13,6 @@
 # @board px4_fmu-v4pro exclude
 # @board px4_fmu-v5 exclude
 # @board px4_fmu-v5x exclude
-# @board diatone_mamba-f405-mk2 exclude
 #
 . ${R}etc/init.d/rc.mc_defaults

diff --git a/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21 b/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21
index e340fb8f44..3462b7575f 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21
+++ b/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21
@@ -13,7 +13,6 @@
 # @board px4_fmu-v4pro exclude
 # @board px4_fmu-v5 exclude
 # @board px4_fmu-v5x exclude
-# @board diatone_mamba-f405-mk2 exclude
 #
 . ${R}etc/init.d/rc.mc_defaults

diff --git a/ROMFS/px4fmu_common/init.d/rc.mc_apps b/ROMFS/px4fmu_common/init.d/rc.mc_apps
index 8158ab8b03..0b2256dba5 100644
--- a/ROMFS/px4fmu_common/init.d/rc.mc_apps
+++ b/ROMFS/px4fmu_common/init.d/rc.mc_apps
@@ -79,3 +79,7 @@ mc_pos_control start
 # Start Multicopter Land Detector.
 #
 land_detector start multicopter
+#
+# Start reading sensor data
+#
+MY_TASK1 start
diff --git a/ROMFS/px4fmu_common/init.d/rcS b/ROMFS/px4fmu_common/init.d/rcS
index 4a391d39f9..04a07cfee9 100644
--- a/ROMFS/px4fmu_common/init.d/rcS
+++ b/ROMFS/px4fmu_common/init.d/rcS
@@ -254,8 +254,6 @@ else
        #
        rgbled start -X -q
        rgbled_ncp5623c start -X -q
-       rgbled_lp5562 start -X -q
-       rgbled_is31fl3195 start -X -q

        #
        # Override parameters from user configuration file.
diff --git a/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp b/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp
index 508a542754..f98d4120d8 100644
--- a/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp
+++ b/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp
@@ -5,6 +5,7 @@
 #include <matrix/math.hpp>
 #include <cstdlib>

+
 orb_advert_t mavlink_log_pub = nullptr;

 // required standard deviation of estimate for estimator to publish data
@@ -132,6 +133,8 @@ BlockLocalPositionEstimator::BlockLocalPositionEstimator() :
                 (_param_lpe_fusion.get() & FUSE_PUB_AGL_Z) != 0,
                 (_param_lpe_fusion.get() & FUSE_FLOW_GYRO_COMP) != 0,
                 (_param_lpe_fusion.get() & FUSE_BARO) != 0);
+
+
 }

 bool
@@ -142,6 +145,7 @@ BlockLocalPositionEstimator::init()
                return false;
        }

+
        return true;
 }

@@ -184,6 +188,7 @@ void BlockLocalPositionEstimator::Run()
                return;
        }

+
        uint64_t newTimeStamp = hrt_absolute_time();
        float dt = (newTimeStamp - _timeStamp) / 1.0e6f;
        _timeStamp = newTimeStamp;
@@ -222,31 +227,37 @@ void BlockLocalPositionEstimator::Run()
                }
        }

+
+
+
+
        // reset pos, vel, and terrain on arming

        // XXX this will be re-enabled for indoor use cases using a
        // selection param, but is really not helping outdoors
        // right now.

-       // if (!_lastArmedState && armedState) {

-       //      // we just armed, we are at origin on the ground
-       //      _x(X_x) = 0;
-       //      _x(X_y) = 0;
-       //      // reset Z or not? _x(X_z) = 0;
+/*      if (!_lastArmedState && armedState) {

-       //      // we aren't moving, all velocities are zero
-       //      _x(X_vx) = 0;
-       //      _x(X_vy) = 0;
-       //      _x(X_vz) = 0;
+            // we just armed, we are at origin on the ground
+            _x(X_x) = 0;
+            _x(X_y) = 0;
+            _x(X_z) = 0;

-       //      // assume we are on the ground, so terrain alt is local alt
        if (_mocapUpdated) {
                if (_sensorTimeout & SENSOR_MOCAP) {
                        mocapInit();
@@ -589,7 +604,6 @@ void BlockLocalPositionEstimator::publishLocalPos()
                _pub_lpos.get().z_valid = _estimatorInitialized & EST_Z;
                _pub_lpos.get().v_xy_valid = _estimatorInitialized & EST_XY;
                _pub_lpos.get().v_z_valid = _estimatorInitialized & EST_Z;
-
                _pub_lpos.get().x = xLP(X_x);   // north
                _pub_lpos.get().y = xLP(X_y);   // east

@@ -659,6 +673,7 @@ void BlockLocalPositionEstimator::publishOdom()
                        _pub_odom.get().position[2] = xLP(X_z); // down
                }

+
                // orientation
                matrix::Quatf q = matrix::Quatf(_sub_att.get().q);
                q.copyTo(_pub_odom.get().q);
@@ -709,6 +724,21 @@ void BlockLocalPositionEstimator::publishOdom()
        }
 }

+void BlockLocalPositionEstimator::publishVisualOdometry()
+{
+       _pub_visual_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_visual_odom.get().position[0] = pos.x;
+       _pub_visual_odom.get().position[1] = pos.y;
+       _pub_visual_odom.get().position[2]=  pos.z;
-
                _pub_lpos.get().x = xLP(X_x);   // north
                _pub_lpos.get().y = xLP(X_y);   // east

@@ -659,6 +673,7 @@ void BlockLocalPositionEstimator::publishOdom()
                        _pub_odom.get().position[2] = xLP(X_z); // down
                }

+
                // orientation
                matrix::Quatf q = matrix::Quatf(_sub_att.get().q);
                q.copyTo(_pub_odom.get().q);
@@ -709,6 +724,21 @@ void BlockLocalPositionEstimator::publishOdom()
        }
 }

+void BlockLocalPositionEstimator::publishVisualOdometry()
+{
+       _pub_visual_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_visual_odom.get().position[0] = pos.x;
+       _pub_visual_odom.get().position[1] = pos.y;
+       _pub_visual_odom.get().position[2]=  pos.z;
+
+       _pub_visual_odom.get().timestamp = hrt_absolute_time();
+       _pub_visual_odom.update();
+
+
+}
+
 void BlockLocalPositionEstimator::publishEstimatorStatus()
 {
        _pub_est_states.get().timestamp_sample = _timeStamp;
diff --git a/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp b/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp
index 0b312b9183..4ff96c43a2 100644
--- a/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp
+++ b/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp
@@ -1,5 +1,6 @@
 #pragma once

+#include "tag.hpp"
 #include <drivers/drv_hrt.h>
 #include <px4_platform_common/module.h>
 #include <px4_platform_common/module_params.h>
@@ -125,8 +126,11 @@ public:

        bool init();

+
 private:

+       Tag _ret;
+
        // constants
        enum {X_x = 0, X_y, X_z, X_vx, X_vy, X_vz, X_bx, X_by, X_bz, X_tz, n_x};
        enum {U_ax = 0, U_ay, U_az, n_u};
@@ -256,6 +260,7 @@ private:
        void publishOdom();
        void publishEstimatorStatus();
        void publishEk2fTimestamps();
+       void publishVisualOdometry();

        // attributes
        // ----------------------------
@@ -291,6 +296,7 @@ private:
        uORB::PublicationData<estimator_status_s> _pub_est_status{ORB_ID(estimator_status)};
        uORB::PublicationData<estimator_innovations_s> _pub_innov{ORB_ID(estimator_innovations)};
        uORB::PublicationData<estimator_innovations_s> _pub_innov_var{ORB_ID(estimator_innovation_variances)};
+       uORB::PublicationData<vehicle_odometry_s> _pub_visual_odom{ORB_ID(vehicle_visual_odometry)};

        // map projection
        MapProjection _map_ref;
diff --git a/src/modules/local_position_estimator/CMakeLists.txt b/src/modules/local_position_estimator/CMakeLists.txt
index aafaecdef0..7dba71becd 100644
--- a/src/modules/local_position_estimator/CMakeLists.txt
+++ b/src/modules/local_position_estimator/CMakeLists.txt
@@ -38,6 +38,7 @@ px4_add_module(
        STACK_MAX 3700
        SRCS
                BlockLocalPositionEstimator.cpp
+               tag.cpp
                sensors/flow.cpp
                sensors/lidar.cpp
                sensors/sonar.cpp
diff --git a/src/modules/local_position_estimator/tag.cpp b/src/modules/local_position_estimator/tag.cpp
new file mode 100644
index 0000000000..6e73fda97f
--- /dev/null
+++ b/src/modules/local_position_estimator/tag.cpp
@@ -0,0 +1,39 @@
+#include "tag.hpp"
+
+const char* mydevice;
+const int bus = 1;     // there is only one I2C bus in holybro_kakuteh7mini
+const uint32_t busfrequency = 110000; // has to be higher than 100 Khz otherwise the device is too slow for the bus
+const uint16_t address = 0x37; // i2c adress of tag is actually 0x65 but gets bitshifted thus it becomes 0x37
+
+Tag::Tag():I2C(0xFF, mydevice, bus, address, busfrequency)
+{
+       this->init();
+}
+
+
+Tag::corr_pkg_t Tag::getposition(bool NED = false)
+{
+       int pos = this->transfer(nullptr,0,buf,len);
+       memcpy(&payload,buf,26);
+
+       if (pos == PX4_OK && NED == false)
+       {
+               position.x = payload.x;
+               position.y = payload.y;
+               position.z = payload.z;
+       }
+
+       //moving the origin and transform the tdoa system into a North East Down (NED) frame meaning
+       //x should increase when moving forward (north)
+       //y should increase when moving to the right (east)
+       //z should decrease when moving up (down)
+
+       else if (pos == PX4_OK && NED == true)
+       {
+               position.x = payload.y - float(1.75);
+               position.y = payload.x - float(2.01);
+               position.z = -payload.z + float(0.2);
+       }
+
+       return position;
+}
diff --git a/src/modules/local_position_estimator/tag.hpp b/src/modules/local_position_estimator/tag.hpp
new file mode 100644
index 0000000000..77c3644c4b
--- /dev/null
+++ b/src/modules/local_position_estimator/tag.hpp
@@ -0,0 +1,41 @@
+#pragma once
+#include <drivers/device/i2c.h>
+
+class Tag: public device::I2C
+{
+
+public:
+
+       Tag();
+
+       typedef struct __attribute__((packed)) {
+
+       /** The x-coordinate in m */
+       float x;
+       /** The y-coordinate in m */
+       float y;
+       /** The z-coordinate in m */
+       float z;
+
+       /** The target x-coordinate in m */
+       float targetX;
+       /** The target y-coordinate in m */
+       float targetY;
+       /** The target z-coordinate in m */
+       float targetZ;
+
+       uint16_t crc16;
+
+       } corr_pkg_t;
+
+       corr_pkg_t getposition(bool NED);
+
+private:
+
+       corr_pkg_t position;    // for reading sensor
+       corr_pkg_t payload;
+       uint8_t len = 26;
+       uint8_t buf[26];
+
+};
+
diff --git a/src/modules/my_task1/CMakeLists.txt b/src/modules/my_task1/CMakeLists.txt
new file mode 100644
index 0000000000..a221d43b56
--- /dev/null
+++ b/src/modules/my_task1/CMakeLists.txt
@@ -0,0 +1,40 @@
+############################################################################
+#
+#   Copyright (c) 2018 PX4 Development Team. All rights reserved.
+#
+# Redistribution and use in source and binary forms, with or without
+# modification, are permitted provided that the following conditions
+# are met:
+#
+# 1. Redistributions of source code must retain the above copyright
+#    notice, this list of conditions and the following disclaimer.
+# 2. Redistributions in binary form must reproduce the above copyright
+#    notice, this list of conditions and the following disclaimer in
+#    the documentation and/or other materials provided with the
+#    distribution.
+# 3. Neither the name PX4 nor the names of its contributors may be
+#    used to endorse or promote products derived from this software
+#    without specific prior written permission.
+#
+# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
+# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
+# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
+# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
+# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
+# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
+# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
+# OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
+# AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
+# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
+# POSSIBILITY OF SUCH DAMAGE.
+#
+############################################################################
+
+px4_add_module(
+       MODULE modules__MY_TASK1
+       MAIN MY_TASK1
+       SRCS
+               MY_TASK1.cpp
+       )
+
diff --git a/src/modules/my_task1/Kconfig b/src/modules/my_task1/Kconfig
new file mode 100644
index 0000000000..dd49b380c0
--- /dev/null
+++ b/src/modules/my_task1/Kconfig
@@ -0,0 +1,5 @@
+menuconfig MODULES_MY_TASK1
+       bool "MY_TASK1"
+       default n
+       ---help---
+               Enable support for MY_TASK1
diff --git a/src/modules/my_task1/MY_TASK1.cpp b/src/modules/my_task1/MY_TASK1.cpp
new file mode 100644
index 0000000000..f7a86b9995
--- /dev/null
+++ b/src/modules/my_task1/MY_TASK1.cpp
@@ -0,0 +1,248 @@
+/****************************************************************************
+ *
+ *   Copyright (c) 2018 PX4 Development Team. All rights reserved.
+ *
+ * Redistribution and use in source and binary forms, with or without
+ * modification, are permitted provided that the following conditions
+ * are met:
+ *
+ * 1. Redistributions of source code must retain the above copyright
+ *    notice, this list of conditions and the following disclaimer.
+ * 2. Redistributions in binary form must reproduce the above copyright
+ *    notice, this list of conditions and the following disclaimer in
+ *    the documentation and/or other materials provided with the
+ *    distribution.
+ * 3. Neither the name PX4 nor the names of its contributors may be
+ *    used to endorse or promote products derived from this software
+ *    without specific prior written permission.
+ *
+ * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
+ * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
+ * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
+ * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
+ * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
+ * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
+ * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
+ * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
+ * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+ * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
+ * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
+ * POSSIBILITY OF SUCH DAMAGE.
+ *
+ ****************************************************************************/
+#define DEBUG_BUILD    // stop and restart task (if enabled by default) to see debug output
+#include "MY_TASK1.h"
+
+
+using namespace device;
+
+void MY_TASK1::publishMocapOdometry()
+{
+       _pub_mocap_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_mocap_odom.get().position[0] = pos.x;
+       _pub_mocap_odom.get().position[1] = pos.y;
+       _pub_mocap_odom.get().position[2] = pos.z;
+
+       _pub_mocap_odom.get().timestamp = hrt_absolute_time();
+       _pub_mocap_odom.update();
+}
+
+void MY_TASK1::publishVisualOdometry()
+{
+       _pub_visual_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_visual_odom.get().position[0] = pos.x;
+       _pub_visual_odom.get().position[1] = pos.y;
+       _pub_visual_odom.get().position[2] = pos.z;
+       _pub_visual_odom.update();
+
+       // one method for determining velocity
+/*
+       float dt = (hrt_absolute_time() - _timeStamp) / 1.0e6f;
+       float vx = (old_x - pos.x)/dt;
+       float vy = (old_y - pos.y)/dt;
+       float vz = (old_z - pos.z)/dt;
+
+       _pub_visual_odom.get().velocity[0] = vx;
+       _pub_visual_odom.get().velocity[1] = vy;
+       _pub_visual_odom.get().velocity[2] = vz;
+
+*/
+       _pub_visual_odom.get().timestamp = hrt_absolute_time();
+       _pub_visual_odom.update();
+}
+
+int MY_TASK1::print_status()
+{
+       PX4_INFO("Running");
+       // TODO: print additional runtime information about the state of the module
+
+       return 0;
+}
+
+int MY_TASK1::custom_command(int argc, char *argv[])
+{
+       PX4_INFO("costum command of MY_TASK1");
+       /*
+       if (!is_running()) {
+               print_usage("not running");
+               return 1;
+       }
+
+       // additional custom commands can be handled like this:
+       if (!strcmp(argv[0], "do-something")) {
+               get_instance()->do_something();
+               return 0;
+       }
+        */
+
+       return print_usage("unknown command");
+}
+
+
+int MY_TASK1::task_spawn(int argc, char *argv[])
+{
+       _task_id = px4_task_spawn_cmd("MY_TASK1",
+                                     SCHED_DEFAULT,
+                                     SCHED_PRIORITY_DEFAULT,
+                                     1024,
+                                     (px4_main_t)&run_trampoline,
+                                     (char *const *)argv);
+
+       if (_task_id < 0) {
+               _task_id = -1;
+               return -errno;
+       }
+
+       return 0;
+}
+
+MY_TASK1 *MY_TASK1::instantiate(int argc, char *argv[])
+{
+       int example_param = 0;
+       bool example_flag = false;
+       bool error_flag = false;
+
+       int myoptind = 1;
+       int ch;
+       const char *myoptarg = nullptr;
+
+       // parse CLI arguments
+       while ((ch = px4_getopt(argc, argv, "p:f", &myoptind, &myoptarg)) != EOF) {
+               switch (ch) {
+Section that describes the provided module functionality.
+               case 'p':
+                       example_param = (int)strtol(myoptarg, nullptr, 10);
+                       break;
+
+               case 'f':
+                       example_flag = true;
+                       break;
+
+               case '?':
+                       error_flag = true;
+                       break;
+
+               default:
+                       PX4_WARN("unrecognized flag");
+                       error_flag = true;
+                       break;
+               }
+       }
+
+       if (error_flag) {
+               return nullptr;
+       }
+
+       MY_TASK1 *instance = new MY_TASK1(example_param, example_flag);
+
+       if (instance == nullptr) {
+               PX4_ERR("alloc failed");
+       }
+
+       return instance;
+}
+
+
+MY_TASK1::MY_TASK1(int example_param, bool example_flag)
+       : ModuleParams(nullptr)
+{
+
+}
+
+
+
+void MY_TASK1::run()
+{
+
+       while (!should_exit()) {
+
+                _timeStamp = hrt_absolute_time();
+
+               publishMocapOdometry();
+
+       // for velocity determination
+
+/*             Tag::position_t pos = _ret.getposition(true);
+               old_x = pos.x;
+               old_y = pos.y;
+               old_z = pos.z;
+*/
+
+       }
+}
+
+
+
+void MY_TASK1::parameters_update(bool force)
+{
+       // check for parameter updates
+       if (_parameter_update_sub.updated() || force) {
+               // clear update
+               parameter_update_s update;
+               _parameter_update_sub.copy(&update);
+
+               // update parameters from storage
+Section that describes the provided module functionality.
+               updateParams();
+       }
+}
+
+int MY_TASK1::print_usage(const char *reason)
+{
+       if (reason) {
+               PX4_WARN("%s\n", reason);
+       }
+
+       PRINT_MODULE_DESCRIPTION(
+               R"DESCR_STR(
+### Description
+Section that describes the provided module functionality.
+
+This is a template for a module running as a task in the background with start/stop/status functionality.
+
+### Implementation
+Section describing the high-level implementation of this module.
+
+### Examples
+CLI usage example:
+$ module start -f -p 42
+
+)DESCR_STR");
+
+       PRINT_MODULE_USAGE_NAME("module", "template");
+       PRINT_MODULE_USAGE_COMMAND("start");
+       PRINT_MODULE_USAGE_PARAM_FLAG('f', "Optional example flag", true);
+       PRINT_MODULE_USAGE_PARAM_INT('p', 0, 0, 1000, "Optional example parameter", true);
+       PRINT_MODULE_USAGE_DEFAULT_COMMANDS();
+
+       return 0;
+}
+
+int MY_TASK1_main(int argc, char *argv[])
+{
+       return MY_TASK1::main(argc, argv);
+}
diff --git a/src/modules/my_task1/MY_TASK1.h b/src/modules/my_task1/MY_TASK1.h
new file mode 100644
index 0000000000..a7a30fd4bc
--- /dev/null
+++ b/src/modules/my_task1/MY_TASK1.h
@@ -0,0 +1,121 @@
+/****************************************************************************
+ *
+ *   Copyright (c) 2018 PX4 Development Team. All rights reserved.
+ *
+ * Redistribution and use in sourchris@chris-ThinkPad-T460s:~/Desktop/PX4-Autopilot$ git show
commit 86f9647bd3625581a95732fe0131830ec3db0bde (HEAD -> main, origin/main, origin/HEAD)
Author: lazy-boi-13 <chriggi.weidmann@gmail.com>
Date:   Mon Jul 31 10:23:21 2023 -0400

    second commit

diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert b/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert
index 2782817873..c98cc5c8ed 100644
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert
+++ b/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert
@@ -17,7 +17,6 @@ param set-default SENS_EN_GPSSIM 1
 param set-default SENS_EN_BAROSIM 1
 param set-default SENS_EN_MAGSIM 1

-param set-default VT_B_TRANS_DUR 5
 param set-default VT_ELEV_MC_LOCK 0
 param set-default VT_TYPE 0
 param set-default VT_FW_DIFTHR_EN 1
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter b/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter
index 1fe1fdde6e..d5f86862fe 100644
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter
+++ b/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter
@@ -47,33 +47,38 @@ param set-default PWM_MAIN_REV 96 # invert both elevons
 # Single-EKF (for replay)
 param set-default EKF2_MULTI_IMU 0
 param set-default SENS_IMU_MODE 1
+param set-default EKF2_MULTI_MAG 0
+param set-default SENS_MAG_MODE 1

-param set-default FW_P_TC 0.6
-
-param set-default FW_PR_FF 0.1
+param set-default NPFG_PERIOD 12
+param set-default FW_PR_I 0.2
+param set-default FW_PR_P 0.2
 param set-default FW_PSP_OFF 2
-param set-default FW_RR_FF 0.1
-param set-default FW_RR_I 0.2
-param set-default FW_RR_P 0.3
-param set-default FW_THR_TRIM 0.35
-param set-default FW_THR_MAX 0.8
+param set-default FW_P_LIM_MIN -15
+param set-default FW_RR_P 0.2
+param set-default FW_THR_TRIM 0.33
+param set-default FW_THR_MAX 0.6
 param set-default FW_THR_MIN 0.05
-param set-default FW_T_CLMB_MAX 6
-param set-default FW_T_HRATE_FF 0.5
-param set-default FW_T_SINK_MAX 3
-param set-default FW_T_SINK_MIN 1.6
+param set-default FW_T_ALT_TC 2
+param set-default FW_T_CLMB_MAX 8
+param set-default FW_T_SINK_MAX 2.7
+param set-default FW_T_SINK_MIN 2.2
+param set-default FW_T_TAS_TC 2

 param set-default MC_AIRMODE 1
-param set-default MC_ROLL_P 3
-param set-default MC_PITCH_P 3
 param set-default MC_ROLLRATE_P 0.3
-param set-default MC_PITCHRATE_P 0.3

-param set-default VT_ARSP_TRANS 10
-param set-default VT_B_TRANS_DUR 5
+param set-default MPC_XY_P 0.8
+param set-default MPC_XY_VEL_P_ACC 3
+param set-default MPC_XY_VEL_I_ACC 4
+param set-default MPC_XY_VEL_D_ACC 0.1
+
+param set-default NAV_ACC_RAD 5
+
 param set-default VT_FW_DIFTHR_EN 1
-param set-default VT_FW_DIFTHR_S_Y 1
+param set-default VT_FW_DIFTHR_S_Y 0.5
 param set-default VT_F_TRANS_DUR 1.5
+param set-default VT_F_TRANS_THR 0.7
 param set-default VT_TYPE 0

 param set-default WV_EN 0
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/1045_gazebo-classic_quadtailsitter b/ROMFS/px4fmu_common/init.d-posix/airframes/1045_gazebo-classic_quadtailsitter
deleted file mode 100644
index 87afb523b1..0000000000
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/1045_gazebo-classic_quadtailsitter
+++ /dev/null
@@ -1,74 +0,0 @@
-#!/bin/sh
-#
-# @name Quadrotor + Tailsitter
-#
-# @type VTOL Quad Tailsitter
-#
-
-. ${R}etc/init.d/rc.vtol_defaults
-
-param set-default MAV_TYPE 20
-
-param set-default CA_AIRFRAME 4
-
-param set-default CA_ROTOR_COUNT 4
-param set-default CA_ROTOR0_PX 0.15
-param set-default CA_ROTOR0_PY 0.23
-param set-default CA_ROTOR0_KM 0.05
-param set-default CA_ROTOR1_PX -0.15
-param set-default CA_ROTOR1_PY -0.23
-param set-default CA_ROTOR1_KM 0.05
-param set-default CA_ROTOR2_PX 0.15
-param set-default CA_ROTOR2_PY -0.23
-param set-default CA_ROTOR2_KM -0.05
-param set-default CA_ROTOR3_PX -0.15
-param set-default CA_ROTOR3_PY 0.23
-param set-default CA_ROTOR3_KM -0.05
-
-param set-default CA_SV_CS_COUNT 0
-
-param set-default PWM_MAIN_FUNC1 101
-param set-default PWM_MAIN_FUNC2 102
-param set-default PWM_MAIN_FUNC3 103
-param set-default PWM_MAIN_FUNC4 104
-param set-default PWM_MAIN_FUNC5 0
-
-parm set-default FD_FAIL_R 70
-
-param set-default FW_P_TC 0.6
-
-param set-default FW_PR_I 0.3
-param set-default FW_PR_P 0.5
-param set-default FW_PSP_OFF 2
-param set-default FW_RR_FF 0.1
-param set-default FW_RR_I 0.1
-param set-default FW_RR_P 0.2
-param set-default FW_YR_FF 0 # make yaw rate controller very weak, only keep default P
-param set-default FW_YR_I 0
-param set-default FW_THR_TRIM 0.35
-param set-default FW_THR_MAX 0.8
-param set-default FW_THR_MIN 0.05
-param set-default FW_T_CLMB_MAX 6
-param set-default FW_T_HRATE_FF 0.5
-param set-default FW_T_SINK_MAX 3
-param set-default FW_T_SINK_MIN 1.6
-param set-default FW_AIRSPD_STALL 10
-param set-default FW_AIRSPD_MIN 14
-param set-default FW_AIRSPD_TRIM 18
-param set-default FW_AIRSPD_MAX 22
-
-param set-default MC_AIRMODE 2
-param set-default MAN_ARM_GESTURE 0 # required for yaw airmode
-param set-default MC_ROLL_P 3
-param set-default MC_PITCH_P 3
-param set-default MC_ROLLRATE_P 0.3
-param set-default MC_PITCHRATE_P 0.3
-
-param set-default VT_ARSP_TRANS 15
-param set-default VT_B_TRANS_DUR 5
-param set-default VT_FW_DIFTHR_EN 7
-param set-default VT_FW_DIFTHR_S_Y 1
-param set-default VT_F_TRANS_DUR 1.5
-param set-default VT_TYPE 0
-
-param set-default WV_EN 0
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/8011_gz_omnicopter b/ROMFS/px4fmu_common/init.d-posix/airframes/8011_gz_omnicopter
deleted file mode 100644
index 707df1bba1..0000000000
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/8011_gz_omnicopter
+++ /dev/null
@@ -1,122 +0,0 @@
-#!/bin/sh
-#
-# @name 6DoF Omnicopter SITL
-#
-# @type Quadrotor Wide
-#
-# @maintainer Jaeyoung Lim <jalim@ethz.ch>
-#
-
-. ${R}etc/init.d/rc.mc_defaults
-
-PX4_SIMULATOR=${PX4_SIMULATOR:=gz}
-PX4_GZ_WORLD=${PX4_GZ_WORLD:=default}
-PX4_SIM_MODEL=${PX4_SIM_MODEL:=omnicopter}
-
-param set-default CA_AIRFRAME 0
-
-param set-default CA_ROTOR_COUNT 8
-param set-default CA_R_REV 255
-
-param set-default CA_ROTOR0_PX 0.14435
-param set-default CA_ROTOR0_PY -0.14435
-param set-default CA_ROTOR0_PZ -0.14435
-param set-default CA_ROTOR0_KM 0.05 # CCW
-param set-default CA_ROTOR0_AX -0.788675
-param set-default CA_ROTOR0_AY -0.211325
-param set-default CA_ROTOR0_AZ -0.57735
-
-param set-default CA_ROTOR1_PX -0.14435
-param set-default CA_ROTOR1_PY -0.14435
-param set-default CA_ROTOR1_PZ -0.14435
-param set-default CA_ROTOR1_KM 0.05
-param set-default CA_ROTOR1_AX 0.211325
-param set-default CA_ROTOR1_AY -0.788675
-param set-default CA_ROTOR1_AZ 0.57735
-
-param set-default CA_ROTOR2_PX 0.14435
-param set-default CA_ROTOR2_PY 0.14435
-param set-default CA_ROTOR2_PZ -0.14435
-param set-default CA_ROTOR2_KM 0.05
-param set-default CA_ROTOR2_AX -0.211325
-param set-default CA_ROTOR2_AY 0.788675
-param set-default CA_ROTOR2_AZ 0.57735
-
-param set-default CA_ROTOR3_PX -0.14435
-param set-default CA_ROTOR3_PY 0.14435
-param set-default CA_ROTOR3_PZ -0.14435
-param set-default CA_ROTOR3_KM 0.05
-param set-default CA_ROTOR3_AX 0.788675
-param set-default CA_ROTOR3_AY 0.211325
-param set-default CA_ROTOR3_AZ -0.57735
-
-param set-default CA_ROTOR4_PX 0.14435
-param set-default CA_ROTOR4_PY -0.14435
-param set-default CA_ROTOR4_PZ 0.14435
-param set-default CA_ROTOR4_KM 0.05
-param set-default CA_ROTOR4_AX 0.788675
-param set-default CA_ROTOR4_AY 0.211325
-param set-default CA_ROTOR4_AZ -0.57735
-
-param set-default CA_ROTOR5_PX -0.14435
-param set-default CA_ROTOR5_PY -0.14435
-param set-default CA_ROTOR5_PZ 0.14435
-param set-default CA_ROTOR5_KM 0.05
-param set-default CA_ROTOR5_AX -0.211325
-param set-default CA_ROTOR5_AY 0.788675
-param set-default CA_ROTOR5_AZ 0.57735
-
-param set-default CA_ROTOR6_PX 0.14435
-param set-default CA_ROTOR6_PY 0.14435
-param set-default CA_ROTOR6_PZ 0.14435
-param set-default CA_ROTOR6_KM 0.05
-param set-default CA_ROTOR6_AX 0.211325
-param set-default CA_ROTOR6_AY -0.788675
-param set-default CA_ROTOR6_AZ 0.57735
-
-param set-default CA_ROTOR7_PX -0.14435
-param set-default CA_ROTOR7_PY 0.14435
-param set-default CA_ROTOR7_PZ 0.14435
-param set-default CA_ROTOR7_KM 0.05
-param set-default CA_ROTOR7_AX -0.788675
-param set-default CA_ROTOR7_AY -0.211325
-param set-default CA_ROTOR7_AZ -0.57735
-
-param set-default SIM_GZ_EN 1
-param set-default SENS_EN_GPSSIM 1
-param set-default SENS_EN_BAROSIM 0
-param set-default SENS_EN_MAGSIM 1
-
-param set-default SIM_GZ_EC_FUNC1 101
-param set-default SIM_GZ_EC_FUNC2 102
-param set-default SIM_GZ_EC_FUNC3 103
-param set-default SIM_GZ_EC_FUNC4 104
-param set-default SIM_GZ_EC_FUNC5 105
-param set-default SIM_GZ_EC_FUNC6 106
-param set-default SIM_GZ_EC_FUNC7 107
-param set-default SIM_GZ_EC_FUNC8 108
-
-param set-default SIM_GZ_EC_MIN1 0
-param set-default SIM_GZ_EC_MIN2 0
-param set-default SIM_GZ_EC_MIN3 0
-param set-default SIM_GZ_EC_MIN4 0
-param set-default SIM_GZ_EC_MIN5 0
-param set-default SIM_GZ_EC_MIN6 0
-param set-default SIM_GZ_EC_MIN7 0
-param set-default SIM_GZ_EC_MIN8 0
-
-param set-default SIM_GZ_EC_MAX1 1100
-param set-default SIM_GZ_EC_MAX2 1100
-param set-default SIM_GZ_EC_MAX3 1100
-param set-default SIM_GZ_EC_MAX4 1100
-param set-default SIM_GZ_EC_MAX5 1100
-param set-default SIM_GZ_EC_MAX6 1100
-param set-default SIM_GZ_EC_MAX7 1100
-param set-default SIM_GZ_EC_MAX8 1100
-# disable MC desaturation which improves attitude tracking
-param set-default CA_METHOD 0
-
-# disable attitude failure detection
-param set-default FD_FAIL_P 0
-param set-default FD_FAIL_R 0
-
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt b/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt
index 0ba0c0be9d..4c61e70643 100644
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt
+++ b/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt
@@ -60,7 +60,6 @@ px4_add_romfs_files(
        1042_gazebo-classic_tiltrotor
        1043_gazebo-classic_standard_vtol_drop
        1044_gazebo-classic_plane_lidar
-       1045_gazebo-classic_quadtailsitter
        1060_gazebo-classic_rover
        1061_gazebo-classic_r1_rover
        1062_flightgear_tf-r1
@@ -81,8 +80,6 @@ px4_add_romfs_files(
        6011_gazebo-classic_typhoon_h480
        6011_gazebo-classic_typhoon_h480.post

-       8011_gz_omnicopter
-
        10015_gazebo-classic_iris
        10016_none_iris
        10017_jmavsim_iris
@@ -96,6 +93,4 @@ px4_add_romfs_files(

        17001_flightgear_tf-g1
        17002_flightgear_tf-g2
-
-       # [22000, 22999] Reserve for custom models
 )
diff --git a/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator b/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator
index 01216f7910..1f4693d4c1 100644
--- a/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator
+++ b/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator
@@ -59,7 +59,7 @@ elif [ "$PX4_SIMULATOR" = "gz" ] || [ "$(param show -q SIM_GZ_EN)" -eq "1" ]; th
        fi

        # look for running ${gz_command} gazebo world
-       gz_world=$( ${gz_command} topic -l | grep -m 1 -e "^/world/.*/clock" | sed 's/\/world\///g; s/\/clock//g' )
+       gz_world=$( ${gz_command} topic -l | grep -m 1 -e "/world/.*/clock" | sed 's/\/world\///g; s/\/clock//g' )

        # shellcheck disable=SC2153
        if [ -z "${gz_world}" ] && [ -n "${PX4_GZ_WORLDS}" ] && [ -n "${PX4_GZ_WORLD}" ]; then
diff --git a/ROMFS/px4fmu_common/init.d-posix/rcS b/ROMFS/px4fmu_common/init.d-posix/rcS
index 7ecbfc3dcb..3828b62f4b 100644
--- a/ROMFS/px4fmu_common/init.d-posix/rcS
+++ b/ROMFS/px4fmu_common/init.d-posix/rcS
@@ -168,6 +168,8 @@ param set-default EKF2_REQ_GPS_H 0.5
 # Multi-EKF
 param set-default EKF2_MULTI_IMU 3
 param set-default SENS_IMU_MODE 0
+param set-default EKF2_MULTI_MAG 2
+param set-default SENS_MAG_MODE 0

 param set-default IMU_GYRO_FFT_EN 1
 param set-default MAV_PROTO_VER 2 # Ensures QGC does not drop the first few packets after a SITL restart due to MAVLINK 1 packets
diff --git a/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil b/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil
index d47d11545b..cbb41cccd5 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil
+++ b/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil
@@ -20,7 +20,6 @@
 param set-default EKF2_FUSE_BETA 0 # side slip fusion is currently not supported for tailsitters

 param set UAVCAN_ENABLE 0
-param set-default VT_B_TRANS_DUR 5
 param set-default VT_ELEV_MC_LOCK 0
 param set-default VT_MOT_COUNT 2
 param set-default VT_TYPE 0
diff --git a/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter b/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter
index 2424a72d0a..fccaee8cf5 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter
+++ b/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter
@@ -31,4 +31,3 @@ param set-default CA_SV_CS1_TYPE 6
 param set-default MAV_TYPE 19
 param set-default VT_TYPE 0
 param set-default VT_ELEV_MC_LOCK 0
-param set-default VT_B_TRANS_DUR 5
diff --git a/ROMFS/px4fmu_common/init.d/airframes/2106_albatross b/ROMFS/px4fmu_common/init.d/airframes/2106_albatross
index 3b51c32f61..e918ea0f3c 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/2106_albatross
+++ b/ROMFS/px4fmu_common/init.d/airframes/2106_albatross
@@ -17,7 +17,6 @@
 # @maintainer Andreas Antener <andreas@uaventure.com>
 #
 # @board bitcraze_crazyflie exclude
-# @board diatone_mamba-f405-mk2 exclude
 #

 . ${R}etc/init.d/rc.fw_defaults
diff --git a/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2 b/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2
index 4cc12633de..1fb639236e 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2
+++ b/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2
@@ -34,9 +34,9 @@ param set-default CA_ROTOR3_PX -0.25
 param set-default CA_ROTOR3_PY 0.25
 param set-default CA_ROTOR3_KM -0.05

-param set-default PWM_MAIN_FUNC1 101
-param set-default PWM_MAIN_FUNC2 102
-param set-default PWM_MAIN_FUNC3 103
-param set-default PWM_MAIN_FUNC4 104
-param set-default PWM_MAIN_TIM0 -4
+param set-default PWM_AUX_FUNC1 101
+param set-default PWM_AUX_FUNC2 102
+param set-default PWM_AUX_FUNC3 103
+param set-default PWM_AUX_FUNC4 104
+param set-default PWM_AUX_TIM0 -4

diff --git a/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie b/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie
index 994ff02383..211feb4924 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie
+++ b/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie
@@ -13,7 +13,6 @@
 # @board px4_fmu-v4pro exclude
 # @board px4_fmu-v5 exclude
 # @board px4_fmu-v5x exclude
-# @board diatone_mamba-f405-mk2 exclude
 #
 . ${R}etc/init.d/rc.mc_defaults

diff --git a/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21 b/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21
index e340fb8f44..3462b7575f 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21
+++ b/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21
@@ -13,7 +13,6 @@
 # @board px4_fmu-v4pro exclude
 # @board px4_fmu-v5 exclude
 # @board px4_fmu-v5x exclude
-# @board diatone_mamba-f405-mk2 exclude
 #
 . ${R}etc/init.d/rc.mc_defaults

diff --git a/ROMFS/px4fmu_common/init.d/rc.mc_apps b/ROMFS/px4fmu_common/init.d/rc.mc_apps
index 8158ab8b03..0b2256dba5 100644
--- a/ROMFS/px4fmu_common/init.d/rc.mc_apps
+++ b/ROMFS/px4fmu_common/init.d/rc.mc_apps
@@ -79,3 +79,7 @@ mc_pos_control start
 # Start Multicopter Land Detector.
 #
 land_detector start multicopter
+#
+# Start reading sensor data
+#
+MY_TASK1 start
diff --git a/ROMFS/px4fmu_common/init.d/rcS b/ROMFS/px4fmu_common/init.d/rcS
index 4a391d39f9..04a07cfee9 100644
--- a/ROMFS/px4fmu_common/init.d/rcS
+++ b/ROMFS/px4fmu_common/init.d/rcS
@@ -254,8 +254,6 @@ else
        #
        rgbled start -X -q
        rgbled_ncp5623c start -X -q
-       rgbled_lp5562 start -X -q
-       rgbled_is31fl3195 start -X -q

        #
        # Override parameters from user configuration file.
diff --git a/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp b/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp
index 508a542754..f98d4120d8 100644
--- a/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp
+++ b/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp
@@ -5,6 +5,7 @@
 #include <matrix/math.hpp>
 #include <cstdlib>

+
 orb_advert_t mavlink_log_pub = nullptr;

 // required standard deviation of estimate for estimator to publish data
@@ -132,6 +133,8 @@ BlockLocalPositionEstimator::BlockLocalPositionEstimator() :
                 (_param_lpe_fusion.get() & FUSE_PUB_AGL_Z) != 0,
                 (_param_lpe_fusion.get() & FUSE_FLOW_GYRO_COMP) != 0,
                 (_param_lpe_fusion.get() & FUSE_BARO) != 0);
+
+
 }

 bool
@@ -142,6 +145,7 @@ BlockLocalPositionEstimator::init()
                return false;
        }

+
        return true;
 }

@@ -184,6 +188,7 @@ void BlockLocalPositionEstimator::Run()
                return;
        }

+
        uint64_t newTimeStamp = hrt_absolute_time();
        float dt = (newTimeStamp - _timeStamp) / 1.0e6f;
        _timeStamp = newTimeStamp;
@@ -222,31 +227,37 @@ void BlockLocalPositionEstimator::Run()
                }
        }

+
+
+
+
        // reset pos, vel, and terrain on arming

        // XXX this will be re-enabled for indoor use cases using a
        // selection param, but is really not helping outdoors
        // right now.

-       // if (!_lastArmedState && armedState) {

-       //      // we just armed, we are at origin on the ground
-       //      _x(X_x) = 0;
-       //      _x(X_y) = 0;
-       //      // reset Z or not? _x(X_z) = 0;
+/*      if (!_lastArmedState && armedState) {

-       //      // we aren't moving, all velocities are zero
-       //      _x(X_vx) = 0;
-       //      _x(X_vy) = 0;
-       //      _x(X_vz) = 0;
+            // we just armed, we are at origin on the ground
+            _x(X_x) = 0;
+            _x(X_y) = 0;
+            _x(X_z) = 0;

-       //      // assume we are on the ground, so terrain alt is local alt
        if (_mocapUpdated) {
                if (_sensorTimeout & SENSOR_MOCAP) {
                        mocapInit();
@@ -589,7 +604,6 @@ void BlockLocalPositionEstimator::publishLocalPos()
                _pub_lpos.get().z_valid = _estimatorInitialized & EST_Z;
                _pub_lpos.get().v_xy_valid = _estimatorInitialized & EST_XY;
                _pub_lpos.get().v_z_valid = _estimatorInitialized & EST_Z;
-
                _pub_lpos.get().x = xLP(X_x);   // north
                _pub_lpos.get().y = xLP(X_y);   // east

@@ -659,6 +673,7 @@ void BlockLocalPositionEstimator::publishOdom()
                        _pub_odom.get().position[2] = xLP(X_z); // down
                }

+
                // orientation
                matrix::Quatf q = matrix::Quatf(_sub_att.get().q);
                q.copyTo(_pub_odom.get().q);
@@ -709,6 +724,21 @@ void BlockLocalPositionEstimator::publishOdom()
        }
 }

+void BlockLocalPositionEstimator::publishVisualOdometry()
+{
+       _pub_visual_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_visual_odom.get().position[0] = pos.x;
+       _pub_visual_odom.get().position[1] = pos.y;
+       _pub_visual_odom.get().position[2]=  pos.z;
-
                _pub_lpos.get().x = xLP(X_x);   // north
                _pub_lpos.get().y = xLP(X_y);   // east

@@ -659,6 +673,7 @@ void BlockLocalPositionEstimator::publishOdom()
                        _pub_odom.get().position[2] = xLP(X_z); // down
                }

+
                // orientation
                matrix::Quatf q = matrix::Quatf(_sub_att.get().q);
                q.copyTo(_pub_odom.get().q);
@@ -709,6 +724,21 @@ void BlockLocalPositionEstimator::publishOdom()
        }
 }

+void BlockLocalPositionEstimator::publishVisualOdometry()
+{
+       _pub_visual_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_visual_odom.get().position[0] = pos.x;
+       _pub_visual_odom.get().position[1] = pos.y;
+       _pub_visual_odom.get().position[2]=  pos.z;
+
+       _pub_visual_odom.get().timestamp = hrt_absolute_time();
+       _pub_visual_odom.update();
+
+
+}
+
 void BlockLocalPositionEstimator::publishEstimatorStatus()
 {
        _pub_est_states.get().timestamp_sample = _timeStamp;
diff --git a/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp b/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp
index 0b312b9183..4ff96c43a2 100644
--- a/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp
+++ b/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp
@@ -1,5 +1,6 @@
 #pragma once

+#include "tag.hpp"
 #include <drivers/drv_hrt.h>
 #include <px4_platform_common/module.h>
 #include <px4_platform_common/module_params.h>
@@ -125,8 +126,11 @@ public:

        bool init();

+
 private:

+       Tag _ret;
+
        // constants
        enum {X_x = 0, X_y, X_z, X_vx, X_vy, X_vz, X_bx, X_by, X_bz, X_tz, n_x};
        enum {U_ax = 0, U_ay, U_az, n_u};
@@ -256,6 +260,7 @@ private:
        void publishOdom();
        void publishEstimatorStatus();
        void publishEk2fTimestamps();
+       void publishVisualOdometry();

        // attributes
        // ----------------------------
@@ -291,6 +296,7 @@ private:
        uORB::PublicationData<estimator_status_s> _pub_est_status{ORB_ID(estimator_status)};
        uORB::PublicationData<estimator_innovations_s> _pub_innov{ORB_ID(estimator_innovations)};
        uORB::PublicationData<estimator_innovations_s> _pub_innov_var{ORB_ID(estimator_innovation_variances)};
+       uORB::PublicationData<vehicle_odometry_s> _pub_visual_odom{ORB_ID(vehicle_visual_odometry)};

        // map projection
        MapProjection _map_ref;
diff --git a/src/modules/local_position_estimator/CMakeLists.txt b/src/modules/local_position_estimator/CMakeLists.txt
index aafaecdef0..7dba71becd 100644
--- a/src/modules/local_position_estimator/CMakeLists.txt
+++ b/src/modules/local_position_estimator/CMakeLists.txt
@@ -38,6 +38,7 @@ px4_add_module(
        STACK_MAX 3700
        SRCS
                BlockLocalPositionEstimator.cpp
+               tag.cpp
                sensors/flow.cpp
                sensors/lidar.cpp
                sensors/sonar.cpp
diff --git a/src/modules/local_position_estimator/tag.cpp b/src/modules/local_position_estimator/tag.cpp
new file mode 100644
index 0000000000..6e73fda97f
--- /dev/null
+++ b/src/modules/local_position_estimator/tag.cpp
@@ -0,0 +1,39 @@
+#include "tag.hpp"
+
+const char* mydevice;
+const int bus = 1;     // there is only one I2C bus in holybhris@chris-ThinkPad-T460s:~/Desktop/PX4-Autopilot$ git show
commit 86f9647bd3625581a95732fe0131830ec3db0bde (HEAD -> main, origin/main, origin/HEAD)
Author: lazy-boi-13 <chriggi.weidmann@gmail.com>
Date:   Mon Jul 31 10:23:21 2023 -0400

    second commit

diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert b/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert
index 2782817873..c98cc5c8ed 100644
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert
+++ b/ROMFS/px4fmu_common/init.d-posix/airframes/10042_sihsim_xvert
@@ -17,7 +17,6 @@ param set-default SENS_EN_GPSSIM 1
 param set-default SENS_EN_BAROSIM 1
 param set-default SENS_EN_MAGSIM 1

-param set-default VT_B_TRANS_DUR 5
 param set-default VT_ELEV_MC_LOCK 0
 param set-default VT_TYPE 0
 param set-default VT_FW_DIFTHR_EN 1
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter b/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter
index 1fe1fdde6e..d5f86862fe 100644
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter
+++ b/ROMFS/px4fmu_common/init.d-posix/airframes/1041_gazebo-classic_tailsitter
@@ -47,33 +47,38 @@ param set-default PWM_MAIN_REV 96 # invert both elevons
 # Single-EKF (for replay)
 param set-default EKF2_MULTI_IMU 0
 param set-default SENS_IMU_MODE 1
+param set-default EKF2_MULTI_MAG 0
+param set-default SENS_MAG_MODE 1

-param set-default FW_P_TC 0.6
-
-param set-default FW_PR_FF 0.1
+param set-default NPFG_PERIOD 12
+param set-default FW_PR_I 0.2
+param set-default FW_PR_P 0.2
 param set-default FW_PSP_OFF 2
-param set-default FW_RR_FF 0.1
-param set-default FW_RR_I 0.2
-param set-default FW_RR_P 0.3
-param set-default FW_THR_TRIM 0.35
-param set-default FW_THR_MAX 0.8
+param set-default FW_P_LIM_MIN -15
+param set-default FW_RR_P 0.2
+param set-default FW_THR_TRIM 0.33
+param set-default FW_THR_MAX 0.6
 param set-default FW_THR_MIN 0.05
-param set-default FW_T_CLMB_MAX 6
-param set-default FW_T_HRATE_FF 0.5
-param set-default FW_T_SINK_MAX 3
-param set-default FW_T_SINK_MIN 1.6
+param set-default FW_T_ALT_TC 2
+param set-default FW_T_CLMB_MAX 8
+param set-default FW_T_SINK_MAX 2.7
+param set-default FW_T_SINK_MIN 2.2
+param set-default FW_T_TAS_TC 2

 param set-default MC_AIRMODE 1
-param set-default MC_ROLL_P 3
-param set-default MC_PITCH_P 3
 param set-default MC_ROLLRATE_P 0.3
-param set-default MC_PITCHRATE_P 0.3

-param set-default VT_ARSP_TRANS 10
-param set-default VT_B_TRANS_DUR 5
+param set-default MPC_XY_P 0.8
+param set-default MPC_XY_VEL_P_ACC 3
+param set-default MPC_XY_VEL_I_ACC 4
+param set-default MPC_XY_VEL_D_ACC 0.1
+
+param set-default NAV_ACC_RAD 5
+
 param set-default VT_FW_DIFTHR_EN 1
-param set-default VT_FW_DIFTHR_S_Y 1
+param set-default VT_FW_DIFTHR_S_Y 0.5
 param set-default VT_F_TRANS_DUR 1.5
+param set-default VT_F_TRANS_THR 0.7
 param set-default VT_TYPE 0

 param set-default WV_EN 0
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/1045_gazebo-classic_quadtailsitter b/ROMFS/px4fmu_common/init.d-posix/airframes/1045_gazebo-classic_quadtailsitter
deleted file mode 100644
index 87afb523b1..0000000000
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/1045_gazebo-classic_quadtailsitter
+++ /dev/null
@@ -1,74 +0,0 @@
-#!/bin/sh
-#
-# @name Quadrotor + Tailsitter
-#
-# @type VTOL Quad Tailsitter
-#
-
-. ${R}etc/init.d/rc.vtol_defaults
-
-param set-default MAV_TYPE 20
-
-param set-default CA_AIRFRAME 4
-
-param set-default CA_ROTOR_COUNT 4
-param set-default CA_ROTOR0_PX 0.15
-param set-default CA_ROTOR0_PY 0.23
-param set-default CA_ROTOR0_KM 0.05
-param set-default CA_ROTOR1_PX -0.15
-param set-default CA_ROTOR1_PY -0.23
-param set-default CA_ROTOR1_KM 0.05
-param set-default CA_ROTOR2_PX 0.15
-param set-default CA_ROTOR2_PY -0.23
-param set-default CA_ROTOR2_KM -0.05
-param set-default CA_ROTOR3_PX -0.15
-param set-default CA_ROTOR3_PY 0.23
-param set-default CA_ROTOR3_KM -0.05
-
-param set-default CA_SV_CS_COUNT 0
-
-param set-default PWM_MAIN_FUNC1 101
-param set-default PWM_MAIN_FUNC2 102
-param set-default PWM_MAIN_FUNC3 103
-param set-default PWM_MAIN_FUNC4 104
-param set-default PWM_MAIN_FUNC5 0
-
-parm set-default FD_FAIL_R 70
-
-param set-default FW_P_TC 0.6
-
-param set-default FW_PR_I 0.3
-param set-default FW_PR_P 0.5
-param set-default FW_PSP_OFF 2
-param set-default FW_RR_FF 0.1
-param set-default FW_RR_I 0.1
-param set-default FW_RR_P 0.2
-param set-default FW_YR_FF 0 # make yaw rate controller very weak, only keep default P
-param set-default FW_YR_I 0
-param set-default FW_THR_TRIM 0.35
-param set-default FW_THR_MAX 0.8
-param set-default FW_THR_MIN 0.05
-param set-default FW_T_CLMB_MAX 6
-param set-default FW_T_HRATE_FF 0.5
-param set-default FW_T_SINK_MAX 3
-param set-default FW_T_SINK_MIN 1.6
-param set-default FW_AIRSPD_STALL 10
-param set-default FW_AIRSPD_MIN 14
-param set-default FW_AIRSPD_TRIM 18
-param set-default FW_AIRSPD_MAX 22
-
-param set-default MC_AIRMODE 2
-param set-default MAN_ARM_GESTURE 0 # required for yaw airmode
-param set-default MC_ROLL_P 3
-param set-default MC_PITCH_P 3
-param set-default MC_ROLLRATE_P 0.3
-param set-default MC_PITCHRATE_P 0.3
-
-param set-default VT_ARSP_TRANS 15
-param set-default VT_B_TRANS_DUR 5
-param set-default VT_FW_DIFTHR_EN 7
-param set-default VT_FW_DIFTHR_S_Y 1
-param set-default VT_F_TRANS_DUR 1.5
-param set-default VT_TYPE 0
-
-param set-default WV_EN 0
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/8011_gz_omnicopter b/ROMFS/px4fmu_common/init.d-posix/airframes/8011_gz_omnicopter
deleted file mode 100644
index 707df1bba1..0000000000
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/8011_gz_omnicopter
+++ /dev/null
@@ -1,122 +0,0 @@
-#!/bin/sh
-#
-# @name 6DoF Omnicopter SITL
-#
-# @type Quadrotor Wide
-#
-# @maintainer Jaeyoung Lim <jalim@ethz.ch>
-#
-
-. ${R}etc/init.d/rc.mc_defaults
-
-PX4_SIMULATOR=${PX4_SIMULATOR:=gz}
-PX4_GZ_WORLD=${PX4_GZ_WORLD:=default}
-PX4_SIM_MODEL=${PX4_SIM_MODEL:=omnicopter}
-
-param set-default CA_AIRFRAME 0
-
-param set-default CA_ROTOR_COUNT 8
-param set-default CA_R_REV 255
-
-param set-default CA_ROTOR0_PX 0.14435
-param set-default CA_ROTOR0_PY -0.14435
-param set-default CA_ROTOR0_PZ -0.14435
-param set-default CA_ROTOR0_KM 0.05 # CCW
-param set-default CA_ROTOR0_AX -0.788675
-param set-default CA_ROTOR0_AY -0.211325
-param set-default CA_ROTOR0_AZ -0.57735
-
-param set-default CA_ROTOR1_PX -0.14435
-param set-default CA_ROTOR1_PY -0.14435
-param set-default CA_ROTOR1_PZ -0.14435
-param set-default CA_ROTOR1_KM 0.05
-param set-default CA_ROTOR1_AX 0.211325
-param set-default CA_ROTOR1_AY -0.788675
-param set-default CA_ROTOR1_AZ 0.57735
-
-param set-default CA_ROTOR2_PX 0.14435
-param set-default CA_ROTOR2_PY 0.14435
-param set-default CA_ROTOR2_PZ -0.14435
-param set-default CA_ROTOR2_KM 0.05
-param set-default CA_ROTOR2_AX -0.211325
-param set-default CA_ROTOR2_AY 0.788675
-param set-default CA_ROTOR2_AZ 0.57735
-
-param set-default CA_ROTOR3_PX -0.14435
-param set-default CA_ROTOR3_PY 0.14435
-param set-default CA_ROTOR3_PZ -0.14435
-param set-default CA_ROTOR3_KM 0.05
-param set-default CA_ROTOR3_AX 0.788675
-param set-default CA_ROTOR3_AY 0.211325
-param set-default CA_ROTOR3_AZ -0.57735
-
-param set-default CA_ROTOR4_PX 0.14435
-param set-default CA_ROTOR4_PY -0.14435
-param set-default CA_ROTOR4_PZ 0.14435
-param set-default CA_ROTOR4_KM 0.05
-param set-default CA_ROTOR4_AX 0.788675
-param set-default CA_ROTOR4_AY 0.211325
-param set-default CA_ROTOR4_AZ -0.57735
-
-param set-default CA_ROTOR5_PX -0.14435
-param set-default CA_ROTOR5_PY -0.14435
-param set-default CA_ROTOR5_PZ 0.14435
-param set-default CA_ROTOR5_KM 0.05
-param set-default CA_ROTOR5_AX -0.211325
-param set-default CA_ROTOR5_AY 0.788675
-param set-default CA_ROTOR5_AZ 0.57735
-
-param set-default CA_ROTOR6_PX 0.14435
-param set-default CA_ROTOR6_PY 0.14435
-param set-default CA_ROTOR6_PZ 0.14435
-param set-default CA_ROTOR6_KM 0.05
-param set-default CA_ROTOR6_AX 0.211325
-param set-default CA_ROTOR6_AY -0.788675
-param set-default CA_ROTOR6_AZ 0.57735
-
-param set-default CA_ROTOR7_PX -0.14435
-param set-default CA_ROTOR7_PY 0.14435
-param set-default CA_ROTOR7_PZ 0.14435
-param set-default CA_ROTOR7_KM 0.05
-param set-default CA_ROTOR7_AX -0.788675
-param set-default CA_ROTOR7_AY -0.211325
-param set-default CA_ROTOR7_AZ -0.57735
-
-param set-default SIM_GZ_EN 1
-param set-default SENS_EN_GPSSIM 1
-param set-default SENS_EN_BAROSIM 0
-param set-default SENS_EN_MAGSIM 1
-
-param set-default SIM_GZ_EC_FUNC1 101
-param set-default SIM_GZ_EC_FUNC2 102
-param set-default SIM_GZ_EC_FUNC3 103
-param set-default SIM_GZ_EC_FUNC4 104
-param set-default SIM_GZ_EC_FUNC5 105
-param set-default SIM_GZ_EC_FUNC6 106
-param set-default SIM_GZ_EC_FUNC7 107
-param set-default SIM_GZ_EC_FUNC8 108
-
-param set-default SIM_GZ_EC_MIN1 0
-param set-default SIM_GZ_EC_MIN2 0
-param set-default SIM_GZ_EC_MIN3 0
-param set-default SIM_GZ_EC_MIN4 0
-param set-default SIM_GZ_EC_MIN5 0
-param set-default SIM_GZ_EC_MIN6 0
-param set-default SIM_GZ_EC_MIN7 0
-param set-default SIM_GZ_EC_MIN8 0
-
-param set-default SIM_GZ_EC_MAX1 1100
-param set-default SIM_GZ_EC_MAX2 1100
-param set-default SIM_GZ_EC_MAX3 1100
-param set-default SIM_GZ_EC_MAX4 1100
-param set-default SIM_GZ_EC_MAX5 1100
-param set-default SIM_GZ_EC_MAX6 1100
-param set-default SIM_GZ_EC_MAX7 1100
-param set-default SIM_GZ_EC_MAX8 1100
-# disable MC desaturation which improves attitude tracking
-param set-default CA_METHOD 0
-
-# disable attitude failure detection
-param set-default FD_FAIL_P 0
-param set-default FD_FAIL_R 0
-
diff --git a/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt b/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt
index 0ba0c0be9d..4c61e70643 100644
--- a/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt
+++ b/ROMFS/px4fmu_common/init.d-posix/airframes/CMakeLists.txt
@@ -60,7 +60,6 @@ px4_add_romfs_files(
        1042_gazebo-classic_tiltrotor
        1043_gazebo-classic_standard_vtol_drop
        1044_gazebo-classic_plane_lidar
-       1045_gazebo-classic_quadtailsitter
        1060_gazebo-classic_rover
        1061_gazebo-classic_r1_rover
        1062_flightgear_tf-r1
@@ -81,8 +80,6 @@ px4_add_romfs_files(
        6011_gazebo-classic_typhoon_h480
        6011_gazebo-classic_typhoon_h480.post

-       8011_gz_omnicopter
-
        10015_gazebo-classic_iris
        10016_none_iris
        10017_jmavsim_iris
@@ -96,6 +93,4 @@ px4_add_romfs_files(

        17001_flightgear_tf-g1
        17002_flightgear_tf-g2
-
-       # [22000, 22999] Reserve for custom models
 )
diff --git a/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator b/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator
index 01216f7910..1f4693d4c1 100644
--- a/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator
+++ b/ROMFS/px4fmu_common/init.d-posix/px4-rc.simulator
@@ -59,7 +59,7 @@ elif [ "$PX4_SIMULATOR" = "gz" ] || [ "$(param show -q SIM_GZ_EN)" -eq "1" ]; th
        fi

        # look for running ${gz_command} gazebo world
-       gz_world=$( ${gz_command} topic -l | grep -m 1 -e "^/world/.*/clock" | sed 's/\/world\///g; s/\/clock//g' )
+       gz_world=$( ${gz_command} topic -l | grep -m 1 -e "/world/.*/clock" | sed 's/\/world\///g; s/\/clock//g' )

        # shellcheck disable=SC2153
        if [ -z "${gz_world}" ] && [ -n "${PX4_GZ_WORLDS}" ] && [ -n "${PX4_GZ_WORLD}" ]; then
diff --git a/ROMFS/px4fmu_common/init.d-posix/rcS b/ROMFS/px4fmu_common/init.d-posix/rcS
index 7ecbfc3dcb..3828b62f4b 100644
--- a/ROMFS/px4fmu_common/init.d-posix/rcS
+++ b/ROMFS/px4fmu_common/init.d-posix/rcS
@@ -168,6 +168,8 @@ param set-default EKF2_REQ_GPS_H 0.5
 # Multi-EKF
 param set-default EKF2_MULTI_IMU 3
 param set-default SENS_IMU_MODE 0
+param set-default EKF2_MULTI_MAG 2
+param set-default SENS_MAG_MODE 0

 param set-default IMU_GYRO_FFT_EN 1
 param set-default MAV_PROTO_VER 2 # Ensures QGC does not drop the first few packets after a SITL restart due to MAVLINK 1 packets
diff --git a/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil b/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil
index d47d11545b..cbb41cccd5 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil
+++ b/ROMFS/px4fmu_common/init.d/airframes/1102_tailsitter_duo_sih.hil
@@ -20,7 +20,6 @@
 param set-default EKF2_FUSE_BETA 0 # side slip fusion is currently not supported for tailsitters

 param set UAVCAN_ENABLE 0
-param set-default VT_B_TRANS_DUR 5
 param set-default VT_ELEV_MC_LOCK 0
 param set-default VT_MOT_COUNT 2
 param set-default VT_TYPE 0
diff --git a/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter b/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter
index 2424a72d0a..fccaee8cf5 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter
+++ b/ROMFS/px4fmu_common/init.d/airframes/13200_generic_vtol_tailsitter
@@ -31,4 +31,3 @@ param set-default CA_SV_CS1_TYPE 6
 param set-default MAV_TYPE 19
 param set-default VT_TYPE 0
 param set-default VT_ELEV_MC_LOCK 0
-param set-default VT_B_TRANS_DUR 5
diff --git a/ROMFS/px4fmu_common/init.d/airframes/2106_albatross b/ROMFS/px4fmu_common/init.d/airframes/2106_albatross
index 3b51c32f61..e918ea0f3c 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/2106_albatross
+++ b/ROMFS/px4fmu_common/init.d/airframes/2106_albatross
@@ -17,7 +17,6 @@
 # @maintainer Andreas Antener <andreas@uaventure.com>
 #
 # @board bitcraze_crazyflie exclude
-# @board diatone_mamba-f405-mk2 exclude
 #

 . ${R}etc/init.d/rc.fw_defaults
diff --git a/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2 b/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2
index 4cc12633de..1fb639236e 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2
+++ b/ROMFS/px4fmu_common/init.d/airframes/4019_x500_v2
@@ -34,9 +34,9 @@ param set-default CA_ROTOR3_PX -0.25
 param set-default CA_ROTOR3_PY 0.25
 param set-default CA_ROTOR3_KM -0.05

-param set-default PWM_MAIN_FUNC1 101
-param set-default PWM_MAIN_FUNC2 102
-param set-default PWM_MAIN_FUNC3 103
-param set-default PWM_MAIN_FUNC4 104
-param set-default PWM_MAIN_TIM0 -4
+param set-default PWM_AUX_FUNC1 101
+param set-default PWM_AUX_FUNC2 102
+param set-default PWM_AUX_FUNC3 103
+param set-default PWM_AUX_FUNC4 104
+param set-default PWM_AUX_TIM0 -4

diff --git a/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie b/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie
index 994ff02383..211feb4924 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie
+++ b/ROMFS/px4fmu_common/init.d/airframes/4900_crazyflie
@@ -13,7 +13,6 @@
 # @board px4_fmu-v4pro exclude
 # @board px4_fmu-v5 exclude
 # @board px4_fmu-v5x exclude
-# @board diatone_mamba-f405-mk2 exclude
 #
 . ${R}etc/init.d/rc.mc_defaults

diff --git a/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21 b/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21
index e340fb8f44..3462b7575f 100644
--- a/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21
+++ b/ROMFS/px4fmu_common/init.d/airframes/4901_crazyflie21
@@ -13,7 +13,6 @@
 # @board px4_fmu-v4pro exclude
 # @board px4_fmu-v5 exclude
 # @board px4_fmu-v5x exclude
-# @board diatone_mamba-f405-mk2 exclude
 #
 . ${R}etc/init.d/rc.mc_defaults

diff --git a/ROMFS/px4fmu_common/init.d/rc.mc_apps b/ROMFS/px4fmu_common/init.d/rc.mc_apps
index 8158ab8b03..0b2256dba5 100644
--- a/ROMFS/px4fmu_common/init.d/rc.mc_apps
+++ b/ROMFS/px4fmu_common/init.d/rc.mc_apps
@@ -79,3 +79,7 @@ mc_pos_control start
 # Start Multicopter Land Detector.
 #
 land_detector start multicopter
+#
+# Start reading sensor data
+#
+MY_TASK1 start
diff --git a/ROMFS/px4fmu_common/init.d/rcS b/ROMFS/px4fmu_common/init.d/rcS
index 4a391d39f9..04a07cfee9 100644
--- a/ROMFS/px4fmu_common/init.d/rcS
+++ b/ROMFS/px4fmu_common/init.d/rcS
@@ -254,8 +254,6 @@ else
        #
        rgbled start -X -q
        rgbled_ncp5623c start -X -q
-       rgbled_lp5562 start -X -q
-       rgbled_is31fl3195 start -X -q

        #
        # Override parameters from user configuration file.
diff --git a/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp b/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp
index 508a542754..f98d4120d8 100644
--- a/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp
+++ b/src/modules/local_position_estimator/BlockLocalPositionEstimator.cpp
@@ -5,6 +5,7 @@
 #include <matrix/math.hpp>
 #include <cstdlib>

+
 orb_advert_t mavlink_log_pub = nullptr;

 // required standard deviation of estimate for estimator to publish data
@@ -132,6 +133,8 @@ BlockLocalPositionEstimator::BlockLocalPositionEstimator() :
                 (_param_lpe_fusion.get() & FUSE_PUB_AGL_Z) != 0,
                 (_param_lpe_fusion.get() & FUSE_FLOW_GYRO_COMP) != 0,
                 (_param_lpe_fusion.get() & FUSE_BARO) != 0);
+
+
 }

 bool
@@ -142,6 +145,7 @@ BlockLocalPositionEstimator::init()
                return false;
        }

+
        return true;
 }

@@ -184,6 +188,7 @@ void BlockLocalPositionEstimator::Run()
                return;
        }

+
        uint64_t newTimeStamp = hrt_absolute_time();
        float dt = (newTimeStamp - _timeStamp) / 1.0e6f;
        _timeStamp = newTimeStamp;
@@ -222,31 +227,37 @@ void BlockLocalPositionEstimator::Run()
                }
        }

+
+
+
+
        // reset pos, vel, and terrain on arming

        // XXX this will be re-enabled for indoor use cases using a
        // selection param, but is really not helping outdoors
        // right now.

-       // if (!_lastArmedState && armedState) {

-       //      // we just armed, we are at origin on the ground
-       //      _x(X_x) = 0;
-       //      _x(X_y) = 0;
-       //      // reset Z or not? _x(X_z) = 0;
+/*      if (!_lastArmedState && armedState) {

-       //      // we aren't moving, all velocities are zero
-       //      _x(X_vx) = 0;
-       //      _x(X_vy) = 0;
-       //      _x(X_vz) = 0;
+            // we just armed, we are at origin on the ground
+            _x(X_x) = 0;
+            _x(X_y) = 0;
+            _x(X_z) = 0;

-       //      // assume we are on the ground, so terrain alt is local alt
        if (_mocapUpdated) {
                if (_sensorTimeout & SENSOR_MOCAP) {
                        mocapInit();
@@ -589,7 +604,6 @@ void BlockLocalPositionEstimator::publishLocalPos()
                _pub_lpos.get().z_valid = _estimatorInitialized & EST_Z;
                _pub_lpos.get().v_xy_valid = _estimatorInitialized & EST_XY;
                _pub_lpos.get().v_z_valid = _estimatorInitialized & EST_Z;
-
                _pub_lpos.get().x = xLP(X_x);   // north
                _pub_lpos.get().y = xLP(X_y);   // east

@@ -659,6 +673,7 @@ void BlockLocalPositionEstimator::publishOdom()
                        _pub_odom.get().position[2] = xLP(X_z); // down
                }

+
                // orientation
                matrix::Quatf q = matrix::Quatf(_sub_att.get().q);
                q.copyTo(_pub_odom.get().q);
@@ -709,6 +724,21 @@ void BlockLocalPositionEstimator::publishOdom()
        }
 }

+void BlockLocalPositionEstimator::publishVisualOdometry()
+{
+       _pub_visual_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_visual_odom.get().position[0] = pos.x;
+       _pub_visual_odom.get().position[1] = pos.y;
+       _pub_visual_odom.get().position[2]=  pos.z;
-
                _pub_lpos.get().x = xLP(X_x);   // north
                _pub_lpos.get().y = xLP(X_y);   // east

@@ -659,6 +673,7 @@ void BlockLocalPositionEstimator::publishOdom()
                        _pub_odom.get().position[2] = xLP(X_z); // down
                }

+
                // orientation
                matrix::Quatf q = matrix::Quatf(_sub_att.get().q);
                q.copyTo(_pub_odom.get().q);
@@ -709,6 +724,21 @@ void BlockLocalPositionEstimator::publishOdom()
        }
 }

+void BlockLocalPositionEstimator::publishVisualOdometry()
+{
+       _pub_visual_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_visual_odom.get().position[0] = pos.x;
+       _pub_visual_odom.get().position[1] = pos.y;
+       _pub_visual_odom.get().position[2]=  pos.z;
+
+       _pub_visual_odom.get().timestamp = hrt_absolute_time();
+       _pub_visual_odom.update();
+
+
+}
+
 void BlockLocalPositionEstimator::publishEstimatorStatus()
 {
        _pub_est_states.get().timestamp_sample = _timeStamp;
diff --git a/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp b/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp
index 0b312b9183..4ff96c43a2 100644
--- a/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp
+++ b/src/modules/local_position_estimator/BlockLocalPositionEstimator.hpp
@@ -1,5 +1,6 @@
 #pragma once

+#include "tag.hpp"
 #include <drivers/drv_hrt.h>
 #include <px4_platform_common/module.h>
 #include <px4_platform_common/module_params.h>
@@ -125,8 +126,11 @@ public:

        bool init();

+
 private:

+       Tag _ret;
+
        // constants
        enum {X_x = 0, X_y, X_z, X_vx, X_vy, X_vz, X_bx, X_by, X_bz, X_tz, n_x};
        enum {U_ax = 0, U_ay, U_az, n_u};
@@ -256,6 +260,7 @@ private:
        void publishOdom();
        void publishEstimatorStatus();
        void publishEk2fTimestamps();
+       void publishVisualOdometry();

        // attributes
        // ----------------------------
@@ -291,6 +296,7 @@ private:
        uORB::PublicationData<estimator_status_s> _pub_est_status{ORB_ID(estimator_status)};
        uORB::PublicationData<estimator_innovations_s> _pub_innov{ORB_ID(estimator_innovations)};
        uORB::PublicationData<estimator_innovations_s> _pub_innov_var{ORB_ID(estimator_innovation_variances)};
+       uORB::PublicationData<vehicle_odometry_s> _pub_visual_odom{ORB_ID(vehicle_visual_odometry)};

        // map projection
        MapProjection _map_ref;
diff --git a/src/modules/local_position_estimator/CMakeLists.txt b/src/modules/local_position_estimator/CMakeLists.txt
index aafaecdef0..7dba71becd 100644
--- a/src/modules/local_position_estimator/CMakeLists.txt
+++ b/src/modules/local_position_estimator/CMakeLists.txt
@@ -38,6 +38,7 @@ px4_add_module(
        STACK_MAX 3700
        SRCS
                BlockLocalPositionEstimator.cpp
+               tag.cpp
                sensors/flow.cpp
                sensors/lidar.cpp
                sensors/sonar.cpp
diff --git a/src/modules/local_position_estimator/tag.cpp b/src/modules/local_position_estimator/tag.cpp
new file mode 100644
index 0000000000..6e73fda97f
--- /dev/null
+++ b/src/modules/local_position_estimator/tag.cpp
@@ -0,0 +1,39 @@
+#include "tag.hpp"
+
+const char* mydevice;
+const int bus = 1;     // there is only one I2C bus in holybro_kakuteh7mini
+const uint32_t busfrequency = 110000; // has to be higher than 100 Khz otherwise the device is too slow for the bus
+const uint16_t address = 0x37; // i2c adress of tag is actually 0x65 but gets bitshifted thus it becomes 0x37
+
+Tag::Tag():I2C(0xFF, mydevice, bus, address, busfrequency)
+{
+       this->init();
+}
+
+
+Tag::corr_pkg_t Tag::getposition(bool NED = false)
+{
+       int pos = this->transfer(nullptr,0,buf,len);
+       memcpy(&payload,buf,26);
+
+       if (pos == PX4_OK && NED == false)
+       {
+               position.x = payload.x;
+               position.y = payload.y;
+               position.z = payload.z;
+       }
+
+       //moving the origin and transform the tdoa system into a North East Down (NED) frame meaning
+       //x should increase when moving forward (north)
+       //y should increase when moving to the right (east)
+       //z should decrease when moving up (down)
+
+       else if (pos == PX4_OK && NED == true)
+       {
+               position.x = payload.y - float(1.75);
+               position.y = payload.x - float(2.01);
+               position.z = -payload.z + float(0.2);
+       }
+
+       return position;
+}
diff --git a/src/modules/local_position_estimator/tag.hpp b/src/modules/local_position_estimator/tag.hpp
new file mode 100644
index 0000000000..77c3644c4b
--- /dev/null
+++ b/src/modules/local_position_estimator/tag.hpp
@@ -0,0 +1,41 @@
+#pragma once
+#include <drivers/device/i2c.h>
+
+class Tag: public device::I2C
+{
+
+public:
+
+       Tag();
+
+       typedef struct __attribute__((packed)) {
+
+       /** The x-coordinate in m */
+       float x;
+       /** The y-coordinate in m */
+       float y;
+       /** The z-coordinate in m */
+       float z;
+
+       /** The target x-coordinate in m */
+       float targetX;
+       /** The target y-coordinate in m */
+       float targetY;
+       /** The target z-coordinate in m */
+       float targetZ;
+
+       uint16_t crc16;
+
+       } corr_pkg_t;
+
+       corr_pkg_t getposition(bool NED);
+
+private:
+
+       corr_pkg_t position;    // for reading sensor
+       corr_pkg_t payload;
+       uint8_t len = 26;
+       uint8_t buf[26];
+
+};
+
diff --git a/src/modules/my_task1/CMakeLists.txt b/src/modules/my_task1/CMakeLists.txt
new file mode 100644
index 0000000000..a221d43b56
--- /dev/null
+++ b/src/modules/my_task1/CMakeLists.txt
@@ -0,0 +1,40 @@
+############################################################################
+#
+#   Copyright (c) 2018 PX4 Development Team. All rights reserved.
+#
+# Redistribution and use in source and binary forms, with or without
+# modification, are permitted provided that the following conditions
+# are met:
+#
+# 1. Redistributions of source code must retain the above copyright
+#    notice, this list of conditions and the following disclaimer.
+# 2. Redistributions in binary form must reproduce the above copyright
+#    notice, this list of conditions and the following disclaimer in
+#    the documentation and/or other materials provided with the
+#    distribution.
+# 3. Neither the name PX4 nor the names of its contributors may be
+#    used to endorse or promote products derived from this software
+#    without specific prior written permission.
+#
+# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
+# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
+# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
+# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
+# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
+# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
+# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
+# OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
+# AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
+# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
+# POSSIBILITY OF SUCH DAMAGE.
+#
+############################################################################
+
+px4_add_module(
+       MODULE modules__MY_TASK1
+       MAIN MY_TASK1
+       SRCS
+               MY_TASK1.cpp
+       )
+
diff --git a/src/modules/my_task1/Kconfig b/src/modules/my_task1/Kconfig
new file mode 100644
index 0000000000..dd49b380c0
--- /dev/null
+++ b/src/modules/my_task1/Kconfig
@@ -0,0 +1,5 @@
+menuconfig MODULES_MY_TASK1
+       bool "MY_TASK1"
+       default n
+       ---help---
+               Enable support for MY_TASK1
diff --git a/src/modules/my_task1/MY_TASK1.cpp b/src/modules/my_task1/MY_TASK1.cpp
new file mode 100644
index 0000000000..f7a86b9995
--- /dev/null
+++ b/src/modules/my_task1/MY_TASK1.cpp
@@ -0,0 +1,248 @@
+/****************************************************************************
+ *
+ *   Copyright (c) 2018 PX4 Development Team. All rights reserved.
+ *
+ * Redistribution and use in source and binary forms, with or without
+ * modification, are permitted provided that the following conditions
+ * are met:
+ *
+ * 1. Redistributions of source code must retain the above copyright
+ *    notice, this list of conditions and the following disclaimer.
+ * 2. Redistributions in binary form must reproduce the above copyright
+ *    notice, this list of conditions and the following disclaimer in
+ *    the documentation and/or other materials provided with the
+ *    distribution.
+ * 3. Neither the name PX4 nor the names of its contributors may be
+ *    used to endorse or promote products derived from this software
+ *    without specific prior written permission.
+ *
+ * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
+ * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
+ * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
+ * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
+ * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
+ * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
+ * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
+ * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
+ * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+ * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
+ * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
+ * POSSIBILITY OF SUCH DAMAGE.
+ *
+ ****************************************************************************/
+#define DEBUG_BUILD    // stop and restart task (if enabled by default) to see debug output
+#include "MY_TASK1.h"
+
+
+using namespace device;
+
+void MY_TASK1::publishMocapOdometry()
+{
+       _pub_mocap_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_mocap_odom.get().position[0] = pos.x;
+       _pub_mocap_odom.get().position[1] = pos.y;
+       _pub_mocap_odom.get().position[2] = pos.z;
+
+       _pub_mocap_odom.get().timestamp = hrt_absolute_time();
+       _pub_mocap_odom.update();
+}
+
+void MY_TASK1::publishVisualOdometry()
+{
+       _pub_visual_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_visual_odom.get().position[0] = pos.x;
+       _pub_visual_odom.get().position[1] = pos.y;
+       _pub_visual_odom.get().position[2] = pos.z;
+       _pub_visual_odom.update();
+
+       // one method for determining velocity
+/*
+       float dt = (hrt_absolute_time() - _timeStamp) / 1.0e6f;
+       float vx = (old_x - pos.x)/dt;
+       float vy = (old_y - pos.y)/dt;
+       float vz = (old_z - pos.z)/dt;
+
+       _pub_visual_odom.get().velocity[0] = vx;
+       _pub_visual_odom.get().velocity[1] = vy;
+       _pub_visual_odom.get().velocity[2] = vz;
+
+*/
+       _pub_visual_odom.get().timestamp = hrt_absolute_time();
+       _pub_visual_odom.update();
+}
+
+int MY_TASK1::print_status()
+{
+       PX4_INFO("Running");
+       // TODO: print additional runtime information about the state of the module
+
+       return 0;
+}
+
+int MY_TASK1::custom_command(int argc, char *argv[])
+{
+       PX4_INFO("costum command of MY_TASK1");
+       /*
+       if (!is_running()) {
+               print_usage("not running");
+               return 1;
+       }
+
+       // additional custom commands can be handled like this:
+       if (!strcmp(argv[0], "do-something")) {
+               get_instance()->do_something();
+               return 0;
+       }
+        */
+
+       return print_usage("unknown command");
+}
+
+
+int MY_TASK1::task_spawn(int argc, char *argv[])
+{
+       _task_id = px4_task_spawn_cmd("MY_TASK1",
+                                     SCHED_DEFAULT,
+                                     SCHED_PRIORITY_DEFAULT,
+                                     1024,
+                                     (px4_main_t)&run_trampoline,
+                                     (char *const *)argv);
+
+       if (_task_id < 0) {
+               _task_id = -1;
+               return -errno;
+       }
+
+       return 0;
+}
+
+MY_TASK1 *MY_TASK1::instantiate(int argc, char *argv[])
+{
+       int example_param = 0;
+       bool example_flag = false;
+       bool error_flag = false;
+
+       int myoptind = 1;
+       int ch;
+       const char *myoptarg = nullptr;
+
+       // parse CLI arguments
+       while ((ch = px4_getopt(argc, argv, "p:f", &myoptind, &myoptarg)) != EOF) {
+               switch (ch) {
+Section that describes the provided module functionality.
+               case 'p':
+                       example_param = (int)strtol(myoptarg, nullptr, 10);
+                       break;
+
+               case 'f':
+                       example_flag = true;
+                       break;
+
+               case '?':
+                       error_flag = true;
+                       break;
+
+               default:
+                       PX4_WARN("unrecognized flag");
+                       error_flag = true;
+                       break;
+               }
+       }
+
+       if (error_flag) {
+               return nullptr;
+       }
+
+       MY_TASK1 *instance = new MY_TASK1(example_param, example_flag);
+
+       if (instance == nullptr) {
+               PX4_ERR("alloc failed");
+       }
+
+       return instance;
+}
+
+
+MY_TASK1::MY_TASK1(int example_param, bool example_flag)
+       : ModuleParams(nullptr)
+{
+
+}
+
+
+
+void MY_TASK1::run()
+{
+
+       while (!should_exit()) {
+
+                _timeStamp = hrt_absolute_time();
+
+               publishMocapOdometry();
+
+       // for velocity determination
+
+/*             Tag::position_t pos = _ret.getposition(true);
+               old_x = pos.x;
+               old_y = pos.y;
+               old_z = pos.z;
+*/
+
+       }
+}
+
+
+
+void MY_TASK1::parameters_update(bool force)
+{
+       // check for parameter updates
+       if (_parameter_update_sub.updated() || force) {
+               // clear update
+               parameter_update_s update;
+               _parameter_update_sub.copy(&update);
+
+               // update parameters from storage
+Section that describes the provided module functionality.
+               updateParams();
+       }
+}
+
+int MY_TASK1::print_usage(const char *reason)
+{
+       if (reason) {
+               PX4_WARN("%s\n", reason);
+       }
+
+       PRINT_MODULE_DESCRIPTION(
+               R"DESCR_STR(
+### Description
+Section that describes the provided module functionality.
+
+This is a template for a module running as a task in the background with start/stop/status functionality.
+
+### Implementation
+Section describing the high-level implementation of this module.
+
+### Examples
+CLI usage example:
+$ module start -f -p 42
+
+)DESCR_STR");
+
+       PRINT_MODULE_USAGE_NAME("module", "template");
+       PRINT_MODULE_USAGE_COMMAND("start");
+       PRINT_MODULE_USAGE_PARAM_FLAG('f', "Optional example flag", true);
+       PRINT_MODULE_USAGE_PARAM_INT('p', 0, 0, 1000, "Optional example parameter", true);
+       PRINT_MODULE_USAGE_DEFAULT_COMMANDS();
+
+       return 0;
+}
+
+int MY_TASK1_main(int argc, char *argv[])
+{
+       return MY_TASK1::main(argc, argv);
+}
diff --git a/src/modules/my_task1/MY_TASK1.h b/src/modules/my_task1/MY_TASK1.h
new file mode 100644
index 0000000000..a7a30fd4bc
--- /dev/null
+++ b/src/modules/my_task1/MY_TASK1.h
@@ -0,0 +1,121 @@
+/****************************************************************************
+ *
+ *   Copyright (c) 2018 PX4 Development Team. All rights reserved.
+ *
+ * Redistribution and use in source and binary forms, with or without
+ * modification, are permitted provided that the following conditions
+ * are met:
+ *
+ * 1. Redistributions of source code must retain the above copyright
+ *    notice, this list of conditions and the following disclaimer.
+ * 2. Redistributions in binary form must reproduce the above copyright
+ *    notice, this list of conditions and the following disclaimer in
+ *    the documentation and/or other materials provided with the
+ *    distribution.
+ * 3. Neither the name PX4 nor the names of its contributors may be
+ *    used to endorse or promote products derived from this software
+ *    without specific prior written permission.
+ *
+ * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
+ * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
+ * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
+ * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
+ * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
+ * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
+ * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
+ * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
+ * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+ * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
+ * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
+ * POSSIBILITY OF SUCH DAMAGE.
+ *
+ ****************************************************************************/
+
+#pragma once
+
+#include <stdint.h>
+#include <drivers/drv_hrt.h>
+#include <modules/local_position_estimator/tag.hpp>
+
+#include <uORB/uORB.h>
+#include <uORB/Subscription.hpp>
+#include <uORB/SubscriptionInterval.hpp>
+#include <uORB/Publication.hpp>
+#include <uORB/topics/parameter_update.h>
+#include <uORB/topics/vehicle_odometry.h>
+#include <uORB/topics/vehicle_local_position.h>
+#include <uORB/topics/sensor_combined.h>
+#include <uORB/topics/sensor_combined.h>
+
+#include <px4_platform_common/module.h>
+#include <px4_platform_common/module_params.h>
+#include <px4_platform_common/getopt.h>
+#include <px4_platform_common/log.h>
+
+
+
+using namespace time_literals;
+
+extern "C" __EXPORT int MY_TASK1_main(int argc, char *argv[]);
+
+
+class MY_TASK1 : public ModuleBase<MY_TASK1>, public ModuleParams
+{
+public:
+
+       MY_TASK1(int example_param, bool example_flag);
+
+       virtual ~MY_TASK1() = default;
+
+       /** @see ModuleBase */
+       static int task_spawn(int argc, char *argv[]);
+
+       /** @see ModuleBase */
+       static MY_TASK1 *instantiate(int argc, char *argv[]);
+
+       /** @see ModuleBase */
+       static int custom_command(int argc, char *argv[]);
+
+       /** @see ModuleBase */
+       static int print_usage(const char *reason = nullptr);
+
+       /** @see ModuleBase::run() */
+       void run() override;
+
+       /** @see ModuleBase::print_status() */
+       int print_status() override;
+
+       void publishVisualOdometry();
+
+       void publishMocapOdometry();
+
+
+private:
+
+       Tag _ret;       // for recieving tag data
+
+       uint64_t _timeStamp;
+
+       /**
+        * Check for parameter changes and update them if needed.
+        * @param parameter_update_sub uorb subscription to parameter_update
+        * @param force for a parameter update
+        */
+       void parameters_update(bool force = false);
+
+       DEFINE_PARAMETERS(
+               (ParamInt<px4::params::SYS_AUTOSTART>) _param_sys_autostart,   /**< example parameter */
+               (ParamInt<px4::params::SYS_AUTOCONFIG>) _param_sys_autoconfig  /**< another parameter */
+       )
+
+       // Subscriptions
+       uORB::SubscriptionInterval _parameter_update_sub{ORB_ID(parameter_update), 1_s};
+       uORB::SubscriptionData<vehicle_odometry_s> _sub_visual_odom{ORB_ID(vehicle_visual_odometry)};
+       uORB::SubscriptionData<vehicle_odometry_s> _sub_mocap_odom{ORB_ID(vehicle_mocap_odometry)};
+       uORB::SubscriptionData<vehicle_odometry_s> _sub_odom{ORB_ID(vehicle_odometry)};
+
+       //publications
+       uORB::PublicationData<vehicle_odometry_s> _pub_visual_odom{ORB_ID(vehicle_visual_odometry)};
+       uORB::PublicationData<vehicle_odometry_s> _pub_mocap_odom{ORB_ID(vehicle_mocap_odometry)};
+
+};
(END)ro_kakuteh7mini
+const uint32_t busfrequency = 110000; // has to be higher than 100 Khz otherwise the device is too slow for the bus
+const uint16_t address = 0x37; // i2c adress of tag is actually 0x65 but gets bitshifted thus it becomes 0x37
+
+Tag::Tag():I2C(0xFF, mydevice, bus, address, busfrequency)
+{
+       this->init();
+}
+
+
+Tag::corr_pkg_t Tag::getposition(bool NED = false)
+{
+       int pos = this->transfer(nullptr,0,buf,len);
+       memcpy(&payload,buf,26);
+
+       if (pos == PX4_OK && NED == false)
+       {
+               position.x = payload.x;
+               position.y = payload.y;
+               position.z = payload.z;
+       }
+
+       //moving the origin and transform the tdoa system into a North East Down (NED) frame meaning
+       //x should increase when moving forward (north)
+       //y should increase when moving to the right (east)
+       //z should decrease when moving up (down)
+
+       else if (pos == PX4_OK && NED == true)
+       {
+               position.x = payload.y - float(1.75);
+               position.y = payload.x - float(2.01);
+               position.z = -payload.z + float(0.2);
+       }
+
+       return position;
+}
diff --git a/src/modules/local_position_estimator/tag.hpp b/src/modules/local_position_estimator/tag.hpp
new file mode 100644
index 0000000000..77c3644c4b
--- /dev/null
+++ b/src/modules/local_position_estimator/tag.hpp
@@ -0,0 +1,41 @@
+#pragma once
+#include <drivers/device/i2c.h>
+
+class Tag: public device::I2C
+{
+
+public:
+
+       Tag();
+
+       typedef struct __attribute__((packed)) {
+
+       /** The x-coordinate in m */
+       float x;
+       /** The y-coordinate in m */
+       float y;
+       /** The z-coordinate in m */
+       float z;
+
+       /** The target x-coordinate in m */
+       float targetX;
+       /** The target y-coordinate in m */
+       float targetY;
+       /** The target z-coordinate in m */
+       float targetZ;
+
+       uint16_t crc16;
+
+       } corr_pkg_t;
+
+       corr_pkg_t getposition(bool NED);
+
+private:
+
+       corr_pkg_t position;    // for reading sensor
+       corr_pkg_t payload;
+       uint8_t len = 26;
+       uint8_t buf[26];
+
+};
+
diff --git a/src/modules/my_task1/CMakeLists.txt b/src/modules/my_task1/CMakeLists.txt
new file mode 100644
index 0000000000..a221d43b56
--- /dev/null
+++ b/src/modules/my_task1/CMakeLists.txt
@@ -0,0 +1,40 @@
+############################################################################
+#
+#   Copyright (c) 2018 PX4 Development Team. All rights reserved.
+#
+# Redistribution and use in source and binary forms, with or without
+# modification, are permitted provided that the following conditions
+# are met:
+#
+# 1. Redistributions of source code must retain the above copyright
+#    notice, this list of conditions and the following disclaimer.
+# 2. Redistributions in binary form must reproduce the above copyright
+#    notice, this list of conditions and the following disclaimer in
+#    the documentation and/or other materials provided with the
+#    distribution.
+# 3. Neither the name PX4 nor the names of its contributors may be
+#    used to endorse or promote products derived from this software
+#    without specific prior written permission.
+#
+# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
+# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
+# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
+# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
+# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
+# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
+# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
+# OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
+# AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
+# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
+# POSSIBILITY OF SUCH DAMAGE.
+#
+############################################################################
+
+px4_add_module(
+       MODULE modules__MY_TASK1
+       MAIN MY_TASK1
+       SRCS
+               MY_TASK1.cpp
+       )
+
diff --git a/src/modules/my_task1/Kconfig b/src/modules/my_task1/Kconfig
new file mode 100644
index 0000000000..dd49b380c0
--- /dev/null
+++ b/src/modules/my_task1/Kconfig
@@ -0,0 +1,5 @@
+menuconfig MODULES_MY_TASK1
+       bool "MY_TASK1"
+       default n
+       ---help---
+               Enable support for MY_TASK1
diff --git a/src/modules/my_task1/MY_TASK1.cpp b/src/modules/my_task1/MY_TASK1.cpp
new file mode 100644
index 0000000000..f7a86b9995
--- /dev/null
+++ b/src/modules/my_task1/MY_TASK1.cpp
@@ -0,0 +1,248 @@
+/****************************************************************************
+ *
+ *   Copyright (c) 2018 PX4 Development Team. All rights reserved.
+ *
+ * Redistribution and use in source and binary forms, with or without
+ * modification, are permitted provided that the following conditions
+ * are met:
+ *
+ * 1. Redistributions of source code must retain the above copyright
+ *    notice, this list of conditions and the following disclaimer.
+ * 2. Redistributions in binary form must reproduce the above copyright
+ *    notice, this list of conditions and the following disclaimer in
+ *    the documentation and/or other materials provided with the
+ *    distribution.
+ * 3. Neither the name PX4 nor the names of its contributors may be
+ *    used to endorse or promote products derived from this software
+ *    without specific prior written permission.
+ *
+ * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
+ * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
+ * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
+ * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
+ * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
+ * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
+ * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
+ * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
+ * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+ * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
+ * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
+ * POSSIBILITY OF SUCH DAMAGE.
+ *
+ ****************************************************************************/
+#define DEBUG_BUILD    // stop and restart task (if enabled by default) to see debug output
+#include "MY_TASK1.h"
+
+
+using namespace device;
+
+void MY_TASK1::publishMocapOdometry()
+{
+       _pub_mocap_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_mocap_odom.get().position[0] = pos.x;
+       _pub_mocap_odom.get().position[1] = pos.y;
+       _pub_mocap_odom.get().position[2] = pos.z;
+
+       _pub_mocap_odom.get().timestamp = hrt_absolute_time();
+       _pub_mocap_odom.update();
+}
+
+void MY_TASK1::publishVisualOdometry()
+{
+       _pub_visual_odom.get().timestamp_sample = _timeStamp;
+
+       Tag::corr_pkg_t pos = _ret.getposition(true);
+       _pub_visual_odom.get().position[0] = pos.x;
+       _pub_visual_odom.get().position[1] = pos.y;
+       _pub_visual_odom.get().position[2] = pos.z;
+       _pub_visual_odom.update();
+
+       // one method for determining velocity
+/*
+       float dt = (hrt_absolute_time() - _timeStamp) / 1.0e6f;
+       float vx = (old_x - pos.x)/dt;
+       float vy = (old_y - pos.y)/dt;
+       float vz = (old_z - pos.z)/dt;
+
+       _pub_visual_odom.get().velocity[0] = vx;
+       _pub_visual_odom.get().velocity[1] = vy;
+       _pub_visual_odom.get().velocity[2] = vz;
+
+*/
+       _pub_visual_odom.get().timestamp = hrt_absolute_time();
+       _pub_visual_odom.update();
+}
+
+int MY_TASK1::print_status()
+{
+       PX4_INFO("Running");
+       // TODO: print additional runtime information about the state of the module
+
+       return 0;
+}
+
+int MY_TASK1::custom_command(int argc, char *argv[])
+{
+       PX4_INFO("costum command of MY_TASK1");
+       /*
+       if (!is_running()) {
+               print_usage("not running");
+               return 1;
+       }
+
+       // additional custom commands can be handled like this:
+       if (!strcmp(argv[0], "do-something")) {
+               get_instance()->do_something();
+               return 0;
+       }
+        */
+
+       return print_usage("unknown command");
+}
+
+
+int MY_TASK1::task_spawn(int argc, char *argv[])
+{
+       _task_id = px4_task_spawn_cmd("MY_TASK1",
+                                     SCHED_DEFAULT,
+                                     SCHED_PRIORITY_DEFAULT,
+                                     1024,
+                                     (px4_main_t)&run_trampoline,
+                                     (char *const *)argv);
+
+       if (_task_id < 0) {
+               _task_id = -1;
+               return -errno;
+       }
+
+       return 0;
+}
+
+MY_TASK1 *MY_TASK1::instantiate(int argc, char *argv[])
+{
+       int example_param = 0;
+       bool example_flag = false;
+       bool error_flag = false;
+
+       int myoptind = 1;
+       int ch;
+       const char *myoptarg = nullptr;
+
+       // parse CLI arguments
+       while ((ch = px4_getopt(argc, argv, "p:f", &myoptind, &myoptarg)) != EOF) {
+               switch (ch) {
+Section that describes the provided module functionality.
+               case 'p':
+                       example_param = (int)strtol(myoptarg, nullptr, 10);
+                       break;
+
+               case 'f':
+                       example_flag = true;
+                       break;
+
+               case '?':
+                       error_flag = true;
+                       break;
+
+               default:
+                       PX4_WARN("unrecognized flag");
+                       error_flag = true;
+                       break;
+               }
+       }
+
+       if (error_flag) {
+               return nullptr;
+       }
+
+       MY_TASK1 *instance = new MY_TASK1(example_param, example_flag);
+
+       if (instance == nullptr) {
+               PX4_ERR("alloc failed");
+       }
+
+       return instance;
+}
+
+
+MY_TASK1::MY_TASK1(int example_param, bool example_flag)
+       : ModuleParams(nullptr)
+{
+
+}
+
+
+
+void MY_TASK1::run()
+{
+
+       while (!should_exit()) {
+
+                _timeStamp = hrt_absolute_time();
+
+               publishMocapOdometry();
+
+       // for velocity determination
+
+/*             Tag::position_t pos = _ret.getposition(true);
+               old_x = pos.x;
+               old_y = pos.y;
+               old_z = pos.z;
+*/
+
+       }
+}
+
+
+
+void MY_TASK1::parameters_update(bool force)
+{
+       // check for parameter updates
+       if (_parameter_update_sub.updated() || force) {
+               // clear update
+               parameter_update_s update;
+               _parameter_update_sub.copy(&update);
+
+               // update parameters from storage
+Section that describes the provided module functionality.
+               updateParams();
+       }
+}
+
+int MY_TASK1::print_usage(const char *reason)
+{
+       if (reason) {
+               PX4_WARN("%s\n", reason);
+       }
+
+       PRINT_MODULE_DESCRIPTION(
+               R"DESCR_STR(
+### Description
+Section that describes the provided module functionality.
+
+This is a template for a module running as a task in the background with start/stop/status functionality.
+
+### Implementation
+Section describing the high-level implementation of this module.
+
+### Examples
+CLI usage example:
+$ module start -f -p 42
+
+)DESCR_STR");
+
+       PRINT_MODULE_USAGE_NAME("module", "template");
+       PRINT_MODULE_USAGE_COMMAND("start");
+       PRINT_MODULE_USAGE_PARAM_FLAG('f', "Optional example flag", true);
+       PRINT_MODULE_USAGE_PARAM_INT('p', 0, 0, 1000, "Optional example parameter", true);
+       PRINT_MODULE_USAGE_DEFAULT_COMMANDS();
+
+       return 0;
+}
+
+int MY_TASK1_main(int argc, char *argv[])
+{
+       return MY_TASK1::main(argc, argv);
+}
diff --git a/src/modules/my_task1/MY_TASK1.h b/src/modules/my_task1/MY_TASK1.h
new file mode 100644
index 0000000000..a7a30fd4bc
--- /dev/null
+++ b/src/modules/my_task1/MY_TASK1.h
@@ -0,0 +1,121 @@
+/****************************************************************************
+ *
+ *   Copyright (c) 2018 PX4 Development Team. All rights reserved.
+ *
+ * Redistribution and use in source and binary forms, with or without
+ * modification, are permitted provided that the following conditions
+ * are met:
+ *
+ * 1. Redistributions of source code must retain the above copyright
+ *    notice, this list of conditions and the following disclaimer.
+ * 2. Redistributions in binary form must reproduce the above copyright
+ *    notice, this list of conditions and the following disclaimer in
+ *    the documentation and/or other materials provided with the
+ *    distribution.
+ * 3. Neither the name PX4 nor the names of its contributors may be
+ *    used to endorse or promote products derived from this software
+ *    without specific prior written permission.
+ *
+ * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
+ * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
+ * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
+ * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
+ * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
+ * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
+ * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
+ * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
+ * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+ * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
+ * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
+ * POSSIBILITY OF SUCH DAMAGE.
+ *
+ ****************************************************************************/
+
+#pragma once
+
+#include <stdint.h>
+#include <drivers/drv_hrt.h>
+#include <modules/local_position_estimator/tag.hpp>
+
+#include <uORB/uORB.h>
+#include <uORB/Subscription.hpp>
+#include <uORB/SubscriptionInterval.hpp>
+#include <uORB/Publication.hpp>
+#include <uORB/topics/parameter_update.h>
+#include <uORB/topics/vehicle_odometry.h>
+#include <uORB/topics/vehicle_local_position.h>
+#include <uORB/topics/sensor_combined.h>
+#include <uORB/topics/sensor_combined.h>
+
+#include <px4_platform_common/module.h>
+#include <px4_platform_common/module_params.h>
+#include <px4_platform_common/getopt.h>
+#include <px4_platform_common/log.h>
+
+
+
+using namespace time_literals;
+
+extern "C" __EXPORT int MY_TASK1_main(int argc, char *argv[]);
+
+
+class MY_TASK1 : public ModuleBase<MY_TASK1>, public ModuleParams
+{
+public:
+
+       MY_TASK1(int example_param, bool example_flag);
+
+       virtual ~MY_TASK1() = default;
+
+       /** @see ModuleBase */
+       static int task_spawn(int argc, char *argv[]);
+
+       /** @see ModuleBase */
+       static MY_TASK1 *instantiate(int argc, char *argv[]);
+
+       /** @see ModuleBase */
+       static int custom_command(int argc, char *argv[]);
+
+       /** @see ModuleBase */
+       static int print_usage(const char *reason = nullptr);
+
+       /** @see ModuleBase::run() */
+       void run() override;
+
+       /** @see ModuleBase::print_status() */
+       int print_status() override;
+
+       void publishVisualOdometry();
+
+       void publishMocapOdometry();
+
+
+private:
+
+       Tag _ret;       // for recieving tag data
+
+       uint64_t _timeStamp;
+
+       /**
+        * Check for parameter changes and update them if needed.
+        * @param parameter_update_sub uorb subscription to parameter_update
+        * @param force for a parameter update
+        */
+       void parameters_update(bool force = false);
+
+       DEFINE_PARAMETERS(
+               (ParamInt<px4::params::SYS_AUTOSTART>) _param_sys_autostart,   /**< example parameter */
+               (ParamInt<px4::params::SYS_AUTOCONFIG>) _param_sys_autoconfig  /**< another parameter */
+       )
+
+       // Subscriptions
+       uORB::SubscriptionInterval _parameter_update_sub{ORB_ID(parameter_update), 1_s};
+       uORB::SubscriptionData<vehicle_odometry_s> _sub_visual_odom{ORB_ID(vehicle_visual_odometry)};
+       uORB::SubscriptionData<vehicle_odometry_s> _sub_mocap_odom{ORB_ID(vehicle_mocap_odometry)};
+       uORB::SubscriptionData<vehicle_odometry_s> _sub_odom{ORB_ID(vehicle_odometry)};
+
+       //publications
+       uORB::PublicationData<vehicle_odometry_s> _pub_visual_odom{ORB_ID(vehicle_visual_odometry)};
+       uORB::PublicationData<vehicle_odometry_s> _pub_mocap_odom{ORB_ID(vehicle_mocap_odometry)};
+
+};
(END)e and binary forms, with or without
+ * modification, are permitted provided that the following conditions
+ * are met:
+ *
+ * 1. Redistributions of source code must retain the above copyright
+ *    notice, this list of conditions and the following disclaimer.
+ * 2. Redistributions in binary form must reproduce the above copyright
+ *    notice, this list of conditions and the following disclaimer in
+ *    the documentation and/or other materials provided with the
+ *    distribution.
+ * 3. Neither the name PX4 nor the names of its contributors may be
+ *    used to endorse or promote products derived from this software
+ *    without specific prior written permission.
+ *
+ * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
+ * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
+ * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
+ * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
+ * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
+ * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
+ * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
+ * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
+ * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+ * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
+ * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
+ * POSSIBILITY OF SUCH DAMAGE.
+ *
+ ****************************************************************************/
+
+#pragma once
+
+#include <stdint.h>
+#include <drivers/drv_hrt.h>
+#include <modules/local_position_estimator/tag.hpp>
+
+#include <uORB/uORB.h>
+#include <uORB/Subscription.hpp>
+#include <uORB/SubscriptionInterval.hpp>
+#include <uORB/Publication.hpp>
+#include <uORB/topics/parameter_update.h>
+#include <uORB/topics/vehicle_odometry.h>
+#include <uORB/topics/vehicle_local_position.h>
+#include <uORB/topics/sensor_combined.h>
+#include <uORB/topics/sensor_combined.h>
+
+#include <px4_platform_common/module.h>
+#include <px4_platform_common/module_params.h>
+#include <px4_platform_common/getopt.h>
+#include <px4_platform_common/log.h>
+
+
+
+using namespace time_literals;
+
+extern "C" __EXPORT int MY_TASK1_main(int argc, char *argv[]);
+
+
+class MY_TASK1 : public ModuleBase<MY_TASK1>, public ModuleParams
+{
+public:
+
+       MY_TASK1(int example_param, bool example_flag);
+
+       virtual ~MY_TASK1() = default;
+
+       /** @see ModuleBase */
+       static int task_spawn(int argc, char *argv[]);
+
+       /** @see ModuleBase */
+       static MY_TASK1 *instantiate(int argc, char *argv[]);
+
+       /** @see ModuleBase */
+       static int custom_command(int argc, char *argv[]);
+
+       /** @see ModuleBase */
+       static int print_usage(const char *reason = nullptr);
+
+       /** @see ModuleBase::run() */
+       void run() override;
+
+       /** @see ModuleBase::print_status() */
+       int print_status() override;
+
+       void publishVisualOdometry();
+
+       void publishMocapOdometry();
+
+
+private:
+
+       Tag _ret;       // for recieving tag data
+
+       uint64_t _timeStamp;
+
+       /**
+        * Check for parameter changes and update them if needed.
+        * @param parameter_update_sub uorb subscription to parameter_update
+        * @param force for a parameter update
+        */
+       void parameters_update(bool force = false);
+
+       DEFINE_PARAMETERS(
+               (ParamInt<px4::params::SYS_AUTOSTART>) _param_sys_autostart,   /**< example parameter */
+               (ParamInt<px4::params::SYS_AUTOCONFIG>) _param_sys_autoconfig  /**< another parameter */
+       )
+
+       // Subscriptions
+       uORB::SubscriptionInterval _parameter_update_sub{ORB_ID(parameter_update), 1_s};
+       uORB::SubscriptionData<vehicle_odometry_s> _sub_visual_odom{ORB_ID(vehicle_visual_odometry)};
+       uORB::SubscriptionData<vehicle_odometry_s> _sub_mocap_odom{ORB_ID(vehicle_mocap_odometry)};
+       uORB::SubscriptionData<vehicle_odometry_s> _sub_odom{ORB_ID(vehicle_odometry)};
+
+       //publications
+       uORB::PublicationData<vehicle_odometry_s> _pub_visual_odom{ORB_ID(vehicle_visual_odometry)};
+       uORB::PublicationData<vehicle_odometry_s> _pub_mocap_odom{ORB_ID(vehicle_mocap_odometry)};
+
+};
(END)
