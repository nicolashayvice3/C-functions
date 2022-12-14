#include <iostream>
// new math header for use of sqrt()
#include <cmath>
using namespace std;


int main() {

  // variables
  float a, b, c, x1, x2, expression, realPart, imaginaryPart;
  cout << "Choose 3 different values for the quadratic euqation" << endl;
  cout << "Enter a, b and c: ";
  cin >> a >> b >> c;
  expression = b*b - 4*a*c;

  // if statement with the 3 different outcomes 
  if (expression > 0) {
    x1 = (-b + sqrt(expression))/(2*a);
    x2 = (-b - sqrt(expression))/(2*a);
    cout << "the roots are real and unequal" << endl;
    cout << "x1 = " << x1 << "  x2 = " << x2 << endl;
    return 0;
  } 
  else if (expression == 0) {
    cout << "the roots are Real and equal" << endl;
    x1 = -b/(2*a);
    cout << "x1 = " << x1 << "  x2 = " << x1 << endl;
    return 0;
  } 
  else {
    realPart = -b/(2*a);
    imaginaryPart = sqrt(-expression)/(2*a);
    cout << "the roots are imaginary" << endl;
    cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
    cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    return 0;
  }
  return 0;
}