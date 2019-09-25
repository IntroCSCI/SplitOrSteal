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
  bool playing = true;
  char playagain;


  cout<<"Player 1, please enter your name: ";
  cin>>player1name;
  string newplayer1name;
  newplayer1name += toupper(player1name[0]);
  for (int i = 1; i < player1name.size(); i++) {
	newplayer1name += tolower(player1name[i]);
  }
  cout<<"Player 2, please enter your name: ";
  cin>>player2name;
  string newplayer2name;
  newplayer2name += toupper(player2name[0]);
  for (int i = 0; i < player2name.size(); i++) {
    newplayer2name += tolower(player2name[i]);
  }
	player1name = newplayer1name;
	player2name = newplayer2name;
while (playing) {
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

  if(decision1 == 't' && decision2 == 's')
  {
    cout<<player1name<<" stole while "<<player2name<<" split. "
        <<player1name<<" WINS ALL OF THE PRIZE!\n";
  }
  else if(decision2 == 't' && decision1 == 's')
  {
    cout<<player2name<<" stole while "<<player1name<<" split. "
        <<player2name<<" WINS ALL OF THE PRIZE!\n";
  }
  else if(decision1 == 's' && decision2 == 's')
  {
    cout<<"Both players cooperated and chose to split. Congrats, "
        <<player1name<<" and "<<player2name<<" you each get half the prize!\n";
  }
  else
  {
    cout<<"Sorry, you were both greedy and chose to steal. Neither of you "
        <<"win a prize and go home with NOTHING!\n";
  }
  cout<<"Would you like to play again?(y/n)\n";
  cin>>playagain;
  if(playagain == 'n') {
	playing = false;
  }


}













  return 0;
}
