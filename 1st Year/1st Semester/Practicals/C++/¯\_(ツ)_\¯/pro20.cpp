//user input value is odd or even
#include<iostream>
#include<cmath>
using namespace std;
int main ()

{int num,out;


    cout<<"Enter the value : "<<endl;
    cin>>num;

    out=num%2;

    if (out==0)
    {
    cout<<"The value is Even Number";

    }

    else
    { cout<<"The value is Odd Number";}



return 0;


}
