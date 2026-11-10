# TASK 1 – UNDERSTAND THE PROBLEM AND IDENTIFY THE OBJECTS

**Assignment Title:** Design, Implement and Validate the Fare Logic of a City Metro Smart-Card System

**Course Outcome:** CO1

**Marks:** 4

## 1. Introduction

The City Metro Smart-Card System is designed to calculate metro fares based on the distance travelled by passengers. The metro network is divided into three zones: Inner, Middle and Outer.

The basic fares are:

- Inner Zone – Rs. 10
- Middle Zone – Rs. 20
- Outer Zone – Rs. 30

During peak hours (8–10 AM and 5–8 PM), a 20% surcharge is added to the basic fare. Students and senior citizens receive concessions.

Passengers use a smart card to pay their fares. A journey is permitted only when the remaining balance after deducting the fare is at least Rs. 50.

The system uses Object-Oriented Programming (OOP) to manage passengers, smart cards, journeys and fare calculations efficiently.

## 2. Identify the Objects, Data and Behaviour

Objects are the main entities used in an object-oriented system. Each object contains data and behaviour.

| Object | Data (Attributes) | Behaviour (Methods) |
|---|---|---|
| SmartCard | Card ID, balance | Check balance, deduct fare, recharge |
| Passenger | Name, passenger type | Travel, receive concession |
| Journey | Source, destination, fare | Calculate journey fare |
| Zone | Zone name, base fare | Identify travel zone |
| FareTable | Zone fares, surcharge | Return the correct fare |

**Explanation:**

1. SmartCard: Stores the passenger's available balance and manages fare deductions.
2. Passenger: Represents the person travelling by metro and stores passenger details.
3. Journey: Represents a trip from one station or zone to another.
4. Zone: Identifies the travel area and its corresponding base fare.
5. FareTable: Stores the fare details and surcharge percentage.

These objects are necessary because they separate the responsibilities of the metro system and make the program easier to maintain.

## 3. Procedural Programming vs Object-Oriented Programming

**Procedural Programming:**

Procedural programming uses separate functions and variables to perform operations.

In this system, the card balance, fare and passenger details are stored in separate variables. Functions are used to calculate fares, check balances and deduct money.

**Object-Oriented Programming:**

Object-Oriented Programming organizes the program using classes and objects.

In this system, SmartCard, Passenger, Journey and FareTable are created as classes. Each class manages its own data and functions.

| Procedural Programming | Object-Oriented Programming |
|---|---|
| Uses functions | Uses classes and objects |
| Data is stored separately | Data and methods are combined |
| Less data protection | Supports data hiding |
| Difficult to maintain in large systems | Easier to maintain and extend |

**Comparison:**

For a small metro system, procedural programming may be sufficient. However, OOP is better for a large metro network because it provides better organization, data protection and reusability.

## 4. Four Basic Principles of OOP

### 4.1 Encapsulation

Encapsulation combines data and methods inside a class and protects the data from direct access.

Example: The SmartCard class keeps the balance private and provides methods to check and deduct the fare.

### 4.2 Abstraction

Abstraction hides internal implementation details and shows only the necessary operations.

Example: Passengers use a smart card at the metro gate without knowing the internal fare calculation process.

### 4.3 Inheritance

Inheritance allows one class to acquire the properties and methods of another class.

Example: Student and SeniorCitizen classes can inherit common passenger details from a Passenger base class.

### 4.4 Polymorphism

Polymorphism allows the same function or operation to behave differently in different situations.

Example: A calculateConcession() function can calculate different concession amounts for students and senior citizens.

These four principles improve security, reusability, flexibility and maintainability.

## 5. Rules of a Correct Journey

The metro fare system must follow these rules:

1. The journey must have a valid source and destination.
2. The fare must be calculated according to the farthest zone travelled.
3. A 20% surcharge must be added during peak hours (8–10 AM and 5–8 PM).
4. Students and senior citizens must receive the applicable concession.
5. The smart card must have enough balance to pay the fare.
6. After fare deduction, at least Rs. 50 must remain on the card.
7. The card balance must never become negative.
8. Invalid journeys must be rejected without deducting money.

**Example:**

Initial card balance = Rs. 100

Journey fare = Rs. 30

Remaining balance = Rs. 100 − Rs. 30 = Rs. 70

Since Rs. 70 is greater than Rs. 50, the journey is allowed.

If the fare is Rs. 60, the remaining balance will be Rs. 40. Therefore, the journey is rejected.

## 6. Alternative Concept and Complexity Analysis

If the metro fare system is developed using procedural programming instead of Object-Oriented Programming, the solution uses global variables and separate functions.

For example:

- A global variable stores the smart-card balance.
- A function calculates the fare.
- A function checks whether the journey is allowed.
- A function deducts the fare.

**Complexity Comparison:**

| Operation | Procedural Approach | OOP Approach |
|---|---|---|
| Time per journey | O(1) | O(1) |
| Memory per card | O(1) | O(1) |
| Data protection | Low | High |
| Maintenance | More difficult | Easier |

Both approaches have the same time complexity of O(1) per journey because they perform a fixed number of operations.

Both also use O(1) memory per card because each card stores a fixed number of values.

However, OOP is easier to maintain. If the minimum balance changes from Rs. 50 to Rs. 60, the procedural program may require changes in multiple functions. In OOP, the change can be managed centrally through the SmartCard class.

## 7. Conclusion

The Object-Oriented Programming approach is suitable for the City Metro Smart-Card System because it organizes the program into separate classes and objects.

Encapsulation protects the card balance, abstraction hides internal calculations, inheritance supports different passenger types, and polymorphism allows different concession calculations.

Therefore, OOP provides a structured, secure, reusable and maintainable solution for the metro fare system.
