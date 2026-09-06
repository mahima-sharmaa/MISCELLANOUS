#include <iostream>
#include <ctime>
using namespace std;
int main () {
    int g,num,a;
    char p;
    srand(time(0));
    cout<<"================================="<<endl;
        cout<<"WELCOME TO NUMBER GUESSING GAME"<<endl;
        cout<<"================================="<<endl;
        cout<<"Guess a number between 1 to 100"<<endl;
    do{
        num=rand()%100+1;
        a=0;
    do {
        cin>>g;
        a++;
        if (g>num) cout<<"Too high! Try again."<<endl;
            else if (g<num) cout<<"Too low! Try again."<<endl;
            else {
            cout<<"Congratulations! You guessed the correct number."<<endl;
            cout<<"You guessed the number in "<<a<<" attemps."<<endl;
        }
    }while(g!=num);
    cout<<"Play again? (Y/N): ";
    cin>>p;
  }while (p=='y'||p=='Y');
   return 0;
}