#include <iostream>
using namespace std;
int main()
{
int hh, mm, ss;
char reply = 'y';
    while (reply == 'y' || reply == 'Y')
    {
    cout << "Ingrese la hora!\n";
    cin >> hh;
    while (hh < 0 || hh > 23)
    {
    cout << "Ingrese una hora válida (Recuerde que debe ser en formato 24h\n";
    cin >> hh;
    }
    cout << "Ingrese los minutos!\n";
    cin >> mm;
    while (mm < 0 || mm > 59)
    {
    cout << "Ingrese unos minutos válidos\n";
    cin >> mm;
    }
    cout << "Ingrese los segundos!\n";
    cin >> ss;
    while (ss < 0 || ss > 59)
    {
    cout << "Ingrese unos segundos válidos\n";
    cin >> ss;
    }
    ss = ss + 1;
        if (ss == 60)
        {
            mm = mm + 1;
            ss = 0;
                if (mm == 60)
        {
                hh = hh + 1;
                mm = 0;
                    if (hh == 24)
        {
                    hh = 0;
                    mm = 0;
                    ss = 0;
        }
        }
        } 
    if (hh >= 10 && mm >= 10 && ss >= 10)
    {
        cout << "La hora que usted ingresó luego de un segundo es: " << hh << ":" << mm << ":" << ss << ".\n";
    }
    if (hh < 10 && mm >= 10 && ss >= 10)
    {
        cout << "La hora que usted ingresó luego de un segundo es: 0" << hh << ":" << mm << ":" << ss << ".\n";
    }
    if (hh < 10 && mm < 10 && ss >= 10)
    {
        cout << "La hora que usted ingresó luego de un segundo es: 0" << hh << ":0" << mm << ":" << ss << ".\n";
    } 
    if (hh < 10 && mm < 10 && ss < 10)
    {
        cout << "La hora que usted ingresó luego de un segundo es: 0" << hh << ":0" << mm << ":0" << ss << ".\n";
    } 
    if (hh >= 10 && mm < 10 && ss >= 10)
    {
        cout << "La hora que usted ingresó luego de un segundo es: " << hh << ":0" << mm << ":" << ss << ".\n";
    } 
    if (hh >= 10 && mm >= 10 && ss < 10)
    {
        cout << "La hora que usted ingresó luego de un segundo es: " << hh << ":" << mm << ":0" << ss << ".\n";
    }
     if (hh >= 10 && mm < 10 && ss < 10)
    {
        cout << "La hora que usted ingresó luego de un segundo es: " << hh << ":0" << mm << ":0" << ss << ".\n";
    }
    cout << "Desea ingresar otra hora?\n";
    cin >> reply;
    }
} 
