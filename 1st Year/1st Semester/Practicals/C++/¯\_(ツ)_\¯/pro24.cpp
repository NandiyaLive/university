#include<iostream>
using namespace std;
int main ()

{
    
    int mark;

 cout<<"Enter Mark : "<<endl;
 cin>>mark;
    if(mark>74 && mark<=100){
        cout<<"You are a Good Student";
        }

        else if(mark>64 && mark<=75){
        cout<<"You are a Average Student";
        }


        else if(mark>35 && mark<=64){
            cout<<"You are a Poor Student";
            }

    else{
        cout<<"Invalid Marks";
        }

    return 0;
}



