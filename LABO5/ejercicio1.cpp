#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    char reply = 'y';
    while (reply == 'y' || reply == 'Y')
    {
        int dividendo, divisor, mod, mcd;
    cout << "Ingrese el primer número\n";
    cin >> dividendo;
    cout << "Ingrese el segundo número\n";
    cin >> dividendo;
    mod = dividendo % divisor;
    if(mod == 0){
        cout << "\nEl MCD es: " << divisor;
       }
    while(!mod == 0)
    {
    dividendo = divisor;
    divisor = mod;
    mod = dividendo % divisor;
     if(dividendo % divisor == 0){
        cout << "\nEl MCD es: " << divisor;
        break;
     }
    }
    cout << "\n¿Desea realizar otra operación? (y/n)\n";
    cin >> reply;
    }
    
    
} 
