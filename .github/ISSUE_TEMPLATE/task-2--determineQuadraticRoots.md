---
name: 'Task 2: Determine roots of quadratic equation'
about: Task 2 for Students
title: 'Task 2: Determine roots of quadratic equation'
labels: enhancement
assignees: ''

---

**Description**

In this task you again need to define some variable(s).  You will also
need to use some simple relation operators and implement an
`if / else if / else` control structure.

1. Create a variable of type `double` named `discriminant` in this function.
2. Calculate the discriminant as shown using $b^2 - 4ac$ and save the result in the variable you declared.
   - You can again use `b * b` to square the value of `b`.
3. Create an `if / else if / else` control statement.  You will need to use relational operator(s) here.
   Perform the tests exactly as described here,
   - First test if the discriminant is greater than 0.  If it is then return 2 (to indicate 2 real roots)
   - else test if the discriminant is less than 0.  If it is then return -1 to indicate complex roots.
   - else if the discriminant was not less than or greater than 0 it must be 0, so return 1 to indicate
     a single repeated root.


**Suggested Solution**


**Additional Requirements**

- You are always required to name variables as given in assginments, these
  may or may not be part of the unit tests in some cases.
- Likewise you must use the data type specified, `double` in this case.

