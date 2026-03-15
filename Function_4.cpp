#include <iostream>
using namespace std;

//Function declarations
void computeCoins(int coinValue, int& num, int& amountLeft);  //computes coins for a denomination
void displayCoins(int amount);      //displays the full coin breakdown


int main()
{
  int amount;                         //stores user input amount
  char ans = 'y';                     //controls loop

  while (ans == 'y' || ans == 'Y')      //keep going until user says no
  {
    cout << "Enter an amount from 1 to 99 cents: "; 
    cin >> amount;                        //read amount from user

    if (amount < 1 || amount > 99)                    //validate input range
    {
      cout << "Invalid amount. Please enter between 1 and 99.\n"; 
    }
    else
    {
      displayCoins(amount);           //call display function
    }
    cout << "\nEnter Y or y to continue, any other key halts: ";
    cin >> ans;             //ask user to continue or stop
  }

return 0;
}


//implement functions

void computeCoins(int coinValue, int& num, int& amountLeft)
{
  num = amountLeft / coinValue;       //integer division gets max coins
  amountLeft = amountLeft % coinValue;    //remainder is leftover amount
}

void displayCoins(int amount)
{
  int quarters, dimes, pennies;     //stores number of each coin
  int amountLeft = amount;          //working copy of amount

  computeCoins(25, quarters, amountLeft);    //calculates quarters first, then dimes, then pennies
  computeCoins(10, dimes, amountLeft);
  computeCoins(1, pennies, amountLeft);

  cout << amount << " cents can be given as "
       << quarters << " quarter(s) "
       << dimes << " dime(s) and "
       << pennies << " penny(pennies)" << endl;
}
