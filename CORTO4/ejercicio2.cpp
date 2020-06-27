#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

float average (float heightArray[]) // Función para obtener y devolver la media 
{
    float total = 0.0;

    for (int i = 0; i < 25; i++) // Obtención del acumulado de estaturas
    {
        total = total + heightArray[i];
    }

    float average = total / 25.0; // Obtención del promedio de estaturas

    return average; // Devuelve el valor de la media aritmética
}

void quantityUnderAbove (float heightArray[]) // Función para comparar las estaturas
{
    int counterAbove = 0;
    int counterUnder = 0;

    for (int i = 0; i < 25; i++) // Acumulación de contadores
    {
        if (heightArray[i] > average(heightArray))
        {
            counterAbove++;

        } else if (heightArray[i] < average(heightArray))
        {
            counterUnder++;
        }
    }

    cout << "La cantidad de alumnos que están por encima de la media de estatura son: " << counterAbove << "\n";
    cout << "La cantidad de alumnos que están por debajo de la media de estatura son: " << counterUnder << "\n"; // Impresión de contadores
    
}

int main() // Main
{
    float heightArray[25];
    int counter = 1;

    cout << "Ingrese la estatura de los 25 estudiantes\n";
   
   for (int i = 0; i < 25; i++) // Llenado del arreglo de alturas
    {
        cout << "ALUMNO # " << counter << ":";
        cin >> heightArray[i];
        cout << ":";
        counter++;
    }

    cout << "La media aritmética de las estaturas de los 25 alumnos es: " << average(heightArray) << "m\n";
    quantityUnderAbove(heightArray); // Impresión de datos de media aritmética y comparación de estaturas

}