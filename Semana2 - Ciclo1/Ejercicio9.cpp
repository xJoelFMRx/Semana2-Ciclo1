#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

long long ValidarCodigo()
{
    long long codigo;
    do
    {
        cout << "Ingrese codigo de barras: "; cin >> codigo;
    } while (codigo < 100000000000 || codigo > 999999999999);
    return codigo;
}

void ImprimirDatos(long long codigo)
{
    int a; //Dia de vencimiento
    int b; //Mes de vencimiento
    int c; //Año de vencimiento
    char d; //Tipo producto
    int e; //Producto perecible
    int perecible; //Si es perecible o no

    a = codigo / 10000000000;
    b = (codigo % 10000000000) / 100000000;
    c = ((codigo % 10000000000) % 100000000) / 10000;
    d = (((codigo % 10000000000) % 100000000) % 10000) / 100;
    e = (((codigo % 10000000000) % 100000000) % 10000) % 100;

    cout << endl << "Dia de vencimiento: " << a << endl;
    cout << "Mes de vencimiento: " << b << endl;
    cout << "Anual de vencimiento: " << c << endl;
    cout << "El tipo de producto es: " << d << endl;
    if (e == 00)
    {
        perecible = 1;
    }
    else
    {
        perecible = 0;
    }
    cout << "Producto perecible (0: No; 1: Si): " << perecible << endl;
}

int main()
{
    long long codigo = ValidarCodigo();

    ImprimirDatos(codigo);

    system("pause>0");
    return 0;
}
