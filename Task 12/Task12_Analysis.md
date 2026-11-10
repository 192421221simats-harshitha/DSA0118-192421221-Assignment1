# Task 12 – Updated Metro Fare System

## Aim
To extend the City Metro Smart-Card System by adding an Airport Zone, weekend discounts and monthly passes.

## New Features
1. Airport Zone – A fixed fare of Rs.60.
2. Weekend Discount – A 10% discount is applied on weekends. It is not combined with the peak-hour surcharge.
3. Monthly Pass – Pass holders can travel unlimited times within their two selected zones without paying an individual journey fare.

## Fare Calculation
- Inner Zone: Rs.10
- Middle Zone: Rs.20
- Outer Zone: Rs.30
- Airport Zone: Rs.60
- Peak surcharge: 20%
- Weekend discount: 10%

## Monthly Pass
The system checks whether the journey zone matches either of the two zones selected for the monthly pass. If it matches, the journey fare becomes zero.

## Limitations
- The current program accepts only two selected zones.
- Monthly pass expiry and renewal are not included.
- Passenger concession percentages are not included because the assignment does not specify them.
- Input validation and passholder authentication can be improved.

## Conclusion
The updated system supports four zones, weekend discounts and monthly passes. It uses functions, enumerations and integer-based fare calculations to make the system easier to maintain and extend.
