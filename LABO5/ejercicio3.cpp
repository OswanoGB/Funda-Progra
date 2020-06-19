#include <iostream>
#include <string.h>
using namespace std;

bool bisiestYear (int year)
{
    int mod;
    int mod2;
    int mod3;
    bool answer;


        mod = year % 400; 
        mod2 = year % 4;
        mod3 = year % 100;
        if (mod == 0) 
        {
            answer = true; 
        } else if (mod2 == 0 && mod3 != 0)
        {
            answer = true;
        } else
        {
            answer = false;
        }

        return answer;
}

int main()
{ 
    int year;
    cout << "Ingrese el a\244o que desea comprobar:\n";
    cin >> year;
    cout << "0 = A\244o NO bisiesto\n";
    cout << "1 = A\244o bisiesto\n";
    cout << "RESPUESTA: " << bisiestYear(year) << "\n";
    cin >> year;
}
