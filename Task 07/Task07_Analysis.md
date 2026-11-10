# TASK 7 – FROM PROCEDURAL TO OBJECT-ORIENTED PROGRAMMING

## 1. Procedural Approach

In procedural programming, the program uses separate variables and functions to manage the smart-card balance and fare.

Example: A balance variable and free functions such as `canTravel()` and `deduct()`.

## 2. Object-Oriented Approach

In object-oriented programming, data and functions are grouped inside a class.

The `SmartCard` class stores the balance privately and provides functions to check and deduct the fare.

## 3. Encapsulation

The balance is declared as `private`. Other parts of the program cannot directly change it. They must use the class's public functions.

## 4. Preventing Negative Balance

The `canTravel()` function checks whether the remaining balance is at least Rs 50. The `deduct()` function deducts the fare only when the condition is satisfied.

## 5. Comparison

| Procedural | Object-Oriented |
|---|---|
| Uses separate variables and functions | Uses a class and objects |
| Data may be changed directly | Balance is private |
| Less protection for balance | Better data protection |
| Rules are managed by free functions | Rules are managed inside the class |

## 6. Alternative Concept and Complexity Analysis

If the balance were a public data member instead of private, any part of the program could change it directly, even to a negative value or below Rs 50.

Both approaches have O(1) time for checking and deducting one fare and O(1) space per card. Private data does not increase the basic time or space complexity, but it improves safety and control.

## 7. Conclusion

The object-oriented approach is better for the metro smart-card system because encapsulation protects the balance and keeps the fare rules together.
