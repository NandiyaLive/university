#include<iostream>
#include<cmath>
using namespace std;
int main ()

{

int a=10,b=20,c=5;

bool result;
//Logical Operators

result=(a<b) && (b>c);
cout<<"(a<b) && (b>c): "<<result<<endl;

result=(a<b) || (b==c);
cout<<"(a<b) || (b==c): "<<result<<endl;

result=!(a>b);
cout<<"!(a>b): "<<result<<endl;

result=(a>b) && (b>c);
cout<<"(a>b) && (b>c): "<<result<<endl;

result=!(a<b);
cout<<"!(a<b): "<<result<<endl;






return 0;









}
