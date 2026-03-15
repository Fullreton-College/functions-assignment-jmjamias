[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/uZT3GJ8U)
# fc-functions-assignments

## Problem 1 ##.  
Define a function named CoinFlip that returns "Heads" or "Tails" according to a random value 1 or 0. Assume the value 1 represents "Heads" and 0 represents "Tails". Then, write a main program that reads the desired number of coin flips as an input, calls function CoinFlip() repeatedly according to the number of coin flips, and outputs the results. Assume the input is a value greater than 0.

Hint: Use the modulo operator (%) to limit the random integers to 0 and 1.

Ex: If the random seed value is 2 and the input is:

3

The output is:

Tails
Heads
Tails

The program must define and call the following function:
string CoinFlip()


## Problem 2 ##   
You have invented a vending machine capable of deep frying twinkies. Write a program to simulate the vending machine. It costs $3.50 to buy a deep-fried twinkie, and the machine only takes coins in denominations of a dollar, quarter, dime, or nickel. Write code to simulate a person putting money into the vending machine by repeatedly prompting the user for the next coin to be inserted. Output the total entered so far when each coin is inserted. When $3.50 or more is added, the program should output “Enjoy your deep-fried twinkie” along with any change that should be returned. Use top-down design to determine appropriate functions for the program.

## Problem 3 ##
Write a program that requests the current time and a waiting time as two integers for the number of hours and the number of minutes to wait. The program then outputs what the time will be after the waiting period. Use 24-hour notation for the times. Include a loop that lets the user repeat this calculation for additional input values until the user says she or he wants to end the program.


 Example of the output:

Compute completion time from current time and waiting period
Current time:
Enter 24 hour time in the format HH:MM
12:30
Waiting time:
Enter 24 hour time in the format HH:MM
15:40
Enter Y or y to continue, any other halts

y

Current time:

Enter 24 hour time in the format HH:MM
8:30

Waiting time:

Enter 24 hour time in the format HH:MM
15:10

Completion Time in 24 hour format:

23:40


Enter Y or y to continue, any other halts

n

Press any key to continue

## Problem 4 ## 

Write a program that tells what coins to give out for any amount of change from 1 cent to 99 cents. For example, if the amount is 86 cents, the output would be something like the following:

86 cents can be given as
3 quarter(s) 1 dime(s) and 1 penny(pennies)
Use coin denominations of 25 cents (quarters), 10 cents (dimes), and 1 cent (pennies). Do not use nickel and half-dollar coins. Your program will use the following function (among others):

void computeCoins(int coinValue, int& num, int& amountLeft);
//Precondition: 0 < coinValue < 100; 0 <= amountLeft < 100.
//Postcondition: num has been set equal to the maximum number
//of coins of denomination coinValue cents that can be obtained
//from amountLeft. Additionally, amountLeft has been decreased
//by the value of the coins, that is, decreased by
//num * coinValue.
For example, suppose the value of the variable amountLeft is 86. Then, after the following call, the value of number will be 3 and the value of amountLeft will be 11 (because if you take 3 quarters from 86 cents, that leaves 11 cents):

computeCoins(25, number, amountLeft);
Include a loop that lets the user repeat this computation for new input values until the user says he or she wants to end the program. (Hint: Use integer division and the % operator to implement this function.)
