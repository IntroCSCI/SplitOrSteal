//Kevin Buffardi (with help of class)
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int cont = 1;
  char decision3 = 'y';
  while(cont)
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

      if(isupper(decision1))
        tolower(decision1);

      if(isupper(decision2))
        tolower(decision2);


        if(decision1 == 't' && decision2 == 's')
        {
          cout<<player1name<<" stole while "<<player2name<<" split. "
          <<player1name<<" WINS ALL OF THE PRIZE!\n";
          cout << "\n\n Play again? (y)es or (n)o: "<< endl;
          cin >> decision3;
          if(isupper(decision3))
            tolower(decision3);
          if(decision3 == 'n')
            cont = 0;
            else if(decision3 != 'y')
          {    cout << "Assuming exit response..." << endl;
              cout << "terminating process..." << endl;
              break;
          }
        }
        else if(decision2 == 't' && decision1 == 's')
        {
          cout<<player2name<<" stole while "<<player1name<<" split. "
            <<player2name<<" WINS ALL OF THE PRIZE!\n";
            cout << "\n\n Play again? (y)es or (n)o: "<< endl;
            cin >> decision3;
            if(isupper(decision3))
              tolower(decision3);
            if(decision3 == 'n')
              cont = 0;
              else if(decision3 != 'y')
              {
                cout << "Assuming exit response..." << endl;
                cout << "terminating process..." << endl;
                break;
              }
        }
        else if(decision1 == 's' && decision2 == 's')
        {
          cout<<"Both players cooperated and chose to split. Congrats, "
          <<player1name<<" and "<<player2name<<" you each get half the prize!\n";
          cout << "\n\n Play again? (y)es or (n)o: "<< endl;
          cin >> decision3;
          if(isupper(decision3))
            tolower(decision3);
          if(decision3 == 'n')
            cont = 0;
          else if(decision3 != 'y')
          {
            cout << "Assuming exit response..." << endl;
            cout << "terminating process..." << endl;
            break;
          }
        }
        else
        {
          cout<<"Sorry, you were both greedy and chose to steal. Neither of you "
          <<"win a prize and go home with NOTHING!\n";
          cout << "\n\n Play again? (y)es or (n)o: "<< endl;
          cin >> decision3;
          if(isupper(decision3))
            tolower(decision3);
          if(decision3 == 'n')
            cont = 0;
            else if(decision3 != 'y')
            {  cout << "Assuming exit response..." << endl;
              cout << "terminating process..." << endl;
              break;
            }
        }

}














  return 0;
}
