#include <iostream>
#include <string.h>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{   string wrd;
    string sbWrd1;
    string sbWrd2;
    int wrdLnght;

        cout << "Escriba una palabra\n";
        cin >> wrd; 
        wrdLnght = wrd.size();
        sbWrd1 = wrd.substr(0,1);
        sbWrd2 = wrd.substr(wrdLnght -1, 1);

            if (sbWrd1 == sbWrd2)
            {
                cout << "La palabra ingresada inicia y finaliza con la misma letra";
            } else
            {
                cout << "La palabra ingresada NO inicia y finaliza con la misma letra";
            }

        cout << "\n¿Desea realizar otra comprobación? (y/n) ";
        cin >> reply;
}
} 