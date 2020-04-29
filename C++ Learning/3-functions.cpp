#include <iostream>
using namespace std;

void printMessage(string name) {
    cout << "Hello, " << name << "!\n";
}

int main() {
    string name = "Bob";
    printMessage(name);
}

/*
  Functions have 4 parts to them. The first is
  the return type, Second is the function name,
  third is the parameters, and finally there is
  the function body.

  return types (see variables):
  int
  char
  float
  bool
  void
*/