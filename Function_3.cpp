#include <iostream>
using namespace std;

void input( int& hours24, int& minutes);
void output( int hours, int minutes);

int main()
{
    int timeHours, timeMinutes, waitHours, waitMinutes,finishHours, finishMinutes;

  cout << "Compute completion time from current time and waiting period\n";
  

  char ans = 'y'; 
  while ('y' == ans || 'Y' == ans)
  {
    cout << "Current time:\n";
    input(timeHours, timeMinutes);              //reads current time from user

    cout << "Waiting time:\n";
    input(waitHours, waitMinutes);              //reads waiting time from user

    
    finishHours = timeHours + waitHours;        //add hours together
    finishMinutes = timeMinutes + waitMinutes;  //add minutes together

    
    finishHours += finishMinutes / 60;          //carry over extra minutes to hours
    if(finishHours >= 24)
	{
	  finishHours %= 24;
	  cout << "Completion time is in the day following the start time\n";
    }

    finishMinutes%= 60;               //keep minutes within 0-59

    cout << "Completion ";
    output(finishHours, finishMinutes);       //print final time

	cout << "\n\nEnter Y or y to continue, any other halts\n\n";
	cin >> ans;
  }

  return 0;
}

void input(int& hours24, int& minutes)
{
  char colon;                       //stores the ':' separator
  cout << "Enter 24 hour time in the format HH:MM.\n"; 
  cin >> hours24 >> colon >> minutes;    //reads format like 12:30
}

void output(int hours, int minutes)
{
  cout << "Time in 24 hour format:\n";
  cout << hours << ":";           //prints hours then colon
  if (minutes < 10){              // pad single digit minutes
    cout << "0";                  //adds leading zero e.g. 9 -> 09
  }
  cout << minutes << endl;        //prints minutes
}

