# TASK 3 – CHOOSE DATA TYPES AND CHECK TYPE COMPATIBILITY

## 1. Introduction

Data types define what kind of values can be stored in a variable. Choosing the correct data type helps the metro fare system work accurately and safely.

## 2. Data Type Selection

| Value | Data Type | Reason |
|---|---|---|
| Fare | long long | Stores money in paise |
| Balance | long long | Prevents negative balance and supports large values |
| Time | int | Stores hour values |
| Zone number | int | Stores zone numbers |
| Journey count | long long | Supports large journey counts |
| Peak status | bool | Stores true or false |
| Passenger initial | char | Stores one character |

## 3. Why Money Should Be Stored in Paise

Money should be stored as integer paise instead of double rupees because floating-point values may create rounding errors.

For example:
- Rs. 10 = 1000 paise
- Rs. 20 = 2000 paise
- Rs. 30 = 3000 paise

Integer paise gives exact money calculations.

## 4. Type Compatibility

C++ allows different data types to be used in expressions.

- `int + int` gives an integer result.
- `int + double` converts the integer to double.
- A numeric value converted to `bool` becomes true if it is non-zero and false if it is zero.

## 5. Size and Range

The `sizeof` operator displays the memory size of a data type.

The `<climits>` header provides limits such as `INT_MAX` and `INT_MIN`.

A 32-bit signed `int` has a maximum value of 2,147,483,647. A `long long` supports a much larger range and is suitable for large journey collections.

## 6. Alternative Concept and Complexity Analysis

If money were stored using `double` rupees instead of `long long` paise, decimal rounding errors could occur.

Both approaches take O(1) time for one addition. Both commonly use 8 bytes per value on modern systems. However, integer paise provides exact calculations for money.

## 7. Conclusion

Using suitable data types improves accuracy, prevents overflow and supports large-scale metro fare calculations.
