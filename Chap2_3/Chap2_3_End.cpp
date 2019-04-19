#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    bool player1Turn = true, gameOver = false;
    int chipsInPile = 0, chipsTaken = 0;

    srand(time(0));

    chipsInPile = (rand() % 100) + 1;
    cout << "This round will start with " << chipsInPile << " chips in the pile" << endl;

    return 0;
}