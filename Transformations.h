#ifndef TRF_H
#define TRF_H

#include <math.h>
#include "Robots.h"
#include "Misc.h"

/* Declaration of generic transformations function interface */

unsigned short Transformations(struct Mech_Type* Mechanics, unsigned char Mode, double JointAxes[6], double PathAxes[6], double Axes[6]);

unsigned short Wireframe(struct Mech_Type* Mechanics, double JointAxes[6], Frame_Type WireframePoints[8]);

#endif

