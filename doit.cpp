#include "doit.h"
#include "stdexcept"
#include "float.h"

double DoIt (int TypeWork, double OperandA, double OperandB, int& ErrorCode)
{
    double result = std::numeric_limits<double>::quiet_NaN();

    if ( TypeWork > 3 || TypeWork < 0)
    {
        ErrorCode = 1;
        return result;
    }
    else
    {
        try
        {
            if (TypeWork == 0)
            {
                ErrorCode = 0;
                result = OperandA + OperandB;
            }
            else if (TypeWork == 1)
            {
                ErrorCode = 0;
                result = OperandA - OperandB;
            }
            else if (TypeWork == 2)
            {
                if ( fabs (OperandB) < DBL_EPSILON )
                {
                    ErrorCode = 2;
                }
                else
                {
                    ErrorCode = 0;
                    result = OperandA / OperandB;
                }
            }
            else if (TypeWork == 3)
            {
                ErrorCode = 0;
                result = OperandA * OperandB;
            }
        }
        catch ( ... )
        {
            ErrorCode = 3;
            return result;
        }
    }

    return result;
}
