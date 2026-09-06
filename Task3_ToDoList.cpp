#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main () {
    vector <string> tasks;
    cout<<"Welcome to your TO-DO LIST!"<<endl;
     int a;
    do
    {
    cout<<"=============================\n";
    cout<<"=========TO DO LIST=========\n";
    cout<<"=============================\n";
    cout<<"1. Add task"<<endl;
    cout<<"2. View task"<<endl;
    cout<<"3. Delete task"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"=============================\n";
    cout<<"Enter your choice: ";
    cin>>a;
    
    switch (a){
        case 1:{
        string p;
        cout<<"Enter task: ";
        cin.ignore();
        getline(cin,p);
        tasks.push_back(p);
        cout<<"Task added successfully. "<<endl;;
        break;
        }
        case 2:{
            if(tasks.empty()){
                cout<<"No tasks found. "<<endl;
            }
            else{
                cout<<"========YOUR TASKS========\n";
                for (int x=0;x<tasks.size();x++){
                    cout<<x+1<<". "<<tasks[x]<<endl;
                }
                cout<<"==============================\n\n";
            }
            break;
        }
        case 3:{
            if(tasks.empty()){
                cout<<"No tasks found to delete. ";
            }
            else{
                int q;
                cout<<"Enter task number to delete: ";
                cin>>q;

                if(q>=1&&q<=tasks.size()){
                    tasks.erase(tasks.begin()+q-1);
                    cout<<"Task deleted successfully. "<<endl;
                }
                else{
                    cout<<"Invalid task number. "<<endl;
                }
            }
            break;
        }
        case 4:{
        cout<<"Thank you for using TO_DO LIST! "<<endl;
        break;
        }
        default:{
        cout<<"Invalid choice. Try again."<<endl;
        break;
        }
    }
        
    } while (a!=4);
    return 0;
}