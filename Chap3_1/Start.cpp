/*
 * Start.cpp
 * 
 * Program Description: game allows two players. Each player will take a certain amount of chips.
 *                      Whoever took the last piece, that player lose 
 *
 * Author: Michael Chang
 * Date: January 22, 2019
 */


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = .5;

int main()
{
    // Desc: variables
    bool player1Turn = true, gameOver = false;
    int chipsInPile = 0, chipsTaken = 0, maxPerTurn = 0;
    string playerName[2];
    char userChoice;

    // Desc: seed the random number generator
    srand(time(0));

    // Desc: ask for player's name
    cout << "Player 1, please enter your name: ";
    cin >> playerName[0];
    cout << "\nThanks and good luck!\n";

    cout << "Player 2, please enter your name: ";
    cin >> playerName[1];
    cout << "\nThanks and good luck!\n";

    do 
    {
        // Desc: start the game with a random number of chips on the pile
        chipsInPile = (rand() % MAX_CHIPS) + 1;
        cout << "This round will start with " << chipsInPile << " chips in the pile" << endl;

        gameOver = false;
        while(gameOver == false)
        {
            do
            {
                maxPerTurn = chipsInPile * MAX_TURN;
                // Desc: asking how many chip will they take per round
                if (player1Turn)
                    cout << playerName[0] << ", How many chips would you like?\n";
                else
                    cout << playerName[1] << ", How many chips would you like?\n";
                
                // Desc: setting up the max amount of chip to be taken
                cout << "You can take up to ";
                if (maxPerTurn == 0)
                    cout << "1\n";
                else
                    cout << maxPerTurn << endl;
                cin >> chipsTaken;

            } while((chipsTaken > maxPerTurn) && (chipsInPile > 1));

            chipsInPile -= chipsTaken;
            cout << "There are " << chipsInPile << " left in the pile\n";

            // Desc: check if a player win
            if (chipsInPile == 0)
            {
                gameOver = true;
                if (player1Turn)
                    cout << playerName[1] << ", congradulations you won\n";
                else
                    cout << playerName[0] << ", congradulations you won\n";
            }
            else
                player1Turn = !player1Turn;
        }

        // Desc: asking for player to play again
        cout << "Do you wish to play again? (Y/N)\n";
        cin >> userChoice;

    } while((userChoice == 'y') || (userChoice == 'Y'));

    return 0;
}