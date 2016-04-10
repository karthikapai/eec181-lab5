/* 
 * File: _coder_lab5_api.h 
 *  
 * MATLAB Coder version            : 2.6 
 * C/C++ source code generated on  : 28-Mar-2016 23:53:59 
 */

#ifndef ___CODER_LAB5_API_H__
#define ___CODER_LAB5_API_H__
/* Include files */
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Function Declarations */
extern void lab5_initialize(emlrtContext *aContext);
extern void lab5_terminate(void);
extern void lab5_atexit(void);
extern void lab5_api(const mxArray *prhs[7], const mxArray *plhs[1]);
extern double lab5(double testData[7840000], double testLabels[10000], double finalB1L1[200], double finalB1L2[200], double finalW1L1[156800], double finalW1L2[40000], double finalSoftmaxTheta[2000]);
extern void lab5_xil_terminate(void);

#endif
/* 
 * File trailer for _coder_lab5_api.h 
 *  
 * [EOF] 
 */
