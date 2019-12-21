#include <stdio.h>

#include "mmath.h"

int main()
{
    printf("SQRT(100.0) = %f\n",         m_sqrtf(100.0f));
    printf("INVSQRT(100.0) = %f\n",      m_invsqrtf(100.0f));
    printf("MIN(0, 100) = %d\n",         m_MIN(0, 100));
    printf("MAX(0, 100) = %d\n",         m_MAX(0, 100));
    printf("CLAMP(100, 50, -50) = %d\n", m_CLAMP(100, 50, -50));

    return 0;
}