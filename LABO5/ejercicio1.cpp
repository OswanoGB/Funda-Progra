#include <iostream>
#include <math.h>
using namespace std;

int mcd(int nmbr1, int nmbr2) 
{
    if(nmbr2 == 0) return nmbr1;
    return mcd(nmbr2, nmbr1%nmbr2);
}

int main()
{
    char reply = 'y';

    int nmbr1, nmbr2;

    while (reply == 'y' || reply == 'Y')
    {
         cout << "Ingrese el primer valor\n";
        cin >> nmbr1;
        cout << "Ingrese el segundo valor\n";
        cin >> nmbr2;

        cout << "El MCD de los números ingresados es: \n" << mcd(nmbr1, nmbr2) << "\n";

        cout << "Desea realizar otra operacion? (y/n)";
        cin >> reply;
    }
    

   
} 
