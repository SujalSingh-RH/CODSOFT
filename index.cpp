#include <iostream>

using namespace std;

int main() {
    cout << "-------Please guess the number between 0 and 10----------" << endl;
    cout << "-------You have 5 chances to guess the correct number------------" << endl;



    int answer = 5; // The number to guess
    int guess; // Variable to store user's guess
    int health = 0; // Count the number of attempts
    int chances = 5; // Total allowed chances are 5
    bool gameover = false; // Game state(bool is used to store the value of TRUE and FALSE.)

    while (health < chances && !gameover) {
        cout << "ENTER YOUR NUMBER:-------- ";
        cin >> guess; // Get user input
        health++; // Increment the number of attempts

        if (guess == answer) {
            cout << "YOU WON!" << endl;
            gameover = true; // End the game
        } else {
            if (guess < answer) {
                cout << "Your guess is too low! Try again." << endl;
            } else {
                cout << "Your guess is too high! Try again." << endl;
            }
        }
    }

    if (!gameover) {
        cout << "YOU LOST! The correct number was " << answer << "." << endl;
    }

    return 0;
}
