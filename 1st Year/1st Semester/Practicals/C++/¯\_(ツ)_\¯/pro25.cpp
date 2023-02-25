//get 3 marks from user and print largest number
#include<iostream>
#include<cmath>
using namespace std;
int main ()

{int mark1,mark2,mark3;


    cout<<"Enter Mark1 : "<<endl;
    cin>>mark1;

      cout<<"Enter Mark2 : "<<endl;
    cin>>mark2;

  cout<<"Enter Mark3 : "<<endl;
    cin>>mark3;

    if(mark1>mark2 && mark1>mark3)
    {
        cout<<"Mark 1 is largest number ";
    }

     else if(mark2>mark1 && mark2>mark3)
    {
        cout<<"Mark 2 is largest number ";
    }

     else if(mark3>mark2 && mark3>mark1)
    {
        cout<<"Mark 3 is largest number ";
    }

    else {cout<<"invalid!!!";}

    return 0;
}
