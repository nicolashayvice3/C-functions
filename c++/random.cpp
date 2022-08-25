#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
  int minimum = 11, rangefromMin = 9;
  int i;
  int totalTimes = 6;
  int a = 0, b = 0;
  bool first = true;
  string readyMessage = "";
  srand(time(0));

  cout << "Random numbers between 10 - 20 with odd & even count" << endl;
  cout << "are you ready? ";
  cin >> readyMessage;
  cout << endl;

  cout << "Random numbers between 10 to 20" << endl;
  cout << "******************************" << endl;

  for (i = 1; i <= totalTimes; i++){
    int randomNumber = rand() % rangefromMin + minimum;

    if( first ) first = false;
    else cout << ", ";
    cout << randomNumber;

    if ( randomNumber % 2 == 0) {
      a++;
    } else {
      b++;
    }
  }
  cout << endl;

  cout << "Number of odd numbers in the list: " << b << endl;
  cout << "Number of even numbers in the list: " << a << endl;
  
  cout << endl;

  return 0;
}
