#include <iostream>
#include <cmath>
using namespace std;


int main() {

  float a, b, c, x1, x2, expression, realPart, imaginaryPart;
  cout << "Enter coefficients a, b and c: ";
  cin >> a >> b >> c;
  expression = b*b - 4*a*c;

  if (expression > 0) {
    x1 = (-b + sqrt(expression))/(2*a);
    x2 = (-b - sqrt(expression))/(2*a);
    cout << "the roots are real and unequal" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    return 0;
  } 
  else if (expression == 0) {
    cout << "the roots are Real and equal" << endl;
    x1 = -b/(2*a);
    cout << "x1 = x2 =" << x1 << endl;
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
}