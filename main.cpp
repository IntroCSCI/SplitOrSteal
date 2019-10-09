//Kevin Buffardi (with help of class)
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  //player names
  string player1name = "";
  string player2name = "";
  //player responses
  char decision1 = ' ';
  char decision2 = ' ';
  char keepPlaying = 'Y';
  cout<<"Player 1, please enter your name: ";
  cin>>player1name;
  cout<<"Player 2, please enter your name: ";
  cin>>player2name;
  while(tolower(keepPlaying) == 'y'){
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
    if(tolower(decision1) == 't' && tolower(decision2) == 's')
    {
      cout<<player1name<<" stole while "<<player2name<<" split. "
        <<player1name<<" WINS ALL OF THE PRIZE!\n";
    }
    else if(tolower(decision2) == 't' && tolower(decision1) == 's')
    {
      cout<<player2name<<" stole while "<<player1name<<" split. "
        <<player2name<<" WINS ALL OF THE PRIZE!\n";
    }
    else if(tolower(decision1) == 's' && tolower(decision2) == 's')
    {
      cout<<"Both players cooperated and chose to split. Congrats, "
        <<player1name<<" and "<<player2name<<" you each get half the prize!\n";
    }
    else
    {
      cout<<"Sorry, you were both greedy and chose to steal. Neither of you "
        <<"win a prize and go home with NOTHING!\n";
    }
    cout<< "Enter Y to play again or N to quit.\n";
    cin >> keepPlaying; 
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
      <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
      <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
      <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  }
  return 0;
}
