#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int guess, guessNumber = 0;
    int minimum = 1, rangefromMin = 10;
    // generate random number
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

    // if right complete if not 1+ to amount of guessed and try again
    // the process reapeats 3 times
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
        cout << endl;
        cout << "Correct number was : " << randomNumber << endl;
    } else if (guess == randomNumber) {
        cout << endl;
        cout << "Wow you guessed it right! Here's a cookie (::) " << endl;
    }

    return 0;
}