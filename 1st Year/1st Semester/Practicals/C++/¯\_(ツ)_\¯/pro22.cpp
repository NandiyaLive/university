//get 3 marks from user and print pass or fail from average
#include<iostream>
#include<cmath>
using namespace std;
int main ()

{int mark1,mark2,mark3,average;


    cout<<"Enter Mark1 : "<<endl;
    cin>>mark1;

      cout<<"Enter Mark2 : "<<endl;
    cin>>mark2;

  cout<<"Enter Mark3 : "<<endl;
    cin>>mark3;

average=(mark1+mark2+mark3)/3;


    if (average>=35)
    {
    cout<<"PASS";

    }

    else
    { cout<<"FAIL";}


return 0;
}


