# Task 08 – Read and Print Data Safely

## 1. Input Handling
- `cin` is used to read the passenger's zone, journey hour and balance.
- `cin.fail()` checks whether the entered value is invalid.
- `cin.clear()` resets the input error state.
- `cin.ignore()` removes the incorrect input from the input buffer.

## 2. Output Formatting
The `<iomanip>` header provides:
- `setw()` – sets the output width.
- `setfill()` – fills empty spaces with a character.
- `fixed` – displays decimal values in fixed format.
- `setprecision(2)` – displays two digits after the decimal point.

## 3. Neat Journey Report
The program displays the zone, journey time, fare and remaining balance.

## 4. Alternative Concept and Complexity
An alternative is to use a separate input-validation function.

- Normal input and validation take O(1) time per value.
- Extra space is O(1).
- Repeated invalid attempts increase the time depending on the number of attempts.
- A separate function makes the program easier to reuse and maintain.

## Conclusion
Safe input handling prevents incorrect values from entering the fare system. Formatted output makes the journey report clear and readable.
