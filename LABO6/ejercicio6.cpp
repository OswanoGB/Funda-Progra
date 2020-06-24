#include <iostream>
#include<stdlib.h>
#include<time.h> // Librería para introducir números aleatorios
#include <string.h>
using namespace std;
int main()
{
int index = 0;
int counter = 0;
int counter2 = 10;
int integerNmbr;
int nmbrArray[10];
char reply;
reply = 'y';

    while (reply == 'y' || reply == 'Y')
    {
            cout << "En el siguiente programa deberá introducir 10 números enteros\n";
            cout << "Posteriormente ingresará el número que desea saber la cantidad de veces que se repite\n";

            while (index < 10)
            {                 
                cout << "Ingrese un número\n" << "Números restantes: " << counter2 << "\n";
                cin >> nmbrArray[index];
                index = index + 1;
                counter2 = counter2 - 1;
            }  

    cout << "Ingrese el número que desea saber cuántas veces se repite\n";
    cin >> integerNmbr;

    index = 0;

        while (index < 10 )  
        {
            if (integerNmbr == nmbrArray[index])
            {
                counter = counter + 1;
            }
            index = index + 1;
        }   
    cout << "El número " << integerNmbr << " se repite " << counter << " veces.\n";
    cout << "Ingrese N para salir";
    cin >> reply;
    }
}
