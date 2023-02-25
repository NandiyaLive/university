#include <iostream>
using namespace std ;

int main()
{

    cout << "Method01: " << endl;
    for (int i=1; i<=10 ; i++)
    {

        cout << i << " " ;
    }

    cout << "\nMethod02: " << endl;
    for (int i=1; i<11 ; i++)
    {

        cout << i << " " ;
    }

    cout << "\nMethod03: " << endl;
    for (int i=0; i<=10 ; i++)
    {

        cout << i+1 << " " ;
    }

        cout << "\nMethod04: " << endl;
    for (int i=0; i<=10 ; i++)
    {

        cout << i++ << " " ;
    }

        cout << "\nMethod05: " << endl;
    for (int i=0; i<=10 ; i++)
    {

        cout << ++i << " " ;
    }





    return 0;
}
