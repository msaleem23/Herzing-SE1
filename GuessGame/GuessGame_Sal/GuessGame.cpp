#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

void playGuessingGame() {
    srand(static_cast<unsigned int>(time(0))); //srand
    int numberToGuess = rand() % 100 + 1; // Random
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess what it is?" << endl;

    while (guess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (guess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    }
}

int main() {
    playGuessingGame();
    return 0;
}
