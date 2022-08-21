#include <iostream>
using namespace std;

int main() {
  int a, b, i;
  cout << "Enter starting number: ";
  cin >> a;
  cout << "Enter ending number: ";
  cin >> b;
  cout << "" << endl;

  if (a < b) {
    cout << "Numbers divisible by 7 from " << a << " to " << b << endl;
    cout << "******************************" << endl;
    for (i = a; i < b; i++){
        if (i % 7 == 0){
            cout << i << ", ";
        }
    }
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