# TASK 4 – CONTROL IMPLICIT CONVERSIONS

## 1. Introduction

Implicit conversion happens when C++ automatically converts one data type into another without an explicit instruction from the programmer.

## 2. Types of Conversions

1. **Integer Division:** When two integers are divided, the decimal part is removed.
2. **Integer to Double:** An integer is automatically converted into a double when used with a double value.
3. **Char to Integer:** A character can be promoted to its integer character code in an arithmetic expression.
4. **Integer to Boolean:** Zero becomes false, and any non-zero value becomes true.
5. **Signed to Unsigned:** A negative signed integer can be converted to a large unsigned value during comparison.

## 3. Narrowing Conversion

Narrowing happens when a value is converted into a type that cannot safely represent it.

Example:

`int x{3.7};`

This causes a compile-time error because a decimal value cannot be safely narrowed to an integer using brace initialization.

## 4. static_cast

`static_cast` is used to perform an explicit type conversion.

Example:

`double result = static_cast<double>(7) / 2;`

The result is 3.5 because the division is performed using double.

## 5. Alternative Concept and Complexity Analysis

If explicit conversions using `static_cast` and brace initialization were used instead of implicit conversions, the code would become clearer and safer.

Both approaches generally have O(1) time and O(1) extra space for each conversion. Explicit conversions help programmers identify possible type changes, while brace initialization catches certain narrowing errors at compile time.

## 6. Conclusion

Understanding implicit conversions helps prevent unexpected results and improves the reliability of the metro fare system.
