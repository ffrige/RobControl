# RobControl #
---
A simple C library to control industrial robots.

![RobotControl V1.8](/robot.png)

## Main features ##
- Kinematic models: 3ax Cartesian, 4ax SCARA, 4ax Delta, 4ax Palletizer, 5ax RTCP, 6ax articulated robot, 6ax Universal Robot
- Manual jogging of axes in joint, base and tool coordinate system
- Automatic run of NC programs and streamed block lists with path-blending
- PTP and interpolated movements (lines, circles, cubic splines)
- Edge rounding between interpolated movements
- Time-optimal trajectory generator
- Compensations for tools and frames
- Conveyor tracking
- External real-time path corrections
- M-functions for PLC synchronization
- Control of user-defined kinematics
- Cartesian and angular feedrate definition
- Workspace monitor (position and orientation)
- Collision detection (with own body and with other robots)
- Single-step mode
- Execution of nested subroutines
- Tangential axis
- Auxiliary axes
- Automatic tool and frame calibration


## Documentation ##
See [UserManual.pdf](https://github.com/ffrige/RobControl/blob/master/RobotControl%20-%20User%20Manual.pdf "UserManual") for details.