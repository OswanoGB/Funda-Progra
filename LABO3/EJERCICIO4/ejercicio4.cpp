#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    char replyII = 'y';
    while (replyII == 'y' || replyII == 'Y')
    {
        int index = 0;
        char reply = 'y';
        int remaining = 10;

        string product_name [10];
        int product_quantity [10];
        float product_price [10];
        float total2pay = 0;

        cout << "CAJA RÁPIDA: Máximo 10 Productos";

        while (reply == 'y' || reply == 'Y')
        { 
            if (index <= 9)
            {
                cout << "\nHas ingresado: " << index << " de: " << remaining;
                cout << "\nIngrese el nombre de su producto: ";
                cin >> product_name[index];
                cout << "\nIngrese el precio de su producto: ";
                cin >> product_price[index];
                cout << "\nIngrese la cantidad de productos que comparará: ";
                cin >> product_quantity[index];

            

                cout << "\n¿Desea ingresar otro producto? (y/n): ";
                cout << "\n";
                cin >> reply;

                if (reply == 'y' || reply == 'Y')
                {
                    index+=1;
                }
    
            
            } else
            {
                cout << "\nHas superado el máximo de productos a ingresar (10)";
                reply='n';
            }
        }
            
        
        
        cout << "FACTURA";
        for (int i = 0; i <= index; i++)
        {
            cout << "\nPRODUCTO #" << (i + 1);
            cout << "\nPRODUCTO: " << product_name[i];
            cout << "\nPRECIO: " << product_price[i];
            cout << "\nCANTIDAD: " << product_quantity[i];
            cout << "\nTOTAL PRODUCTO #:" << (i + 1) << " $" << (product_quantity[i] * product_price[i]);
            total2pay += (product_quantity[i] * product_price[i]);
        }

        cout << "\nTOTAL A PAGAR: $" << total2pay;
        cout << "\n==============================";
        cout << "\n¿Desea realizar otra cuenta? (y/n)";
        cin >> replyII;
    }
}
