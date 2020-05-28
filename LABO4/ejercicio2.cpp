#include <iostream>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{   int frstNmbr;
    float modValue;
    float rsltDv;

        cout << "Escriba el número que quiere comprobar\n";
        cin >> frstNmbr;           
                modValue = frstNmbr % 2;
        if (modValue == 1)
        {
            cout << "El número ingresado es impar."; 
        } else
        {
            cout << "El número ingresado es par.";
        }
        
        cout << "\n¿Desea realizar otra operación? (y/n) ";
        cin >> reply;
}
} 
