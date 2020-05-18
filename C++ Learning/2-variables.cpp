#include <iostream>
using namespace std;

int main() {
    int number = 1; // A whole number in the range -2,147,483,648 to 2,147,483,647
    char letter = 'a'; // Any single character value
    float decimal = 1.5; // decimal numbers
    bool trueOrFalse = true; // A value of true or false
    string sentance = "Hello World"; // strings are many characters next to each other.
                                    // They can be thought of as sentances.

    // Use the << operator to switch between writing strings and outputting a variable.
    cout << "Here is my number: " << number << "\n";
    cout << "Here is my letter: " << letter << "\n";
    cout << "Here is my decimal: " << decimal << "\n";
    cout << "Here is my boolean: " << trueOrFalse << "\n";
    cout << "Here is my sentance: " << sentance << "\n";
}