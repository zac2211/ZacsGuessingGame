#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
    int userNum;
    int success;
    int numTries;
    int userGuess;
    srand(time(NULL));
    success = 0;
    numTries = 0;
    userNum = rand() % 101;
    while (success < 1)
    {
        cout << "What do you guess? $ ";
        cin >> userGuess;
        if (userGuess == userNum)
        {
            cout << "You got it right!" << endl;
            success = 1;
            numTries = numTries + 1;
            cout << "It took you " << numTries << " tries to win!" << endl;
        }
        else
        {
            cout << "Sorry, not correct!" << endl;
            if (userGuess > userNum)
            {
                cout << "Your guess was higher than the computer's number." << endl;
            }
            else
            {
                cout << "Your guess was lower than the computer's number." << endl;
            }
            numTries = numTries + 1;
        }
    }
    return 0;
}

