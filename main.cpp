//Kevin Buffardi (with help of class)
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
  bool playAgain = true;
  char answer;
  while (playAgain)
  {
    //player names
    string player1name = "";
    string player2name = "";

    //player responses
    char decision1 = ' ';
    char decision2 = ' ';


    cout<<"Player 1, please enter your name: ";
    cin>>player1name;
    cout<<"Player 2, please enter your name: ";
    cin>>player2name;

    cout<<"WELCOME TO SPLIT OR STEAL!\n";

    cout<<player1name<<", please enter the character of your choice...\n";
    cout<<"Please enter (s)plit or s(t)eal: ";
    cin>>decision1;


    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
        <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
        <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
        <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    cout<<player2name<<", please enter the character of your choice...\n";
    cin>>decision2;

    if(decision1 == 't' || 'T' && decision2 == 's' || 'S')
    {
      cout<<player1name<<" stole while "<<player2name<<" split. "
          <<player1name<<" WINS ALL OF THE PRIZE!\n";
    }
    else if(decision2 == 't' || 'T' && decision1 == 's' || 'S')
    {
      cout<<player2name<<" stole while "<<player1name<<" split. "
          <<player2name<<" WINS ALL OF THE PRIZE!\n";
    }
    else if(decision1 == 's' || 'S' && decision2 == 's' || 'S')
    {
      cout<<"Both players cooperated and chose to split. Congrats, "
          <<player1name<<" and "<<player2name<<" you each get half the prize!\n";
    }
    else
    {
      cout<<"Sorry, you were both greedy and chose to steal. Neither of you "
          <<"win a prize and go home with NOTHING!\n";
    }
    cout << "Do you want to play again? (Y/N)";
    cin >> answer;
    if (answer == 'N')
    {
      playAgain = false;
    }
  }















  return 0;
}
