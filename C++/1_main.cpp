#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  cout << "Hello World! \n";
  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for (int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  return 0;
}    