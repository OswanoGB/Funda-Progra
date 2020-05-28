#include <iostream>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{   int frstNmbr;
    int scndNmbr;
    float modValue;
    float rsltDv;

        cout << "Escriba el primer número\n";
        cin >> frstNmbr;
        cout << "Escriba el segundo número\n";
        cin >> scndNmbr;           
                modValue = frstNmbr % scndNmbr;
                rsltDv = frstNmbr / scndNmbr;
        if (modValue == 0)
        {
            cout << "Los números ingresados sí son divisibles entre sí y el resultado de la división es: " << rsltDv; 
        } else
        {
            cout << "Los números ingresados no son divisibles entre sí";
        }
        
        cout << "\n¿Desea realizar otra comprobacion? (y/n) ";
        cin >> reply;
}
} 
