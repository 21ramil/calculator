#ifndef DOIT_H
#define DOIT_H

#ifdef __cplusplus
extern "C"
{
#endif

double __declspec(dllexport) DoIt (int TypeWork, double OperandA, double OperandB, int& ErrorCode);

#ifdef __cplusplus
}
#endif

#endif // DOIT_H
