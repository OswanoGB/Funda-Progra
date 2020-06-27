#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

void fillGradesArray (float studentGrades[]) // Función para llenar la matríz
{   
    for (int i = 0; i < 5; i++) // Llenado de matríz
    {
        cout << "NOTA #:" << (i + 1) << "\n";
        cin >> studentGrades[i];
    }
}

void clcFnlGrd (float studentGrades[]) // Función para calcular y desplegar el promedio de cada alumno
{
    float fnlGrd = 0;

    for (int i = 0; i < 6; i++)
    {
        fnlGrd = fnlGrd + (studentGrades[i] * 0.2);
    }

    if (fnlGrd >= 6)
    {
        cout << "APROBADO con: " << fnlGrd << "\n";
    } else
    {
        cout << "REPROBADO con: " << fnlGrd << "\n";
    }   
}

int main() // Main
{
    float studentGrades[5];
    int quantity;

    cout << "De cuantos alumnos ingresará notas?";
    cin >> quantity;

    for (int i = 0; i < quantity; i++) // Ciclo para repetir según las instrucciones del usuario
    {
        cout << "Ingrese las notas de ALUMNO #" << i + 1 << "\n";
        fillGradesArray(studentGrades);
        clcFnlGrd(studentGrades);
    }
}
