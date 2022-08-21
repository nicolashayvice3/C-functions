#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter starting number: ";
  cin >> a;
  cout << "Enter ending number: ";
  cin >> b;

  if (a < b) {

    return 0;
  } 
  else {
    cout << "Choose a starting value lower than an ending value, try again" << endl;
    cout << "Enter starting number: ";
    cin >> a;
    cout << "Enter ending number: ";
    cin >> b;
    return 0;
  } 
}