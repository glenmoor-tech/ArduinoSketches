#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
  
  // Create a number that's 0 or 1
  
  srand (time(NULL));
  int	coin = rand() % 2;
  
  // If number is 0: Heads
  // If it is not 0: Tails
  
  switch (coin) { // Switches check the value of a variable
                  // and match it to a case defined in the
                  // switch's body
    case 0: // If the variable (coin) is zero
      cout << "Heads\n";
      break; // breaks are required to stop running code in the switch.
             // If a break isn't used then it will run the rest of the code
             // in the switch's body.
    case 1:
      cout << "Tails\n";
      break;
  }
}