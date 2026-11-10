# TASK 5 – OPERATORS AND PRECEDENCE

## 1. Introduction

Operators are symbols used to perform operations on values and variables in C++.

## 2. Peak Hour Expression

```cpp
(hour >= 8 && hour < 10) || (hour >= 17 && hour < 20)
```

This checks whether the time is between 8–10 AM or 5–8 PM. The ending times are excluded.

## 3. Surcharge Expression

```cpp
fare += (fare * 20) / 100;
```

This adds a 20% peak-hour surcharge using integer arithmetic.

## 4. Concession Expression

```cpp
fare -= (fare * concessionPercent) / 100;
```

This deducts the concession percentage from the fare. The actual concession percentage must be confirmed because it is not specified in the assignment.

## 5. Operator Precedence and Associativity

- `*`, `/`, `%` have higher precedence than `+` and `-`.
- Relational operators such as `>=` and `<` are evaluated before logical `&&` and `||`.
- `&&` has higher precedence than `||`.
- The conditional operator `?:` selects one of two values based on a condition.
- Compound assignment operators such as `+=` update a variable.

Parentheses make expressions easier to understand.

## 6. Difference Between x++ and ++x

- `x++` uses the current value first, then increments.
- `++x` increments first, then uses the updated value.
- `i = i++` should be avoided because it is confusing and can cause undefined behaviour in modern C++.

## 7. Division and Modulus with Negative Values

C++ integer division truncates toward zero.

Example:

- `-10 / 3` gives `-3`.
- `-10 % 3` gives `-1`.

## 8. Alternative Concept and Complexity Analysis

A lookup table such as `bool peak[24]` can be used instead of a combined logical expression.

Both methods take O(1) time per check. The lookup table uses approximately 24 bytes for 24 Boolean entries, while the logical expression does not require an extra table.

## 9. Conclusion

Correct operator precedence and readable expressions help calculate metro fares accurately and avoid logical errors.
