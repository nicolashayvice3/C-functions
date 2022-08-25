#include <iostream>
using namespace std;

int main() {
    string name = "Your name here";
    int number = 0, units = 0;

    cout << "Auckland Power - Customer Bill Generator" << endl;
    cout << endl;

    cout << "********************************************" << endl;

    cout << endl;
    cout << "Enter Customer Name : ";
    cin >> name;
    cout << "Enter Customer Number : ";
    cin >> number;
    cout << "Enter Consumed units : ";
    cin >> units;
    cout << "\n" << "\n";
    cout << "Auckland Power - Customer Bill" << endl;
    cout << endl;

    cout << "******************************" << endl;

    cout << "\n" << "\n";
    cout << "Customer Number : " << number << "\n" << endl;
    cout << "Customer Name : " << name << "\n" << endl;
    cout << "Units Consumed : " << units << "\n" << endl;

    if (units <= 100) {
        int amount = (units * 0.30);
        cout << "amount : " << amount << "\n" << endl;

    } else if (units > 100 && units <= 200) {
        int amount = ((units - 100) * 0.50 + 30);
        cout << "amount : " << amount << "\n" << endl;

    } else if (units > 200 && units <= 300) {
        int amount = ((units - 200) * 0.80 + 80);
        cout << "amount : " << amount << "\n" << endl;

    } else {
        int amount = ((units - 300) * 1.00 + 160);
        cout << "amount : " << amount << "\n" << endl;
    }
    return 0;
}