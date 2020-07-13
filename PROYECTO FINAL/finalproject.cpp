#include <iostream>
#include<stdlib.h>
#include <string>
#include <string.h>
using namespace std;

const int longCad = 20;
    
    struct costByProduct{ // Inicialización de la estructura
        char productName [longCad + 1];
        int quantity;
        float price;
        float totalPrice;
    };

void read_FillProductData (costByProduct productData[], int n) // Función para llenar la matríz
{   

    string mainCad;

    for (int i = 0; i < n; i++) // Llenado de estructura de matríz
    {
        
        cout << "PRODUCTO #:" << (i + 1) << "\n";
        cout << "NOMBRE DEL PRODUCTO:" << "\n";
        getline(cin, mainCad, '\n');
        strncpy(productData[i].productName, mainCad.c_str(), longCad);
        productData[i].productName[longCad] = '\0';
        cout << "CANTIDAD:" << "\n";
        cin >> productData[i].quantity;
        cout << "PRECIO UNITARIO: $" << "\n";
        cin >> productData[i].price;
        fflush(stdin);

    }

}

void calculateTotalPrice (costByProduct productData[], int n) // Función para calcular el total a pagar por producto
{

    for (int i = 0; i < n; i++) // Calculo recorriendo cada casilla del Array
    {
    
        productData[i].totalPrice = ( productData[i].price * productData[i].quantity );

    }
        

}

void printBill (costByProduct productData[], int n) // Función imprimir los datos recolectados en el Arreglo
{

    cout << "\nFACTURA DE COMPRA \n";

    for (int i = 0; i < n; i++) // Impresión de los datos recolectados en el Array
    {
    
        cout << "PRODUCTO #:" << (i + 1) << "\n";
        cout << "NOMBRE DEL PRODUCTO: " << productData[i].productName << "\n";
        cout << "CANTIDAD DE PRODUCTO: " << productData[i].quantity << "\n";
        cout << "PRECIO UNITARIO DEL PRODUCTO: " << productData[i].price << "\n";
        cout << "PRECIO TOTAL POR PRODUCTO: " << productData[i].totalPrice << "\n";

    }
        

}

float calculateTotal2Pay (costByProduct productData[], int n) // Función para calcular el total a pagar por la compra
{       

    float total2Pay = 0;

    for (int i = 0; i < n; i++) // Calculo recorriendo cada casilla del Array
    {
    
        total2Pay += productData[i].totalPrice;

    }
        
    return total2Pay;

}

int main() // Main en donde se declara la estructura que contrendrá el Array
{
    
    int n;

    cout << "Ingrese la cantidad de productos que desea ingresar";
    
    cin >> n;
    fflush(stdin);

    costByProduct productData[n]; // Declaración del Array

    read_FillProductData(productData, n);
    
    calculateTotalPrice(productData, n);
    
    printBill(productData, n);
    
    cout << "EL TOTAL A PAGAR POR SU COMPRA ES: $" << calculateTotal2Pay(productData, n);

}