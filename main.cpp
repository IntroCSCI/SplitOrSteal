#include <iostream>
#include <cstdlib> // for rand(), srand()
#include <ctime>   // for time()
using namespace std;

int main()
{
  string playerName = "";
  int playerDecision = 0;
  bool playerSteal = false;
  bool computerSteal = false;
  char playAgain = ' ';
  int playGame = 0;
  int playerPoints = 0;
  int computerPoints = 0;
  // Seed the random number generator
  srand(time(0));
  
  cout << "Welcome to Split or Steal!\nWhat's your name? ";
  getline(cin, playerName);
  do{
    do{
        cout << playerName << " make a choice:\n";
        cout << "1 - Split\n";
        cout << "2 - Steal\n";
        cout << "Enter the number of your choice: ";
        cin >> playerDecision;

        if ( playerDecision == 1 ){
            playerSteal = false;
            cout << playerName << " chose to Split\n";
        }
        else if( playerDecision == 2 ){
            cout << playerName << " chose to Steal\n";
            playerSteal = true;
        }
        else {
            cout << "Invalid choice.\n";
        }
    }while( playerDecision != 1 && playerDecision !=2 );

    // Randomize computer choice
    computerSteal = rand() % 2;

    if( computerSteal ){
        cout << "Computer chose to Steal.\n";
    }
    else {
        cout << "Computer chose to Split.\n";
    }
    // booleans: playerSteal and computerSteal
    if( playerSteal && computerSteal ) {
        cout << "Greedy! You both lose!\n";
    }
    else if( playerSteal && !computerSteal ) {
        cout << "Congrats, you win the whole prize!\n";
        playerPoints += 2;
    }
    else if( !playerSteal && computerSteal ) {
        cout << "Oh no, the computer stole the whole prize!\n";
        computerPoints += 2;
    }
    else {
        cout << "You and the computer each get 50% of the prize!\n";
        playerPoints++;
        computerPoints++;
    }
    
    playGame++;
  }while( playGame < 3);
  return 0; 
}