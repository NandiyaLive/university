/*ask the employer to enter the basic salary and over time hours and find the total salary
over time hours>50:
    total salary = basic salary+basic salary*0.25
others
    total salary = basic salary


 */
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int basic,ot,tot;


    cout<<"Enter the Basic Salary : "<<endl;
    cin>>basic;

     cout<<"Enter the over time hors : "<<endl;
    cin>>ot;


if (ot>50)
{
tot=basic+basic*0.25;
cout<<"Your Total Salary is : "<<tot;

}

else
{
cout<<"Your Total Salary is : "<<basic;
}




    return 0;
}

