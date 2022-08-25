#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int guess, guessNumber = 0;
    int minimum = 0, rangefromMin = 10;
    srand(time(0));
    int randomNumber = rand() % rangefromMin + minimum;

    cout << "                  Guess Game" << endl;
    cout << "                  **********" << endl;
    cout << "\n" << "\n";
    cout << "You will get 3 chances to guess the number" << endl;
    cout << endl;
    cout << "Guess a number between 1 to 10" << endl;
    cout << "\n" << "\n";
    cout << "Choice 1 : Enter your answer : ";
    cin >> guess;
    cout << endl;

    if (guess == randomNumber) {
        cout << "Wow you guessed it right! Here's a cookie (::) " << endl;
        return 0;

    } else if (guess != randomNumber && guessNumber == 0) {
        guessNumber++;
        cout << "Sorry wrong guess, try again" << endl;
        cout << endl;

    }  

    cout << "Choice 2 : Enter your answer : ";
    cin >> guess;
    
    if (guess != randomNumber && guessNumber == 1 ) {
        guessNumber++;
        cout << endl;
        cout << "Sorry wrong guess, try again" << endl;
    } else if (guess == randomNumber) {
        cout << endl;
        cout << "Wow you guessed it right! Here's a cookie (::) " << endl;
        return 0;
    }

    cout << endl;
    cout << "Choice 3 : Enter your answer : ";
    cin >> guess;

    if (guess != randomNumber && guessNumber == 2 ) {
        guessNumber++;
        cout << endl;
        cout << "Sorry wrong guess, you reached the limit! unlucky!" << endl;
    } else if (guess == randomNumber) {
        cout << endl;
        cout << "Wow you guessed it right! Here's a cookie (::) " << endl;
    }

    return 0;
}