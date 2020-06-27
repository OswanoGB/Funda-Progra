#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;

string bat (string uncoded) // Función para codificar la cadena de texto
{
    int phraseLenght;
    phraseLenght = uncoded.size(); // Obtención de la longitud de la cadena
    char uncodedArray[phraseLenght + 1]; // Declaración del Arreglo
    int index = 0;
     
    strcpy (uncodedArray, uncoded.c_str()); // Método para copiar la cadena de texto en un arreglo de caracteres

     
    for (char x: uncodedArray) // "For each" para recorrer y operar los elementos del arreglo
    {
        switch (x) // Switch para codificar la cadena de texto
        {
            case 'm':
                x = '0';
                break;

            case 'u':
                x = '1';
                break;

            case 'r':
                x = '2';
                break;

            case 'c':
                x = '3';
                break;

            case 'i':
                x = '4';
                break;

            case 'e':
                x = '5';
                break;

            case 'l':
                x = '6';
                break;

            case 'a':
                x = '7';
                break;

            case 'g':
                x = '8';
                break;

            case 'o':
                x = '9';
                break;
            
            case ' ':
                x = ' ';
                break;

            default:
                break;
        }

         cout << x; // Impresión de la cadena de texto codificada
    }
    
}

int main() // Main
{
    string uncoded;
    cout << "Por favor ingrese la palabra o frase que desea codificar\n";
    getline (cin, uncoded); // Lectura de la cadena de texto
    bat (uncoded); // Llamada a la función creada
}
