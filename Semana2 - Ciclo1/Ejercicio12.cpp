#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarTipoPizza()
{
    int tipo;
    do
    {
        cout << "Tipo de pizza [1, 2, 3]: "; cin >> tipo;
    } while (tipo < 1 || tipo > 3);
    return tipo;
}

double ValidarPrecioUnitario()
{
    double preciounitario;
    do
    {
        cout << "Precio unitario: "; cin >> preciounitario;
    } while (preciounitario < 20 || preciounitario > 60);
    return preciounitario;
}

void TotalPagar(int tipo, double preciounitario)
{
    double TotalPagar = 0;
    double descuento;
    if (tipo == 1)
    {
        descuento = 0.1 * preciounitario;
        TotalPagar = preciounitario - descuento;
    }
    if (tipo == 2)
    {
        descuento = 0.15 * preciounitario;
        TotalPagar = preciounitario - descuento;
    }
    if (tipo == 3)
    {
        descuento = 0.2 * preciounitario;
        TotalPagar = preciounitario - descuento;
    }

    cout << endl << "Total a pagar: " << TotalPagar << endl;
}

int main()
{
    int tipo = ValidarTipoPizza();
    double preciounitario = ValidarPrecioUnitario();

    TotalPagar(tipo, preciounitario);

    system("pause>0");
    return 0;
}
