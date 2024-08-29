---
name: 'Task 3: Perform operation using switch'
about: Task 3 for Students
title: 'Task 3: Perform operation using switch'
labels: enhancement
assignees: ''

---

**Description**

In this task you will continue to practice declaring variables and
performing arithmetic calculations.  You will need to use a `switch`
control structure to implement the operation calculation for this task.

1. Define a variable of data type `double` named `result`.  You will calculate
   the operation and put the result into this variable to be returned.
2. Create a `switch` statement that switches on the `operation` character
   that is passed in as the third parameter to this function.
3. Handle the cases for '+' to do addition, '-' to do subtraction,
   '*' to do multiplication and '/' to do division.
   In all of these cases, perform the indicated operation and save the calculated
   value in the `result` variable that you declared.
4. You also need to add in a `default` case for your `switch` statement.  The default
   is to return a result of 0.0 if an invalid/unknown operation is asked for.
5. Don't forget that you need to return the `result` you calculate.  So you need
   to modify the `return` statement of the function given to pass your tests.


**Suggested Solution**


**Additional Requirements**

- You are always required to name variables as given in assginments, these
  may or may not be part of the unit tests in some cases.
- Likewise you must use the data type specified, `double` in this case.
- You are required to use a `switch` statement for this task, you cannot
  use `if / else if` logic.
- The `default` case to handle unknown operations is required here, it must
  cause a result of 0.0 to be returned if an unknown operation
  is requested.
