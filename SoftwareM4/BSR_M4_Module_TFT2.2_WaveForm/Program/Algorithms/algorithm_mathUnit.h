/* #include "algorithm_mathUnit.h" */

#ifndef __ALGORITHM_MATHUNIt_H
#define __ALGORITHM_MATHUNIt_H

#include "stm32f30x.h"
#include "math.h"
#include "arm_math.h"
/*====================================================================================================*/
/*====================================================================================================*/
#define invSqrtf( iSq ) (1.0f/sqrtf((float)iSq))
#define squa( Sq )      (((float)Sq)*((float)Sq))
#define toRad( Math_D )	((float)(Math_D)*0.0174532925f)
#define toDeg( Math_R )	((float)(Math_R)*57.2957795f)
/*====================================================================================================*/
/*====================================================================================================*/
#endif
