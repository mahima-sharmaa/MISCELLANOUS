#include <iostream>
using namespace std;
int main () {
     double a,b; char c,d;
     cout<<"=========================="<<endl;
     cout<<"Simple Calculator"<<endl;
     cout<<"=========================="<<endl;
 do{
     cout<<"Enter the first number: ";
     cin>>a;
     cout<<"Enter the operator(+,-,*,/): ";
     cin>>c;
     cout<<"Enter the second number: ";
     cin>>b;
         switch(c){
          case '+':
          cout<<"Results = "<<a<<" + "<<b<<" = "<<a+b;
          break;

          case '-':
          cout<<"Results = "<<a<<" - "<<b<<" = "<<a-b;
          break;

          case '*':
          cout<<"Results = "<<a<<" * "<<b<<" = "<<a*b;
          break;

          case '/':
          if (b!=0)
          cout<<"Results = "<<a<<" / "<<b<<" = "<<a/b;
          else
          cout<<"Error! Division by zero.";
          break;

          default:
          cout<<"Invalid Operation. ";
        }
        cout<<"\nAnother calculation? (Y/N): ";
        cin>>d;
    }while(d=='Y'||d=='y');
    return 0;
}
