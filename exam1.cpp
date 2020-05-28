#include <iostream>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{   float a;
    float b;
    float c;
    float average;
        cout << "Ingrese el primer valor entero: ";
            cin >> b;           
        cout << "Ingrese el segundo valor entero: ";
            cin >> c;
        /* cout << "Ingrese el tercer valor entero: ";
            cin >> number_3;*/
                a = b * 10 + c++ ;
                cout << "El promedio de los 3 valores ingresados es: " << a;
        cout << "\n¿Desea realizar otra operación? (y/n) ";
        cin >> reply;
}
}   

#include <iostream>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{   float number_1;
    float number_2;
    float number_3;
    float average;
        cout << "Ingrese el primer valor entero: ";
            cin >> number_1;           
        cout << "Ingrese el segundo valor entero: ";
            cin >> number_2;
        cout << "Ingrese el tercer valor entero: ";
            cin >> number_3;
                average = (number_1+number_2+number_3) / 3;
                cout << "El promedio de los 3 valores ingresados es: " << average;
        cout << "\n¿Desea realizar otra operación? (y/n) ";
        cin >> reply;
}
}   