/*
 * File: _coder_lab5_api.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Mar-2016 23:53:59
 */

/* Include files */
#include "_coder_lab5_api.h"

/* Function Declarations */
static double (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *testData,
  const char *identifier))[7840000];
static double (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[7840000];
static double (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *testLabels, const char *identifier))[10000];
static double (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[10000];
static double (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *finalB1L1, const char *identifier))[200];
static double (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[200];
static double (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *finalW1L1, const char *identifier))[156800];
static double (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[156800];
static double (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *finalW1L2, const char *identifier))[40000];
static double (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[40000];
static double (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *finalSoftmaxTheta, const char *identifier))[2000];
static double (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2000];
static const mxArray *emlrt_marshallOut(const double u);
static double (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[7840000];
static double (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[10000];
static double (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[200];
static double (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[156800];
static double (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[40000];
static double (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2000];

/* Function Definitions */

/*
 * Arguments    : emlrtContext *aContext
 * Return Type  : void
 */
void lab5_initialize(emlrtContext *aContext)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void lab5_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void lab5_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  lab5_xil_terminate();
}

/*
 * Arguments    : const mxArray *prhs[7]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void lab5_api(const mxArray *prhs[7], const mxArray *plhs[1])
{
  double (*testData)[7840000];
  double (*testLabels)[10000];
  double (*finalB1L1)[200];
  double (*finalB1L2)[200];
  double (*finalW1L1)[156800];
  double (*finalW1L2)[40000];
  double (*finalSoftmaxTheta)[2000];
  double accuracy;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs[1] = emlrtProtectR2012b(prhs[1], 1, false, -1);
  prhs[2] = emlrtProtectR2012b(prhs[2], 2, false, -1);
  prhs[3] = emlrtProtectR2012b(prhs[3], 3, false, -1);
  prhs[4] = emlrtProtectR2012b(prhs[4], 4, false, -1);
  prhs[5] = emlrtProtectR2012b(prhs[5], 5, false, -1);
  prhs[6] = emlrtProtectR2012b(prhs[6], 6, false, -1);

  /* Marshall function inputs */
  testData = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "testData");
  testLabels = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "testLabels");
  finalB1L1 = e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "finalB1L1");
  finalB1L2 = e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "finalB1L2");
  finalW1L1 = g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "finalW1L1");
  finalW1L2 = i_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "finalW1L2");
  finalSoftmaxTheta = k_emlrt_marshallIn(&st, emlrtAlias(prhs[6]),
    "finalSoftmaxTheta");

  /* Invoke the target function */
  accuracy = lab5(*testData, *testLabels, *finalB1L1, *finalB1L2, *finalW1L1,
                  *finalW1L2, *finalSoftmaxTheta);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(accuracy);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *testData
 *                const char *identifier
 * Return Type  : double (*)[7840000]
 */
static double (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *testData,
  const char *identifier))[7840000]
{
  double (*y)[7840000];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(testData), &thisId);
  emlrtDestroyArray(&testData);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : double (*)[7840000]
 */
  static double (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[7840000]
{
  double (*y)[7840000];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *testLabels
 *                const char *identifier
 * Return Type  : double (*)[10000]
 */
static double (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *testLabels, const char *identifier))[10000]
{
  double (*y)[10000];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(testLabels), &thisId);
  emlrtDestroyArray(&testLabels);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : double (*)[10000]
 */
  static double (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[10000]
{
  double (*y)[10000];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *finalB1L1
 *                const char *identifier
 * Return Type  : double (*)[200]
 */
static double (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *finalB1L1, const char *identifier))[200]
{
  double (*y)[200];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(sp, emlrtAlias(finalB1L1), &thisId);
  emlrtDestroyArray(&finalB1L1);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : double (*)[200]
 */
  static double (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[200]
{
  double (*y)[200];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *finalW1L1
 *                const char *identifier
 * Return Type  : double (*)[156800]
 */
static double (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *finalW1L1, const char *identifier))[156800]
{
  double (*y)[156800];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = h_emlrt_marshallIn(sp, emlrtAlias(finalW1L1), &thisId);
  emlrtDestroyArray(&finalW1L1);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : double (*)[156800]
 */
  static double (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[156800]
{
  double (*y)[156800];
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *finalW1L2
 *                const char *identifier
 * Return Type  : double (*)[40000]
 */
static double (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *finalW1L2, const char *identifier))[40000]
{
  double (*y)[40000];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = j_emlrt_marshallIn(sp, emlrtAlias(finalW1L2), &thisId);
  emlrtDestroyArray(&finalW1L2);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : double (*)[40000]
 */
  static double (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[40000]
{
  double (*y)[40000];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *finalSoftmaxTheta
 *                const char *identifier
 * Return Type  : double (*)[2000]
 */
static double (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *finalSoftmaxTheta, const char *identifier))[2000]
{
  double (*y)[2000];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = l_emlrt_marshallIn(sp, emlrtAlias(finalSoftmaxTheta), &thisId);
  emlrtDestroyArray(&finalSoftmaxTheta);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : double (*)[2000]
 */
  static double (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2000]
{
  double (*y)[2000];
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const double u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const double u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : double (*)[7840000]
 */
static double (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[7840000]
{
  double (*ret)[7840000];
  int iv0[2];
  int i0;
  for (i0 = 0; i0 < 2; i0++) {
    iv0[i0] = 784 + 9216 * i0;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv0);
  ret = (double (*)[7840000])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : double (*)[10000]
 */
  static double (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[10000]
{
  double (*ret)[10000];
  int iv1[1];
  iv1[0] = 10000;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, iv1);
  ret = (double (*)[10000])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : double (*)[200]
 */
static double (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[200]
{
  double (*ret)[200];
  int iv2[1];
  iv2[0] = 200;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, iv2);
  ret = (double (*)[200])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : double (*)[156800]
 */
  static double (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[156800]
{
  double (*ret)[156800];
  int iv3[2];
  int i1;
  for (i1 = 0; i1 < 2; i1++) {
    iv3[i1] = 200 + 584 * i1;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv3);
  ret = (double (*)[156800])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : double (*)[40000]
 */
static double (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[40000]
{
  double (*ret)[40000];
  int iv4[2];
  int i;
  for (i = 0; i < 2; i++) {
    iv4[i] = 200;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv4);
  ret = (double (*)[40000])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : double (*)[2000]
 */
  static double (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2000]
{
  double (*ret)[2000];
  int iv5[2];
  int i2;
  for (i2 = 0; i2 < 2; i2++) {
    iv5[i2] = 10 + 190 * i2;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv5);
  ret = (double (*)[2000])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * File trailer for _coder_lab5_api.c
 *
 * [EOF]
 */
