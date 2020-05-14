#include <iostream>
#include <math.h>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{
    int a;
    int b;
    int c;

    float total1;
    float total2;
    float step1;
    float step2;
    float step3;

        cout << "Ingrese el valor de a: ";
        cin >> a;
        cout << "Ingrese el valor de b: ";
        cin >> b;
        cout << "Ingrese el valor de c: ";
        cin >> c;

            step1 = (b*b) - (4*a*c);
            step2 = (2*a);
            step3 = sqrt (step1);
            total1 = (-b+step3)/step2;
            total2 = (-b-step3)/step2;

        /* cout << "STEP 1: " << step1;
        cout << " STEP 2: " << step2;
        cout << " STEP 3: " << step3; 
        */
                cout << "RESULTADO:";
                cout << "\nX1= " << total1 << "  X2= " << total2;
                cout << "\n¿Desea realizar otra operación? (y/n) ";
                cin >> reply;
}
}