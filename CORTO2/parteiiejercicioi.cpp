#include <iostream>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{   string choose;
    float giveaway;
        cout << "Colores disponibles para elegir: ";
        cout << "\n-Negro";
        cout << "\n-Amarillo";
        cout << "\n-Rojo";
        cout << "\n-Azul";
        cout << "\n-Verde";
        cout << "\nIngrese el color que desea seleccionar \n";
        cin >> choose;
            if (choose == "negro" || choose == "Negro")
            {
                giveaway = 100;
            } else if (choose == "amarillo" || choose == "Amarillo")
            {
                giveaway = 10;
            } else if (choose == "rojo" || choose == "Rojo")
            {
                giveaway = 5;
            } else if (choose == "Azul" || choose == "azul")
            {
                giveaway = 3;
            } else if (choose == "verde" || choose == "Verde")
            {
                giveaway = 2;
            }    
        cout << "Su premio por haber elegido el color " << choose << " es: $" << giveaway;
        cout << "\n¿Desea realizar otra elección? (y/n) ";
        cin >> reply;
}
}   

