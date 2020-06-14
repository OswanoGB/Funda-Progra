#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char reply;
    int year;
    int mod;
    int mod2;
    int mod3;

    reply = 'y'; 

    while (reply == 'y' || reply == 'Y')
    {
        cout << "Ingrese el a\244o que desea comprobar:\n";
        cin >> year;
        mod = year % 400; // Operaciones para verificar si el año es divisible por los valores
        mod2 = year % 4;
        mod3 = year % 100;
        if (mod == 0) // IFs anidados para la comprobación e impresión del mensaje final
        {
            cout << "El a\244o " << year << " es bisiesto.\n"; 
        } else if (mod2 == 0 && mod3 != 0)
        {
            cout << "El a\244o " << year << " es bisiesto.\n";
        } else
        {
            cout << "El a\244o " << year << " NO es bisiesto.\n";
        }

        cout << "Desea comprobar otro a\244o? (y/n)\n"; // Comprobación de la variable iniciadora del ciclo
        cin >> reply;

    }  
}
