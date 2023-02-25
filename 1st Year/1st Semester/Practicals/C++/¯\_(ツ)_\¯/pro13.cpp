#include<iostream>
#include<cmath>
using namespace std;
int main ()
{double x1,x2,y1,y2,p,q,r;

    cout<<"Enter X1 : "<<endl;
    cin>>x1;
    cout<<"Enter X2 : "<<endl;
    cin>>x2;
    cout<<"Enter Y1 : "<<endl;
    cin>>y1;
    cout<<"Enter Y2 : "<<endl;
    cin>>y2;

    p=pow((x1-y1),2);
    q=pow((y1-y2),2);
    r=sqrt((p+q));

    cout<<"calculate is : "<<r<<endl;













}
