#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarLitrosConsumidos()
{
    int numlitrosconsumidos;
    do
    {
        cout << "Ingrese el numero de litros consumidos: "; cin >> numlitrosconsumidos;
    } while (numlitrosconsumidos < 1);
    return numlitrosconsumidos;
}

void CalcularGastoAgua(int numlitrosconsumidos)
{
    double GastoAgua = 0;
    if (numlitrosconsumidos <= 50)
    {
        GastoAgua = 20;
    }
    if (numlitrosconsumidos >= 51 && numlitrosconsumidos <= 200)
    {
        GastoAgua = 20 + 50 * 0 + (numlitrosconsumidos - 50) * 2;
    }
    if (numlitrosconsumidos > 200)
    {
        GastoAgua = 20 + 50 * 0 + (numlitrosconsumidos - 50 - (numlitrosconsumidos - 200)) * 2 + (numlitrosconsumidos - 200) * 3.5;
    }

    cout << endl << "El pago a realizar por el gasto de agua es: S/" << GastoAgua << endl;
}

int main()
{
    int numlitrosconsumidos = ValidarLitrosConsumidos();

    CalcularGastoAgua(numlitrosconsumidos);

    system("pause>0");
    return 0;
}
