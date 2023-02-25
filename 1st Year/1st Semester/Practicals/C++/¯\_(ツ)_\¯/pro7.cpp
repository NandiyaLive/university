/*write a program in c++ to read the following details in user.
1:full name
2:reg no
3:age
4:address
5:sex
and print them*/

#include<iostream>
using namespace std;
int main()
{
    string name,regno,address;
    int age;
    char sex;


    cout<<"Enter your Full name :"<<endl;
    getline(cin,name);
    cout<<"Enter your Registration Number :"<<endl;
    getline(cin,regno);
    cout<<"Enter your age :"<<endl;
    cin>>age;
    cout<<"Enter your Address :"<<endl;
    cin>>address;
    cout<<"Enter your sex :"<<endl;
    cin>>sex;


    cout<<"Name: "<<name<<endl;
    cout<<"Registration Number: "<<regno<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Sex: "<<sex<<endl;





}
