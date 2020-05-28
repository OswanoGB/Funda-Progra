#include <iostream>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{   int frstNmbr;
        cout << "Escriba el número que quiere comprobar\n";
        cin >> frstNmbr;           

            if (frstNmbr == 0)
            {
            cout << "El número ingresado es 0."; 

            } else if (frstNmbr > 0)
            {
            cout << "El número ingresado es positivo";

            } else if (frstNmbr < 0)
            {
            cout << "El número ingresado es negativo";
            }
                
        cout << "\n¿Desea realizar otra operación? (y/n) ";
        cin >> reply;
}
} 
