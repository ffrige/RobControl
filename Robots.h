#ifndef ROBOTS_H
#define ROBOTS_H

#include <math.h>
#include "RobControl.h"
#include "trig.h"
#include "Frame.h"
#include "Misc.h"
#include "constants.h"

/* Declaration of direct and inverse transformations for all kinds of supported robots */

//6-Axis Robot
unsigned short ArmDirect(Link_Type Links[6], double JointAxes[6], double PathAxes[6], double Axes[6]);
unsigned short ArmInverse(Link_Type Links[6], double PathAxes[6], double JointAxes[6], double Axes[6]);
unsigned short ArmWireFrame(Link_Type Links[6], double JointAxes[6], Frame_Type WireFrame[8]);

//UR Robot
unsigned short URDirect(Link_Type Links[6], double JointAxes[6], double PathAxes[6], double Axes[6]);
unsigned short URInverse(Link_Type Links[6], double PathAxes[6], double JointAxes[6], double Axes[6]);
unsigned short URWireFrame(Link_Type Links[6], double JointAxes[6], Frame_Type WireFrame[8]);

//5-Axis RTCP
unsigned short RTCP_Direct(Link_Type Links[6], double JointAxes[6], double PathAxes[6], double Axes[6]);
unsigned short RTCP_Inverse(Link_Type Links[6], double PathAxes[6], double JointAxes[6], double Axes[6]);
unsigned short RTCPWireFrame(Link_Type Links[6], double JointAxes[6], Frame_Type WireFrame[8]);

//Scara Robot
unsigned short ScaraDirect(Link_Type Links[6], double JointAxes[6], double PathAxes[6], double Axes[6]);
unsigned short ScaraInverse(Link_Type Links[6], double PathAxes[6], double JointAxes[6], double Axes[6]);
unsigned short ScaraWireFrame(Link_Type Links[6], double JointAxes[6], Frame_Type WireFrame[8]);

//Delta Robot
unsigned short DeltaDirect(Link_Type Links[6], double JointAxes[6], double PathAxes[6], double Axes[6]);
unsigned short DeltaInverse(Link_Type Links[6], double PathAxes[6], double JointAxes[6], double Axes[6]);
unsigned short DeltaWireFrame(Link_Type Links[6], double JointAxes[6], Frame_Type WireFrame[8]);

//Pallet Robot
unsigned short PalletDirect(Link_Type Links[6], double JointAxes[6], double PathAxes[6], double Axes[6]);
unsigned short PalletInverse(Link_Type Links[6], double PathAxes[6], double JointAxes[6], double Axes[6]);
unsigned short PalletWireFrame(Link_Type Links[6], double JointAxes[6], Frame_Type WireFrame[8]);

#endif
