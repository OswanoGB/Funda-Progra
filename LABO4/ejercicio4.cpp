#include <iostream>
#include <string.h>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{   string wrd;
    int wrdLnght;

        cout << "Escriba una palabra\n";
        cin >> wrd; 
        wrdLnght = wrd.size();

            if (wrdLnght > 10 && (wrdLnght % 2 == 0))
            {
                cout << "La palabra ingresada tiene más de 10 carácteres y tiene una cantidad par de carácteres\n";

            } else if (wrdLnght > 10 && (wrdLnght % 2 != 0))
            {
                cout << "La palabra ingresada tiene más de 10 carácteres y tiene una cantidad impar de carácteres\n";

            } else if (wrdLnght < 10 && (wrdLnght % 2 == 0))
            {
                cout << "La palabra ingresada tiene menos de 10 carácteres y tiene una cantidad par de carácteres\n";

            } else if (wrdLnght < 10 && (wrdLnght % 2 != 0))
            {
                cout << "La palabra ingresada tiene menos de 10 carácteres y tiene una cantidad impar de carácteres\n";
            }
        cout << "\n¿Desea realizar otra operación? (y/n) ";
        cin >> reply;
}
} 