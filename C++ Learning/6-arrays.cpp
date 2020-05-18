#include <iostream>
using namespace std;

int main() {
    int numbers [3] = {1, 2, 3};
    bool wins [3] = {true, true, false};
    string quotes [3] = {"do or do not, there is no try",
                       "Those who dare to fail miserably can achieve greatly.",
                       "It is hard to fail, but it is worse never to have tried to succeed."};

    cout << "numbers position 0: " << numbers[0] << "\n";
    cout << "numbers position 1: " << numbers[1] << "\n";
    cout << "numbers position 2: " << numbers[2] << "\n";

    cout << "quotes position 0: " << quotes[0] << "\n";
    cout << "quotes position 1: " << quotes[1] << "\n";
    cout << "quotes position 2: " << quotes[2] << "\n";
}