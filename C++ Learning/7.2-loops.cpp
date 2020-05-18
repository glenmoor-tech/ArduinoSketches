#include <iostream>
#include <array>
using namespace std;

int main() {
    int numbers [3] = {1, 2, 3};
    string quotes [3] = {"do or do not, there is no try",
                       "Those who dare to fail miserably can achieve greatly.",
                       "It is hard to fail, but it is worse never to have tried to succeed."};

    for (int i = 0; i < 3; i++) {
        cout << "numbers position " << i << ": " << numbers[i] << "\n";
    }

    for (int i = 0; i < 3; i++) {
        cout << "quotes position " << i << ": " << quotes[i] << "\n";
    }
}