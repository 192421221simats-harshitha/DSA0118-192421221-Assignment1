# Task 10 – Compare Expectations with Execution

## 1. Comparison of Data Types
- `int` stores whole numbers but has a limited range.
- `long long` stores large integer values and is suitable for total fare in paise.
- `double` stores decimal values but may produce rounding errors.

## 2. Overflow
The maximum collection for 3,000,000 journeys at Rs. 30 per journey is:

3,000,000 × 3,000 paise = 9,000,000,000 paise.

This value exceeds the usual maximum value of a 32-bit int (2,147,483,647). Therefore, int is not suitable.

## 3. Compiler Warnings
The `-Wall -Wextra` options display common compiler warnings. The actual warnings depend on the code and compiler version. Record the warnings shown when compiling your program.

## 4. Alternative Concept and Complexity
- `int`, `long long` and `double` each take O(1) time for one addition.
- Each variable uses O(1) space.
- `int` can overflow for large totals.
- `long long` safely stores the example total.
- `double` can represent decimal values but may have precision differences.

## Conclusion
`long long` with integer paise is recommended for fare calculations because it avoids fractional-paise rounding and handles the network total safely.
