#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    int secret = rand() % 100 + 1;
    int guess;
    int count = 0; // To track number of guesses

    cout << "🎲 Guess the number (1-100): ";

    while (true) {
        cin >> guess;

        // Basic input validation
        if (cin.fail()) {
            cin.clear(); // Clear error flag
            cin.ignore(1000, '\n'); // Discard invalid input
            cout << "Please enter a valid number: ";
            continue;
        }

        count++; // Count every valid guess

        if (guess == secret) {
            cout << "✅ Correct! 🎉\n";
            cout << "📊 Total guesses: " << count << "\n";
            break;
        } else if (guess < secret) {
            cout << "Too low. Try again: ";
        } else {
            cout << "Too high. Try again: ";
        }
    }

    return 0;
}
