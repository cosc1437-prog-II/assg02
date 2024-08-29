/** @file assg02-tests.cpp
 *
 * @brief Unit tests for Assignment 02: Data Types, Variables, Relational
 *   and Logical Operators, Selection Control Structures
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @note   assg : Assignment 02: Basic Elements and Selection Control
 * @date   August 28, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "assg02-library.hpp"
#include "catch.hpp"
#include <iostream>
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3

/** areaOfFootball() test cases
 * Write your code in the areaOfFootball() function to pass
 * the following tasks as described in the assignment description.
 */
#ifdef task1
TEST_CASE("Task 1 <areaOfFootball()> tests", "[task1]")
{
  // any football where either the short or long axis is of length
  // 0.0 has an area of 0.0
  // 1, 2 and 3 are all primes
  CHECK_THAT(volumeOfFootball(0.0, 0.0), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(volumeOfFootball(0.0, 1.0), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(volumeOfFootball(5.0, 0.0), Catch::WithinAbs(0.0, 0.00001));

  // test half a dozen different footballs of different short and long axis
  // radius to make sure your calculation is working
  CHECK_THAT(volumeOfFootball(1.0, 1.0), Catch::WithinAbs(4.1887902047863905, 0.00001));
  CHECK_THAT(volumeOfFootball(2.0, 1.0), Catch::WithinAbs(16.755160819145562, 0.00001));
  CHECK_THAT(volumeOfFootball(5.0, 1.0), Catch::WithinAbs(104.71975511965977, 0.00001));
  CHECK_THAT(volumeOfFootball(1.0, 2.0), Catch::WithinAbs(8.377580409572781, 0.00001));
  CHECK_THAT(volumeOfFootball(1.0, 5.0), Catch::WithinAbs(20.94395102393195, 0.00001));
  CHECK_THAT(volumeOfFootball(4.25, 3.87), Catch::WithinAbs(292.8042892962027, 0.00001));
}
#endif

/** determineQuadraticRoots() test cases
 * Write your code in the determineQuadraticRoots() function to pass
 * the following tasks as described in the assignment description.
 */
#ifdef task2
TEST_CASE("<Task 2 determineQuadraticRoots()>  tests", "[task2]")
{
  // some tests of when there are two real roots, in this case
  // b^2 - 4ac > 0 (so b^2 must be > 4ac)
  CHECK(determineQuadraticRoots(2.0, 5.0, 2.0) == 2);
  CHECK(determineQuadraticRoots(1.0, 2.1, 1.0) == 2);
  CHECK(determineQuadraticRoots(1.0, 3.3, 2.0) == 2);
  CHECK(determineQuadraticRoots(0.1, 1.0, 0.2) == 2);

  // imaginary roots
  CHECK(determineQuadraticRoots(2.0, 3.0, 2.0) == -1);
  CHECK(determineQuadraticRoots(1.0, 1.9, 1.0) == -1);
  CHECK(determineQuadraticRoots(2.5, 3.3, 2.0) == -1);
  CHECK(determineQuadraticRoots(1.0, 1.0, 0.5) == -1);

  // one repeated root
  CHECK(determineQuadraticRoots(2.0, 4.0, 2.0) == 1);
  CHECK(determineQuadraticRoots(3.61, 1.9, 0.25) == 1);
  CHECK(determineQuadraticRoots(2.5, 5, 2.5) == 1);
  CHECK(determineQuadraticRoots(1.0, 2.0, 1.0) == 1);
}
#endif

#ifdef task3
TEST_CASE("<Task 3 performOperation()>  tests", "[task3]")
{
  // test '+' operation
  CHECK_THAT(performOperation(3.3, 4.4, '+'), Catch::WithinAbs(7.7, 0.00001));
  CHECK_THAT(performOperation(-3.3, 4.4, '+'), Catch::WithinAbs(1.1, 0.00001));
  CHECK_THAT(performOperation(5.45, -5.45, '+'), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(performOperation(42.0, 19.5, '+'), Catch::WithinAbs(61.5, 0.00001));

  // test '-' operation
  CHECK_THAT(performOperation(3.3, 4.4, '-'), Catch::WithinAbs(-1.1, 0.00001));
  CHECK_THAT(performOperation(-3.3, 4.4, '-'), Catch::WithinAbs(-7.7, 0.00001));
  CHECK_THAT(performOperation(5.45, -5.45, '-'), Catch::WithinAbs(10.90, 0.00001));
  CHECK_THAT(performOperation(42.0, 19.5, '-'), Catch::WithinAbs(22.5, 0.00001));

  // test '*' operation
  CHECK_THAT(performOperation(3.3, 4.4, '*'), Catch::WithinAbs(14.52, 0.00001));
  CHECK_THAT(performOperation(-3.3, 4.4, '*'), Catch::WithinAbs(-14.52, 0.00001));
  CHECK_THAT(performOperation(5.45, -5.45, '*'), Catch::WithinAbs(-29.7025, 0.00001));
  CHECK_THAT(performOperation(42.0, 19.5, '*'), Catch::WithinAbs(819.0, 0.00001));

  // test '/' operation
  CHECK_THAT(performOperation(3.3, 4.4, '/'), Catch::WithinAbs(0.7499999999999999, 0.00001));
  CHECK_THAT(performOperation(-3.3, 4.4, '/'), Catch::WithinAbs(-0.7499999999999999, 0.00001));
  CHECK_THAT(performOperation(5.45, -5.45, '/'), Catch::WithinAbs(-1.0, 0.00001));
  CHECK_THAT(performOperation(42.0, 19.5, '/'), Catch::WithinAbs(2.1538461538461537, 0.00001));

  // test switch default works if bad operation
  CHECK_THAT(performOperation(3.3, 4.4, 'x'), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(performOperation(-3.3, 4.4, '&'), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(performOperation(5.45, -5.45, '#'), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(performOperation(42.0, 19.5, '@'), Catch::WithinAbs(0.0, 0.00001));
}
#endif
