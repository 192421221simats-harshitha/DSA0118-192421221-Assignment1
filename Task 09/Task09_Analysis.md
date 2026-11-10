# Task 09 – Implement and Test the Fare Logic

## 1. Fare Rules
- Inner Zone: Rs. 10
- Middle Zone: Rs. 20
- Outer Zone: Rs. 30
- Peak surcharge: 20%
- Peak hours: 8–10 AM and 5–8 PM
- At least Rs. 50 must remain after fare deduction.

## 2. Test Cases
The program must test:
- Normal journeys in all three zones during peak and off-peak hours.
- Boundary hours: 8:00, 10:00, 17:00 and 20:00.
- A balance that leaves exactly Rs. 50.
- Invalid zone, negative recharge and letters entered for the hour.
- Five journeys and their total fare.

## 3. Alternative Concept
Instead of writing separate checks for every test, we can store test cases in a table and process them using a loop.

- Time complexity: O(t), where t is the number of test cases.
- Space complexity: O(t), because the table stores t test cases.
- Adding a new boundary test is easy: add another row to the table.

## Conclusion
Testing different normal, boundary and invalid cases helps verify that the fare system works correctly and prevents incorrect deductions.
