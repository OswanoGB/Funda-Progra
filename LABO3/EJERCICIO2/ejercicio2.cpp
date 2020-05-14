#include <iostream>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{
    float radio;
    float area;
    float perimetro;
    const float PI = 3.1416;
        cout << "Ingrese el primer valor del radio del círculo: ";
            cin >> radio;
            area = PI * (radio*radio);
            perimetro = 2 * PI * radio;  
        cout << "El círculo cuyo radio es: " << radio << ", tiene un área de:" << area;
        cout << "\nEl círculo cuyo radio es: " << radio << ", tiene un perímetro de:" << perimetro;
        cout << "\n¿Desea realizar otra operación? (y/n) ";
        cin >> reply;
}
}