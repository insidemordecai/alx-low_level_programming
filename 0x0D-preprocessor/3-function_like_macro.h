#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * a function-like macro ABS(x)
 * that computes the absolute value of a number x.
 * @x: value to be computed
 */

#define ABS(x) ((x) < 0 ? (-x) : (x))
#endif
