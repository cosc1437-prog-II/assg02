/** @file primes.cpp
 *
 * @brief Implementation file for Assignment 02: Basic Elements of C/C++
 *
 * @author Jane Programmer
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @note   assg : Assignment 02: Basic Elements and Selection Control
 * @date   August 28, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */
#include <iostream>
using namespace std;

/** @brief Calculate volume of football
 *
 * Calculate and return the volume of a football (technically a
 * oblate spheroid). We are given the short axis (a) and the long
 * axis (b) of the football.  Volume of such a oblate spheroid is calculated
 * using the formula:
 *
 *     volume = 4/3 pi a^2 b
 *
 * @param shortAxis A double value which is 1/2 the length of the short axis of the
 *    football (e.g. the radius of the short axis) we want to calculate the area of.
 * @param longAxis A double value which is 1/2 the length of the long axis.
 *
 * @returns double The area of the football for given a and b inputs is
 *    calculated and returned as the result from this function.
 */
double volumeOfFootball(double shortAxis, double longAxis)
{
  // we define a named constant for you to use here in calculating the area
  const double PI = 3.141592653589793;

  // your code for task 1 goes here

  // This returns some answer from calling this function, you need to return
  // the result of calculating the volume here instead of always returning PI
  // (3.14159...)
  return PI;
}

/** @brief Determine root types of quadratic equation
 *
 * A quadratic equation is of the form ax^2 + bx + c = 0.  The
 * discriminant b^2 - 4ac can be used to determine if the given
 * quadratic equation has 2 real roots, 1 repeated real root, or
 * imaginary roots.
 *
 * @param a The x^2 term of the quadratic equation being tested.
 * @param b The x^1 term of the quadratic equation being tested.
 * @param c The x^0 term of the quadratic equation being tested.
 *
 * @returns int Returns 2 if there are 2 real roots to the equation,
 *   1 if there is 1 repeated real root, and -1 if the roots are imaginary.
 */
int determineQuadraticRoots(double a, double b, double c)
{
  // your code for taks 2 goes here

  // we have hardcoded to always return 0, but you need to return the correct
  // value given a, b and c of a quadratic equation
  return 0;
}

/** @brief Perform calculation on two operands
 *
 * We are given two operands (as double values) and an operator.
 * The operator is a character, '+', '-', '*', '/'.  We perform
 * the indicated operation on the two given operands and return
 * the result from this function.
 *
 * @param leftOperand A double value of the left operand of a calculation
 *   we are to perform.
 * @param rightOperand A double value containing the right operand for our
 *   calculation.
 * @param operation A char indicating the operation to perform on the two
 *   given operands.
 *
 * @returns double We perform the operation indicated on the operands and return
 *   the resulting value from the calculation.
 */
double performOperation(double leftOperand, double rightOperand, char operation)
{
  // your code for task 3 goes here

  // we again hardcode something to return, you have to return the correct
  // answer from performing the operation on the given operands
  return -42.0;
}