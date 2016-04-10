/*
 * File: lab5.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Mar-2016 23:53:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "lab5.h"

/* Function Definitions */

/*
 * Arguments    : const double testData[7840000]
 *                const double testLabels[10000]
 *                const double finalB1L1[200]
 *                const double finalB1L2[200]
 *                const double finalW1L1[156800]
 *                const double finalW1L2[40000]
 *                const double finalSoftmaxTheta[2000]
 * Return Type  : double
 */
double lab5(const double testData[784*10000], const double testLabels[10000],      //these are the inputs
            const double finalB1L1[200], const double finalB1L2[200], const
            double finalW1L1[200*784], const double finalW1L2[200*200], const
            double finalSoftmaxTheta[10*200])
{
  signed char solved[10000];
  int x;
  double Z1[200];
  int i;
  double correct;
  int i0;
  double Z2[200];
  int b_index;
  double Z3[10];


  for (x = 0; x < 10000; x++) {
 
    for (i = 0; i < 200; i++) {
      correct = 0.0;
      for (i0 = 0; i0 < 784; i0++) {
        correct += finalW1L1[i + 200 * i0] * testData[i0 + 784 * x];  //node[1] = img[1]*w[0] + img[2]*w[200] + img[3]*w[400] +...
      }																  //node[2] = img[1]*w[200] + ....

      Z1[i] = correct + finalB1L1[i];								// node[1] = node[1] + bias[1]
    }

    for (i = 0; i < 200; i++) {
      Z1[i] = 1.0 / (1.0 + exp(-Z1[i]));
    }

    for (i = 0; i < 200; i++) {
      correct = 0.0;
      for (i0 = 0; i0 < 200; i0++) {
        correct += finalW1L2[i + 200 * i0] * Z1[i0];
      }

      Z2[i] = correct + finalB1L2[i];
    }

    for (i = 0; i < 200; i++) {
      Z2[i] = 1.0 / (1.0 + exp(-Z2[i]));
    }

    index = 0;
    max = -1.0E+6;
    for (i = 0; i < 10; i++) {
      Z3[i] = 0.0;
      for (i0 = 0; i0 < 200; i0++) {
        Z3[i] += finalSoftmaxTheta[i + 10 * i0] * Z2[i0];
      }

      if (Z3[i] > max) {
        max = Z3[i];
        index = i + 1;
      }
    }

    solved[x] = (signed char)index;
  }

  correct = 0.0;
  for (i = 0; i < 10000; i++) {
    if (testLabels[i] == solved[i]) {
      correct++;
    }
  }

  return correct / 10000.0;
}

/*
 * File trailer for lab5.c
 *
 * [EOF]
 */
