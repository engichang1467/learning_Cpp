#include <iostream> 
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std; 

struct player
{
    int wins;
    string name;
};

string FindPlayerName(player names[], bool playerTurn);
int askMove(bool player1Turn, int chipsInPile, player names[]);
void getUserNames (player players[]);
void addWins(player names[], bool playerTurn);

const float MAX_TURN = .5;
const int MAX_CHIPS = 100;
/////////////////////////////////////////////////////////


int main()  
{  
  bool player1Turn = true;  
 
  bool gameOver = false;    
  int moveCounter = 0;
  int chipsInPile = 0;  
  int chipsTaken = 0; 

  char userChoice;
  player Players[2];
  
  //Output file variables 
  ofstream outFile;
  outFile.open("Winners.txt", ios::app);
  
  //seed the random number generator
   srand(time(0));
  
  //ask the players for their names, then store in an array
   getUserNames(Players);
 
  
  //start the game with a random number of chips in the pile
  do
  {
	chipsInPile = (rand() % MAX_CHIPS) + 1;

  	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
    gameOver = false;
    moveCounter = 0;
    while (gameOver == false)
	{
     chipsTaken = askMove(player1Turn, chipsInPile, Players);
	 chipsInPile = chipsInPile - chipsTaken;
	 cout << "There are " << chipsInPile << " left in the pile\n";
	 player1Turn = !player1Turn;
	 moveCounter++;
	 if (chipsInPile == 0)
	 {
	 	gameOver = true;
	    cout << FindPlayerName(Players, player1Turn) << ", congratulations you won\n";	
	    outFile << FindPlayerName(Players, player1Turn) << " won in " << moveCounter << " moves";	
        addWins(Players, player1Turn);
	 }
 	}
  	cout << "Do you wish to play again? (Y/N)\n";
    cin >> userChoice;
    userChoice = toupper(userChoice);
    
   } while ( userChoice == 'Y'); 

   cout << Players[0].name << " had " << Players[0].wins << " total wins" << endl;
   cout << Players[1].name << " had " << Players[1].wins << " total wins" << endl; 
   outFile.close(); 
  return 0; 
} 
////////////////////////////////////////////////////////////////////////////////////
void getUserNames (player players[])
{
cout << "Player 1, please enter your name: ";
  cin >> players[0].name;
  cout << "\nThanks and good luck!" << endl;
  cout << "Player 2, please enter your name \n ";
  cout << "(If you wish to play against the computer, enter AI): ";
  cin >> players[1].name;
  cout << "\nThanks and good luck! \n";
}
////////////////////////////////////////////////////////////////

string FindPlayerName(player names[], bool playerTurn)
{
	if (playerTurn == true)
		return names[0].name;
	else
		return names[1].name;
}
 ///////////////////////////////////////////////////////////////////////////////////
int askMove(bool player1Turn, int chipsInPile, player names[])
{
	int chipsTaken;
	int maxPerTurn = MAX_TURN * chipsInPile;
	do
     {	
  		cout << FindPlayerName(names, player1Turn) << " How many chips would  you like?\n";
		
    	cout << "You can take up to ";
		if (( maxPerTurn ) == 0)
			cout << " 1\n";
		else
			cout << maxPerTurn << endl;
		if (FindPlayerName(names, player1Turn) == "AI")
         {
          		if (maxPerTurn == 0)
          			chipsTaken = 1;
		  		else
		  			chipsTaken = (rand() % maxPerTurn) + 1;
		 }
		else
    	   cin >> chipsTaken;
     } while ((chipsTaken > maxPerTurn )  && (chipsInPile > 1));

     return chipsTaken;
}

void addWins(player names[], bool playerTurn)
{
    if (playerTurn)
        names[0].wins++;
    else
        names[1].wins++;

}
