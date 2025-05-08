#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int uwins = 0;
    int kwins = 0;

    cout << "Welcome to Knights vs Knaves! Defenders of the bridge...\n\n";

    cout << "Behold...The Great Empire of Tunsierra!!!\n";
    cout << "We have tasked you to find our brave knights who have gone rogue in the outskirts of our empire.\n";
    cout << "We fear many have turned into knaves under our very own nose...\n";
    cout << "Your first step is to head to the long lost bridge in the outskirts of our empire...\n\n";
    cout << "5 nights later...\n\n";
    cout << "Help...help..(help is shouted in a familiar voice)\n";
    cout << "You: Where are you!!!...\n";
    cout << "A knave has deceived you and has now located you!!!\n";
    cout << "You have now been captured!!!\n";
    cout << "Knave: I will now offer you a chance to survive by playing rock paper scissors!\n\n";

    string status;
    cout << "To begin the game, enter 'start': ";
    cin >> status;

    while (status != "start" && status != "Start" && status != "START") {
        cout << "Invalid input. Please enter 'start': ";
        cin >> status;
    }

    do {
        int user = 0;
        int knave = rand() % 3 + 1;

        cout << "\nMake your choice:\n";
        cout << "1) Rock\n";
        cout << "2) Paper\n";
        cout << "3) Scissors\n";
        cout << "Your choice (1-3): ";
        cin >> user;

        while (user < 1 || user > 3) {
            cout << "Invalid choice. Please enter 1, 2, or 3: ";
            cin >> user;
        }

        // Game logic
        if ((user == 1 && knave == 3) || 
            (user == 2 && knave == 1) || 
            (user == 3 && knave == 2)) {
            cout << "You win this round!\n";
            uwins++;
        }
        else if (user == knave) {
            cout << "It's a tie!\n";
        }
        else {
            cout << "Knave wins this round!\n"; 
            kwins++;
        }

        cout << "Score - You: " << uwins << "  Knave: " << kwins << endl;

    } while (uwins < 2 && kwins < 2);

    if (uwins >= 2) {
        cout << "\nYou won " << uwins << " to " << kwins << "!\n";
        cout << "You and your knights can now leave safely...\n";
    }
    else {
        cout << "\nYou lost " << uwins << " to " << kwins << "!\n";
        if (uwins >= 1) {
            cout << "You and your fellow knights will now be executed...\n";
        }
        else {
            cout << "For your solo effort you have saved your own life...\n";
        }
    }

    return 0;
}
