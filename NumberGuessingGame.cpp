#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//rand(); function to get random number
//srand(); function to generate different random number

//int random = offset = (rand() % range);
//int random = 1 + (rand() % 100); generate the number between 1 to 100(range)

int main(){
    // srand(time(0));
    // int secretNumber =  1 + (rand() % 100);
   
    cout<<"\n\t\tWelcome to Number Guessing Game! "<<endl;
    cout<<"Guess the number between 1 to 100.You will get the limited choices based on your level"<<endl;
    cout<<"\n\t\t\tGood luck!"<<endl;

    while (true)
    {
      cout<< "\nEnter the difficulty level: \n";
      cout<< "1 for easy!\t";
      cout<< "2 for medium!\t";
      cout<< "3 for difficult!\t";
      cout<< "0 for ending the game!\n"<<endl;

      int difficultyLevelChoice ;
      cout<< "Enter the number: ";
      cin>>difficultyLevelChoice;


      srand(time(0));
     int secretNumber =  1 + (rand() % 100);
     int playerChoice;

      if (difficultyLevelChoice==1){
        cout<< "\nYou have 10 choices for finding the secret number between 1 to 100";
        int UserChoicesLeft=10;
        for(int i=1;i<=10;i++){
            cout<< "\n\nEnter the number : ";
            cin>> playerChoice;
            if(playerChoice==secretNumber){
            cout<<"Very well played! You won, "<< playerChoice << "is the secret number" <<endl;
            cout<<"\t\t\t Thanks for playing the game......" <<endl;
            cout<<"Continue the game again with us!!\n\n "<<endl;
            break;
            }else{
                cout<<"No,"<< playerChoice<< " is not the right number that you entered\n";
                if(playerChoice>secretNumber){
                    cout<< "The secret number is smaller than the number you have chosen"<<endl;
                }
                else{
                    cout<< "The secret number is greater than the number you have chosen"<<endl;
                }
                UserChoicesLeft--;
                cout << UserChoicesLeft << " choices left." << endl;
                if(UserChoicesLeft==0){
                    cout<< "You did not get the secret number, it was " <<secretNumber<<", You lose!!\n\n";
                    cout<<"Play the game again to win!!"\n\n;
                }
            }

        }
    } 
      else if (difficultyLevelChoice==2){}
      else if (difficultyLevelChoice==3){}
      else if (difficultyLevelChoice==0){}
      else{


      }
      
     
      

    }
    
    return 0;

}