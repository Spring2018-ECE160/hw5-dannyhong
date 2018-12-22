## Question 5

(K&R Exercise 5-8) There is no error checking in <code>day_of_year</code> or <code>month_day</code>. Remedy this defect and verify that all of the cases are covered with examples.

Compile Steps:

Output:

gcc question5.c
./a.out
Case 1:
Incorrect input
Incorrect input
 
Case 2:
2017 12 23 <--> 2017 357
2017 227 <--> 2017 8 15
 
Case 3:
2017 12 23 <---> 2017 357
2017 227 2017 <--> 8 15
 
Case 4:
2017 12 23 <--> 2017 357
2017 227 <---> 2017 8 15
 
Case 5:
2017 12 23 <--> 2017 357
2017 227 2017 <--> 8 15

