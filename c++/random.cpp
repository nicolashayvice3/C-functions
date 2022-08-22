#include <iostream>
#include <cmath>
using namespace std;


int main() {
  float a = 11, b = 20, i;
  string readyMessage = "";
  cout << "Random numbers between 10 - 20 with odd & even count" << endl;
  cout << "are you ready? ";
  cin >> readyMessage;
  cout << endl;

  cout << "Random numbers between 10 to 20" << endl;
  cout << "******************************" << endl;

  for (i = a; i < b; i++){
    cout << i << ", ";
  }

  if (a < 2) {
    return 0;
  } 
}