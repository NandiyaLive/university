/*write a program in c++ to read two double type numbers from the user and
do the following arithmetic operations.
    1 Addition
    2 Subtraction
    3 Division
    4 Multiplication
and print the result.*/

#include<iostream>
using namespace std;
int main()
{
 double num1,num2;



    cout<<"Enter the First Number : "<<endl;
    cin>>num1;
    cout<<"Enter the Second Number : "<<endl;
    cin>>num2;

    double sum=num1+num2;
    double sub=num1-num2;
    double mul=num1*num2;
    double div=num1/num2;


    cout<<"Addition is : "<<sum<<endl;
    cout<<"Subtraction is : "<<sub<<endl;
    cout<<"Division is : "<<div<<endl;
    cout<<"Multiplication is : "<<mul<<endl;









return 0;





}
