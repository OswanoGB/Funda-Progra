#include <iostream>
#include<stdlib.h>
#include<time.h> // Librería para introducir números aleatorios
#include <string.h>
using namespace std;
int main()
{
int secretNumber, counter, userNumber, remaining;
char reply;

srand(time(NULL)); // Inicialización de números aleatorios
secretNumber = 1+rand()%(101-1); // Asignamos a la variable un número aleatorio entre 1 y 100
reply = 'y';
counter = 0;

cout << "Bienvenido al juego de EL NÚMERO MÁGICO\n";
cout << "Tendrás 5 intentos para adivinar el un número del 1 al 100\n";
cout << "Podrás salir del juego en cualquier momento presionando la tecla N cuando te lo pidan\n";

while (reply = 'y' && counter < 5) // Definimos las condiciones del ciclo
{
    counter = counter + 1; // Contador para establecer un límite de intentos
    remaining = 5 - counter;
 
    cout << "INTENTO #" << counter << ".\n"; 
    cin >> userNumber;

    if (userNumber > secretNumber) // IFs anidados para brindar las pistas
    {
        cout << "El numero que ingresaste es mayor que el número secreto\n";
        
    } else if (userNumber < secretNumber)
    {
        cout << "El numero que ingresaste es menor que el número secreto\n";
    } else if (userNumber == secretNumber)
    {
        break;
    }

    cout << "Te quedan: " << remaining << " intentos.\n";
    cout << "¿Quieres seguir intentando? (y/n)\n";
    cin >> reply;
    if (reply == 'n' || reply == 'N') // Si el usuario responde N o n inmediatamente finaliza el ciclo
    {
        break;
    }
     
}

if (userNumber == secretNumber) // Condición para definir el mensaje final
{
    cout << "FELICIDADES! Has GANADO!\n";
    cout << "Ingrese cualquier valor para salir!\n";
    cin >> reply;
} else if (userNumber != secretNumber) // Condición para definir el mensaje final
{
    cout << "Lo sentimos, no lo lograste :(" << " El número secreto era: " << secretNumber << "\n";
    cout << "Ingrese cualquier valor para salir!\n";
    cin >> reply;
} 
}