/*
  &&: the and logical operator
  ||: the or logical operator
  !: the not logical operator

  false && false = false
  false && true = false
  true && false = false
  true && true = true

  false || false = false
  false || true = true
  true || false = true
  true || true = true

  !false = true
  !true = false
*/
#include <iostream>
using namespace std;

int main() {
    bool a = true;
    bool b = false;

    cout << "a is true and b is false:\n";

    cout << "b && b: ";
    if (b && b) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    cout << "b && a: ";
    if (b && a) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    cout << "a && b: ";
    if (a && b) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    cout << "a && a: ";
    if (a && a) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    cout << "b || b: ";
    if (b || b) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    cout << "b || a: ";
    if (b || a) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    cout << "a || b: ";
    if (a || b) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    cout << "a || a: ";
    if (a || a) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    cout << "!b: ";
    if (!b) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    cout << "!a: ";
    if (!a) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }
}