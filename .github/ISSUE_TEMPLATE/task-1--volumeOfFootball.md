---
name: 'Task 1: Calculate volume of a football'
about: Task 1 for Students
title: 'Task 1: Calculate voluem of a football'
labels: enhancement, good first issue
assignees: ''

---

**Description**

In this task you will create a variable of type `double` and use
arithmetic operators to perform some calculations.  You need to do the
following:

1. Define a variable of type `double` named `volume`.
2. Use the formula given above to calculate the volume of the football, given
   whatever is passed in as the `shortAxis` and the `longAxis`
   - Be careful about integer division (read our tutorial materials about this).
     Try using `4.0 / 3.0` instead of `4 / 3`.
   - You can use `shortAxis * shortAxis` to square (raise to second power) the
     `shortAxis`.  We will learn of a better way to do this later when we talk
     about the C library functions.
   - Assign the result of this calculation to your variable named `volume`.
 3. Change the function so that instead of returning 0.0 it returns your
    calculated value which should be in the variable of type `double` named
	`volume` that you created.


**Suggested Solution**

- Be careful of integer division as mentioned above.

**Additional Requirements**

- You are always required to name variables as given in assginments, these
  may or may not be part of the unit tests in some cases.
- Likewise you must use the data type specified, `double` in this case.

