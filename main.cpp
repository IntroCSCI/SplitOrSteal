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

  int notPlaying = 1;

do
{
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

  if(decision1 == 't' && decision2 == 's' && decision1 =='T' && decision2 =='S')
  {
    cout<<player1name<<" stole while "<<player2name<<" split. "
        <<player1name<<" WINS ALL OF THE PRIZE!\n";
  }
  else if(decision2 == 't' && decision1 == 's' && decision2 == 'T' && decision1 == 'S')
  {
    cout<<player2name<<" stole while "<<player1name<<" split. "
        <<player2name<<" WINS ALL OF THE PRIZE!\n";
  }
  else if(decision1 == 's' && decision2 == 's' && decision1 =='S' && decision2 == 'S') 
  {
    cout<<"Both players cooperated and chose to split. Congrats, "
        <<player1name<<" and "<<player2name<<" you each get half the prize!\n";
  }
  else
  {
    cout<<"Sorry, you were both greedy and chose to steal. Neither of you "
        <<"win a prize and go home with NOTHING!\n";
  }

  cout<<"Do you want to play again?"<<endl;
  cout<<"If not press 1 and if you do want to play again enter any number"<<endl;
  cin>>notPlaying;

  if(notPlaying == 1)
  {
    return 0;
  }



}while(notPlaying != 1);















  return 0;
}
