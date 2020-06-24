#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;
int main()
{
        int index = 0;
        int oddNmbrs[100];
        int counter = 1;

        string xd;
        cout << "Ingrese cualquier dato para iniciar\n";
        cin >> xd;
        cout << "PRIMEROS 100 NÚMEROS IMPARES MOSTRADOS EN ORDEN DESCENDENTE\n"; 
        while (xd != "{")
        {
            while (index < 100)
            {   
                if (index == 0)
                {
                    oddNmbrs[index] = 1;
                    index = index + 1;
                }
                
                oddNmbrs[index] = oddNmbrs[index - 1] + 2;
                index = index + 1;
            }  

        index = 99;

            while (counter != 101)
            {
                cout << counter << ": " << oddNmbrs[index] << "\n";
                index = index - 1; 
                counter = counter + 1;
            }      
        }

        

      
}
