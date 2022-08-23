#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
  int minimum = 11, rangefromMin = 9, i;
  int totalTimes = 6;
  string readyMessage = "";
  srand(time(0));

  cout << "Random numbers between 10 - 20 with odd & even count" << endl;
  cout << "are you ready? ";
  cin >> readyMessage;
  cout << endl;

  cout << "Random numbers between 10 to 20" << endl;
  cout << "******************************" << endl;

  for (i = 1; i <= totalTimes; i++){
    cout << rand() % rangefromMin + minimum << " ";
  }
  cout << endl;
}