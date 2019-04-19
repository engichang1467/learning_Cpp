#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = .5;

int main()
{
    // variables
    bool player1Turn = true, gameOver = false;
    int chipsInPile = 0, chipsTaken = 0, maxPerTurn = 0;
    string playerName[2];

    // ask for player's name
    cout << "Player 1, please enter your name: \n";
    cin >> playerName[0];
    cout << "Player 2, please enter your name: \n";
    cin >> playerName[1];

    // seed the random number generator
    srand(time(0));

    // start the game with a random number of chips on the pile
    chipsInPile = (rand() % MAX_CHIPS) + 1;
    cout << "This round will start with " << chipsInPile << " chips in the pile" << endl;
    
    maxPerTurn = (chipsInPile * MAX_TURN);
    cout << "You can only take " << maxPerTurn << endl;

    chipsTaken = (rand() % maxPerTurn) + 1;
    cout << "Number taken: " << chipsTaken << endl;

    /*
    create a variable to hold the integer value - static_cast<int>(chipsInPile * MAX_TURN)
    Make sure you assign that at the right place
    Then knowing the max number that is allowed to be taken per turn, 
     use that in the creation of a add a random number to be inserted as the number taken,

    */

    return 0;
}