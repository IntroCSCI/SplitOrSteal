//Kevin Buffardi (with help of class)
#include <iostream>
#include <string>
using namespace std;


struct Player
{
  string name;
  char decision;
};


string getPlayerName(string);
void getDecision(struct Player &);

int main()
{
  //player names
  //string player1name = "";
  //string player2name = "";

  //player responses
  //char decision1 = ' ';
  //char decision2 = ' ';
  
  struct Player player1;
  struct Player player2;



  player1.name = getPlayerName("Player 1");
  player2.name = getPlayerName("Player 2");

  cout<<"WELCOME TO SPLIT OR STEAL!\n";

  getDecision(player1);

  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
      <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
      <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
      <<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

  getDecision(player2);

  if(player1.decision == 't' && player2.decision == 's')
  {
    cout<<player1.name<<" stole while "<<player2.name<<" split. "
        <<player1.name<<" WINS ALL OF THE PRIZE!\n";
  }
  else if(player2.decision == 't' && player1.decision == 's')
  {
    cout<<player2.name<<" stole while "<<player1.name<<" split. "
        <<player2.name<<" WINS ALL OF THE PRIZE!\n";
  }
  else if(player1.decision == 's' && player2.decision == 's')
  {
    cout<<"Both players cooperated and chose to split. Congrats, "
        <<player1.name<<" and "<<player2.name<<" you each get half the prize!\n";
  }
  else
  {
    cout<<"Sorry, you were both greedy and chose to steal. Neither of you "
        <<"win a prize and go home with NOTHING!\n";
  }

  return 0;
}

string getPlayerName(string prompt)
{
    string input;
    cout<<prompt<<", please enter your name: ";
    cin>>input;
    return input;
}

void getDecision(struct Player & current)
{
  cout<<current.name<<", please enter the character of your choice...\n";
  cout<<"Please enter (s)plit or s(t)eal: ";
  cin>>current.decision;
}


















