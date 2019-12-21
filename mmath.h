#ifndef M_MATH_H
#define M_MATH_H

/**
 * @brief Fast approximate square root
 */
float m_sqrtf(float number);
/**
 * @brief Fast approximate inverse square root
 * @link  https://en.wikipedia.org/wiki/Fast_inverse_square_root
 */
float m_invsqrtf(float number);

#define m_CLAMP(Number, Max, Min) (((Number) > (Max)) ? (Max) : (((Number) < (Min)) ? (Min) : (Number)))
#define m_MIN(Number1, Number2) (((Number1) < (Number2)) ? (Number1) : (Number2))
#define m_MAX(Number1, Number2) (((Number1) > (Number2)) ? (Number1) : (Number2))

#endif /* M_MATH_H */