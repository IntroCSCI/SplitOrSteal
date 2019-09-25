//Kevin Buffardi (with help of class)
#include <iostream>
#include <string>
using namespace std;

int main()
{
  //player names
  string player1name = "";
  string player2name = "";

  //player responses
  char decision1 = ' ';
  char decision2 = ' ';
  char user_input = ' ';

  bool playing = true;
  while (playing) {
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

    if(toupper(decision1) == toupper('t') &&
      toupper(decision2) == toupper('s')) {
      cout<<player1name<<" stole while "<<player2name<<" split. "
          <<player1name<<" WINS ALL OF THE PRIZE!\n";
    }
    else if(toupper(decision2) == toupper('t') &&
            toupper(decision1) == toupper('s')) {
      cout<<player2name<<" stole while "<<player1name<<" split. "
          <<player2name<<" WINS ALL OF THE PRIZE!\n";
    }
    else if(toupper(decision1) == 's' && toupper(decision2) == toupper('s')) {
      cout<<"Both players cooperated and chose to split. Congrats, "
          <<player1name<<" and "<<player2name<<" you each get half the prize!\n";
    }
    else {
      cout<<"Sorry, you were both greedy and chose to steal. Neither of you "
          <<"win a prize and go home with NOTHING!\n";
    }

    cout << endl;
    bool getting_input = true;
    while (getting_input) {
      cout << "Would you like to play again? (y/n) ";
      cin >> user_input;
      if (toupper(user_input) == toupper('y')) {
        playing = true;
        getting_input = false;
      } else if (toupper(user_input) == toupper('n')) {
        playing = !playing;
        getting_input = false;
      }
    }
  }
















  return 0;
}
