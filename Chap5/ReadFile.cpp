#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inStream;
    inStream.open("passphrase.txt");
    int userGuess = 0;
    string passPhase;

    if (!inStream.fail())
    {
        while(inStream >> passPhase)
        {
            cout << "The pass phrase is: " << passPhase << endl;

            // Desc: Guessing the length of the string
            cout << "What is your answer?\n";
            cin >> userGuess;

            if (userGuess == passPhase.length())
                cout << "Congrats\n";
            else
                cout << "Sorry try again later\n";
        }    
    }

    inStream.close();

    return 0;
}