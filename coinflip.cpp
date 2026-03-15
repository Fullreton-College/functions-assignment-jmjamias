#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string CoinFlip() {
   int flip = rand() % 2;
   if (flip == 1){
      return "Heads";
   } else {
      return "Tails";
   }
}

int main() {
   int numFlips;
   int i;

   srand(2);

   cin >> numFlips;

   for (i = 0; i < numFlips; i++){
      if (i > 0) {
         cout << " ";
      }
      cout << CoinFlip();
   }
   cout << endl;
   return 0;
}