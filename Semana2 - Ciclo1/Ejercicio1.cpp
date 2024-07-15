#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarK()
{
    int k;
    do
    {
        cout << "Ingrese K: "; cin >> k;
    } while (k < 1);
    return k;
}

void CalcularCantMonedas(int k)
{
    int a; //Monedas 5
    int b; //Monedas 2
    int c; //Monedas 1

    a = k / 5;
    b = (k % 5) / 2;
    c = ((k % 5) % 2) / 1;

    cout << endl << "Monedas de S/5: " << a << endl;
    cout << "Monedas de S/2: " << b << endl;
    cout << "Monedas de S/1: " << c << endl;
}

int main()
{
    int k = ValidarK();
    
    CalcularCantMonedas(k);


    system("pause>0");
    return 0;
}
