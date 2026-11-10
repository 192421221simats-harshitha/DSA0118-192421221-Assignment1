# TASK 6 – DESIGN THE CONTROL STRUCTURES

## 1. Introduction

Control structures decide how a program executes instructions based on conditions and repetition.

## 2. Types of Control Structures

**if-else:** Used to check conditions, such as whether the passenger has enough balance.

**switch:** Used to select the base fare according to the travel zone.

**Conditional operator:** Used for simple decisions with two possible results.

## 3. Looping Statements

- **for loop:** Best when the number of journeys is known.
- **Range-based for loop:** Used to process each journey in an array or collection.
- **while loop:** Used when the number of repetitions is not known in advance.

## 4. break and continue

- `break` stops a loop or exits a switch statement.
- `continue` skips the current loop iteration and moves to the next journey.

## 5. Default Case

The `default` case handles an invalid or unknown zone when no switch case matches.

## 6. Alternative Concept and Complexity Analysis

An array-based fare table can be used instead of a switch statement.

Both array lookup and switch selection take O(1) time. The array requires extra space for storing the fare values. An array can make adding a fourth zone easier when the zone values are mapped consistently.

## 7. Conclusion

Using suitable control structures helps the metro system calculate fares, validate journeys and process multiple passengers efficiently.
