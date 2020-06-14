#include <iostream>
#include<stdlib.h>
#include<time.h> // Librería para introducir números aleatorios
#include <string.h>
using namespace std;
int main()
{
char replyII = 'y';
    while (replyII == 'y' || replyII == 'Y')
    {
        int index = 0;
        char reply = 'y';

        string nombreEmpleado [20]; //Declaración de variables tipo arreglo
        int horasTrabajadas [20];
        int horasExtraTrabajadas [20];
        float salarioBruto [20];
        float salarioNeto [20];
        float afpDescontada [20];
        float seguroDescontado [20];
        float rentaDescontada [20];

        cout << "Favor ingrese los datos solicitados de los empleados.";

        while (reply == 'y' || reply == 'Y')
        { 
                cout << "\nIngrese el nombre del empleado: ";
                cin >> nombreEmpleado[index];
                cout << "\nIngrese el las horas trabajadas: ";
                cin >> horasTrabajadas[index];
                cout << "\nIngrese las horas extras trabajadas: ";
                cin >> horasExtraTrabajadas[index];

                salarioBruto[index] = (horasTrabajadas[index] * 1.75) + (horasExtraTrabajadas[index] * 2.50); // Inician las operaciones para calcular el salario NETO
                afpDescontada[index] = salarioBruto[index] * 0.0625;
                seguroDescontado[index] = salarioBruto[index] * 0.04;
                rentaDescontada[index] = salarioBruto[index] * 0.1;
                salarioNeto[index] = salarioBruto[index] - (afpDescontada[index] + seguroDescontado[index] + rentaDescontada[index]);

                cout << "\n¿Desea ingresar datos de otro empleado? (y/n): ";
                cout << "\n";
                cin >> reply;

                if (reply == 'y' || reply == 'Y')
                {
                    index+=1; //Contador para aumentar el espacio que utilizarán los próximos datos a ingresar en el arreglo
                }
           }
            
        
        
        cout << "REPORTE";
        for (int i = 0; i <= index; i++) //Ciclo para poder imprimir todas las variables almacenadas
        {
            cout << "\nEMPLEADO #" << (i + 1);
            cout << "\nNOMBRE DEL EMPLEADO: " << nombreEmpleado[i];
            cout << "\nSALARIO BRUTO DEL EMPLEADO: $" << salarioBruto[i];
            cout << "\nSALARIO NETO DEL EMPLEADO: $" << salarioNeto[i];
        }

        cout << "\n¿Desea realizar otro reporte de salarios de empleados? (y/n)";
        cin >> replyII;
    }
}
