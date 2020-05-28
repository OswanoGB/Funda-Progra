#include <iostream>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{   string choose;
    float iva;
    float dollarsxd;
    float totaliva;
        cout << "Países disponibles para elegir: ";
        cout << "\n-El Salvador (Escribir: ElSalvador)";
        cout << "\n-Guatemala";
        cout << "\n-Honduras";
        cout << "\n-España";
        cout << "\nIngrese la cantidad de dinero para calcular el IVA \n";
        cin >> dollarsxd;
        cout << "\nIngrese el país que desea seleccionar \n";
        cin >> choose;
            if (choose == "ElSalvador" || choose == "Elsalvador" || choose == "elsalvador")
            {
                totaliva = dollarsxd * 0.13;
            } else if (choose == "España" || choose == "españa")
            {
                totaliva = dollarsxd * 0.2;
            } else if (choose == "Guatemala" || choose == "guatemala")
            {
                totaliva = dollarsxd * 0.09;
            } else if (choose == "Honduras" || choose == "honduras")
            {
                totaliva = dollarsxd * 0.15;
            }  
        cout << "El total de IVA a cancelar por la cantidad de: $" << dollarsxd << ". En " << choose << " es: $" << totaliva;
        cout << "\n¿Desea realizar otro cálculo? (y/n) ";
        cin >> reply;
}
}   

