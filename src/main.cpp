#include <iostream>


using namespace std;

int main(){
    int totalCoins {1000};
    const int maxGuesses {5};
    
    int target;
    int numGuesses;
    int coinsWagered;
    while (totalCoins > 0 && totalCoins < 1500){
        cout << "You have " << totalCoins << " coins\n\n";
        
        target = rand() % 100 + 1; // Between 1-100 inclusive
        numGuesses = 1;
        cout << "Enter coin wager: "; 
        cin >> coinsWagered; 
        cout << '\n';

        // Asks user for guess and says if high or low
        while (numGuesses <= maxGuesses){
            int guess;
            cout << "Enter guess: "; 
            cin >> guess;
            if (guess > target){
                cout << "Number is less than " << guess << '\n';
            }
            else if (guess < target){
                cout << "Number is greater than " << guess << '\n';
            }
            else {
                break; // If guessed correctly
            }
            cout << '\n';

            numGuesses++;
        }

        // Manages each outcome of the game
        if (numGuesses == 1){
            cout << "-- Got it on your first try! --";
            coinsWagered *= 10;
        }
        else if (numGuesses == 2){
            cout << "-- Got it in 2 guesses! --";
            coinsWagered *= 5;
        }
        else if (numGuesses == 3){
            cout << "-- Got it in 3 guesses! --";
            coinsWagered *= 3;
        }
        else if (numGuesses == 4){
            cout << "-- Got it in 4 guesses --";
            coinsWagered *= 2;
        }
        else if (numGuesses == 5){ // No need to update coinsWagered
            cout << "-- Got it in 5 guesses --";
        }
        else {
            cout << "-- Didn't get it --";
            coinsWagered = -coinsWagered;
        }
        cout << "\n\n";

        totalCoins += coinsWagered;
    }

    if (totalCoins <= 0){
        cout << "You lost all your money :(\n";
    }
    else {
        cout << "You just won " << totalCoins << " coins!!!\n";
    }
    
    return 0;
}