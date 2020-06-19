#include <iostream>
using namespace std;

int main()
{
    int day, month, year, mod, mod2, mod3, bisiest;
    char reply = 'y';

    while (reply == 'y' || reply == 'Y')
    {
        cout << "Ingrese el a\244o!\n";
        cin >> year;

        while (year < 1)
        {
            cout << "Ingrese un a\244o válido\n";
            cin >> year;
        }

        mod = year % 400; 
        mod2 = year % 4;
        mod3 = year % 100;

        if (mod == 0) 
        {
            bisiest = 1; 
        } else if (mod2 == 0 && mod3 != 0)
        {
            bisiest = 1;
        } else
        {
            bisiest = 0;
        }

        cout << "Ingrese mes!\n";
        cin >> month;
        
        while (month < 1 || month > 12)
        {
            cout << "Ingrese un mes válido\n";
            cin >> month;
        }

        cout << "Ingrese el día!\n";
        cin >> day;

        switch (month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                while (day < 1 || day > 31)
                {
                    cout << "Ingrese un día válido\n";
                    cin >> day;      
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                while (day < 1 || day > 30)
                {
                    cout << "Ingrese un día válido\n";
                    cin >> day;      
                }
                break;
            case 2:
                if (bisiest == 1)
                {   
                    while (day < 1 || day > 29)
                    {
                        cout << "Ingrese un día válido\n";
                        cin >> day;      
                    }           
                } else
                {
                    while (day < 1 || day > 28)
                    {
                        cout << "Ingrese un día válido\n";
                        cin >> day;      
                    }  
                }
                break;
            default:
                break;
        }
        
        day = day + 1;

        switch (month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (day == 32)
                {
                    day = 1;
                    month = month + 1;

                    if (month == 13)
                    {
                        month = 1;
                        year = year + 1;
                    }
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (day == 31)
                {
                    day = 1;
                    month = month + 1;

                    if (month == 13)
                    {
                        month = 1;
                        year = year + 1;
                    }
                }
                break;
            case 2:
                if (bisiest == 1)
                {
                    if (day == 30)
                    {
                        day = 1;
                        month = month + 1;

                        if (month == 13)
                        {
                            month = 1;
                            year = year + 1;
                        }
                    }
                } else
                {
                    if (day == 29)
                    {
                        day = 1;
                        month = month + 1;

                        if (month == 13)
                        {
                            month = 1;
                            year = year + 1;
                        }
                    }
                }
                break;
            default:
                break;
        }

        cout << "La fecha que usted ingresó luego de un día es: " << day << "/" << month << "/" << year << ".\n";
        cout << "Desea ingresar otra fecha?\n";
        cin >> reply;
    }
}