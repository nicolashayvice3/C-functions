#include <iostream>
using namespace std;

int main() {

    // All used variables
    int a, b, i, j, l;
    int m = 0;
    bool first = true;

    cout << "Choose a starting & ending value and recieve all prime & divisible by 7 numbers between" << endl;
    cout << "Enter starting number: ";
    cin >> a;
    cout << "Enter ending number: ";
    cin >> b;
    cout << endl;

    // restart if starting value is lower than ending value
    if (a > b) {
        cout << "Choose a starting value lower than an ending value, try again" << endl;
        cout << "Enter starting number: ";
        cin >> a;
        cout << "Enter ending number: ";
        cin >> b;
    }

    // display all divisble numbers by 7 from choosen range using for loop
    cout << "Numbers divisible by 7 from " << a << " to " << b << endl;
    cout << "******************************" << endl;
    for (i = a; i < b; i++){
        if (i % 7 == 0){
            if( first ) first = false;
            else cout << ", ";
            cout << i;
        }
    }

    // display all prime numbers in choosen range
    cout << endl;
    cout << endl;
    cout << "Prime numbers" << endl;
    cout << "******************************" << endl;
    cout<< "Prime List between" << "(" << a << " and " << b << ") :";
    for (i = a; i < b; i++){
        for (j = 2; j < i; j++){
            if (i % j == 0){
                l++;
                break;
            }
        }
        if(l == 0 && i != 1 && i != 2) {
            cout << i << " ";
            m++;
        }
        l = 0;
    }

    // display total amount of prime numbers in choosen range
    cout << endl; 
    cout<< "Total number of prime numbers from" << "(" << a << " and " << b << ") :" << m << endl;
    return 0;
}