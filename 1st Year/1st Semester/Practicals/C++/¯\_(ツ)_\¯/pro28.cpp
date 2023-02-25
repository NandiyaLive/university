#include <iostream>
using namespace std ;

int main()
{
int point;
cout << "Enter your Points: ";
cin >> point;

switch(point){

case 8 ... 10 :
cout << "Excellent";
break;

case 5 ... 7 :
cout << "Very Good ";
break;

case 1 ... 4 :
cout << "Good";
break;

default:
cout << "Looking for points ";
}


return 0;
}

