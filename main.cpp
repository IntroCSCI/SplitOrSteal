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

  // Seed the random number generator
  srand(time(0));
  
  // Randomize computer choice
  computerSteal = rand() % 2;
  
  cout << "Welcome to Split or Steal!\nWhat's your name? ";
  getline(cin, playerName);

  cout << playerName << " make a choice:\n";
  cout << "1 - Split\n";
  cout << "2 - Steal\n";
  cout << "Enter the number of your choice: ";
  cin >> playerDecision;

  switch(playerDecision)
  {
    case 1:
      playerSteal = false;
      cout << playerName << " chose to Split\n";
      break;
    case 2:
      cout << playerName << " chose to Steal\n";
      playerSteal = true;
      break;
    default:
      cout << "Invalid choice. Defaulting to Split.\n";
      playerSteal = false;
      break;
  }
  switch(computerSteal)
  {
    case false:
      cout << "Computer chose to Split.\n";
      break;
    case true:
      cout << "Computer chose to Steal.\n";
      break;
  }
  return 0; 
}