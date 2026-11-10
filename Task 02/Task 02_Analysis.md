# TASK 2 – USE TOKENS, KEYWORDS, IDENTIFIERS AND CONSTANTS CORRECTLY

## 1. Introduction

In the City Metro Smart-Card System, fares, surcharge percentages and minimum balance limits must be defined in one place. This avoids repeated values and makes future changes easier.

## 2. Five Types of C++ Tokens

1. **Keywords:** Reserved words in C++, such as `int`, `class`, `if`, `return` and `public`.
2. **Identifiers:** Names given to variables, functions and classes, such as `balance`, `fare()` and `SmartCard`.
3. **Constants:** Fixed values that cannot be changed, such as `20` and `5000`.
4. **Operators:** Symbols used to perform operations, such as `+`, `-`, `=`, `*` and `>=`.
5. **Punctuators:** Symbols used to structure a program, such as `{}`, `()`, `;` and `,`.

## 3. Types of Constants

- **#define:** Creates a macro using the preprocessor. It does not provide normal C++ type checking.
- **const:** Declares a variable whose value cannot be changed after initialization.
- **constexpr:** Declares a value that can be evaluated at compile time.

I prefer `constexpr` for the metro fare table because it is type-safe, supports compile-time evaluation and keeps fixed values in one place.

## 4. enum and enum class

An `enum` represents a group of named values.

An `enum class` is safer because its values are scoped and do not automatically convert to integers.

Example:

`enum class Zone { Inner, Middle, Outer };`

This avoids accidental mixing of zone values with unrelated integers.

## 5. Identifier Naming Rules

- Identifiers can contain letters, digits and underscores.
- They cannot begin with a digit.
- Spaces are not allowed.
- C++ keywords cannot be used as identifiers.
- Names should clearly explain their purpose.

Examples:
- `baseFarePaise`
- `minimumBalancePaise`
- `peakSurchargePercent`

## 6. Alternative Concept and Complexity Analysis

If `#define` macros were used instead of `constexpr` and `enum class`, type checking and scope safety would be reduced. Macros are replaced by the preprocessor and do not occupy storage. A `constexpr` value usually does not need separate storage either.

Both approaches have O(1) time for accessing a fixed fare value. Their runtime performance is generally similar. However, `constexpr` and `enum class` are safer and easier to maintain.

## 7. Conclusion

Using `constexpr` and `enum class` makes the metro fare program safer, clearer and easier to update. All fixed fare values and limits can be changed in one place.
