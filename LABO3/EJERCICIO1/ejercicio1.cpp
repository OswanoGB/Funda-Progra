#include <iostream>
using namespace std;
int main()
{
char reply;
reply = 'y';
while (reply == 'y' || reply == 'Y')
{   int x;
    float y;

        cout << "y: ";
            cin >> x;           
                y = x % 18;
                cout << "y: " << y;
        cout << "\n¿Desea realizar otra operación? (y/n) ";
        cin >> reply;
}
} 
