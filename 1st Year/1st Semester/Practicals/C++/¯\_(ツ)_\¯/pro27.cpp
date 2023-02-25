#include <iostream>
using namespace std ;

int main()
{
char c;
cout << "Enter your Grades: ";
cin >> c;

switch(c){

case 'E':
case 'e':
cout << "Excellent";
break;

case 'V':
case 'v':
cout << "Very Good ";
break;

case 'G':
case 'g':
cout << "Good";
break;

default:
cout << "Invalid Grade";
}


return 0;
}
