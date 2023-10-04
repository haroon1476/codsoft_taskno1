#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

    cout << "\n\t\t\tWelcome to GuessTheNumber game!"
        << endl;
    cout << "You have to guess a number between a specific range based on level of difficulty you choose. Good Luck!"
        << endl;

    char isWannaPlay;

    do
    {
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\n";
        cout << "2 for medium!\n";
        cout << "3 for hard!\n";

        // select the level of difficulty
        int difficultyChoice;
        cout << "\nEnter the number: ";
        cin >> difficultyChoice;


        // generating the secret number
        srand(time(0));

        // Generating number in range of 1 and 100
       // int secretNumber = 1 + (rand() % 100);
        int playerChoice;

        // Difficulty Level:Easy
        if (difficultyChoice == 1) {

            int secretNumber = 1 + (rand() % 100);
            cout << "\nYou have 10 choices for finding the "
                "secret number between 1 and 100.";

            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {

                // prompting the player to guess the secret number
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                // determining if the playerChoice matches the secret number
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                        << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                        << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                            "smaller than the number "
                            "you have chosen"
                            << endl;
                    }
                    else {
                        cout << "The secret number is "
                            "greater than the number "
                            "you have chosen"
                            << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the secret number, it was " << secretNumber << ", You lose!!\n\n";
                        break;
                    }
                }
            }
        }

        // Difficulty level : Medium
        else if (difficultyChoice == 2) {

            int secretNumber = 1 + (rand() % 250);
            cout << "\nYou have 10 choices for finding the secret number between 1 and 250.";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {

                // prompting the player to guess the secret number 
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                // determining if the playerChoice matches
                // the secret number
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                        << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                        << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is smaller than the number you have chosen"
                            << endl;
                    }
                    else {
                        cout << "The secret number is greater than the number you have chosen"
                            << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                        << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the "
                            "secret number, it was "
                            << secretNumber << endl;
                        cout << " You lose! Better luck next time.\n\n";
                        break;
                    }
                }
            }
        }
        // Difficulty level : hard
        else if (difficultyChoice == 3) {

            int secretNumber = 1 + (rand() % 500);
            cout << "\nYou have 10 choices for finding the secret number between 1 and 500.";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {

                // prompting the player to guess the secret
                // number
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                // determining if the playerChoice matches
                // the secret number
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, "
                        << playerChoice
                        << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                        << endl;
                    cout << "Play the game again with "
                        "us!!\n\n"
                        << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                        << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                            "smaller than the number "
                            "you have chosen"
                            << endl;
                    }
                    else {
                        cout << "The secret number is "
                            "greater than the number "
                            "you have chosen"
                            << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                        << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the "
                            "secret number, it was "
                            << secretNumber
                            << ", You lose! Better luck next time.\n\n";
                        break;
                    }
                }
            }
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                "play the game! (0,1,2,3)"
                << endl;
        }

        cout << " Dou you wanna play this game again? (Y/N) ";
        cin >> isWannaPlay;

        while (!(isWannaPlay == 'y' || isWannaPlay == 'Y' || isWannaPlay == 'n' || isWannaPlay == 'N'))
        {
            cout << "\nEnter Y or N only!";
            cin >> isWannaPlay;
        }


    } while (isWannaPlay == 'Y' || isWannaPlay == 'y');


    return 0;
}