#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

char ValidarZonaElegida()
{
    char zona;
    do
    {
        cout << "Ingrese la zona elegida (Vip, Platea, Popular): "; cin >> zona;
        zona = toupper(zona);
    } while (zona != 'V' && zona != 'P' && zona != 'E');
    return zona;
}

int ValidarNumEntradas()
{
    int entradas;
    do
    {
        cout << "Ingrese el numero de entradas: "; cin >> entradas;
    } while (entradas < 1);
    return entradas;
}

char ValidarEsSocio()
{
    char esSocio;
    do
    {
        cout << "Es socio de la U (S: si; N: no): "; cin >> esSocio;
    } while (esSocio != 'S' && esSocio != 'N');
    return esSocio;
}

void MontoPagar(char zona, int entradas, char esSocio)
{
    double Precio = 0;
    double MontoPagar = 0;
    double descuentoEntradas;
    double descuentoSocio;
    double descuentoTotal;
    if (zona == 'V')
    {
        Precio = 350.00;
        if (entradas >= 3 && entradas <= 6)
        {
            descuentoEntradas = 0.05 * Precio;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
        else if (entradas >= 7 && entradas <= 9)
        {
            descuentoEntradas = 0.075 * Precio;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
        else if (entradas > 9)
        {
            descuentoEntradas = 0.1 * Precio;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
        else
        {
            descuentoEntradas = 0;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
    }
    else if (zona == 'P')
    {
        Precio = 130.00;
        if (entradas >= 3 && entradas <= 6)
        {
            descuentoEntradas = 0.05 * Precio;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
        else if (entradas >= 7 && entradas <= 9)
        {
            descuentoEntradas = 0.075 * Precio;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
        else if (entradas > 9)
        {
            descuentoEntradas = 0.1 * Precio;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
        else
        {
            descuentoEntradas = 0;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
    }
    else
    {
        Precio = 50.00;
        if (entradas >= 3 && entradas <= 6)
        {
            descuentoEntradas = 0.05 * Precio;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
        else if (entradas >= 7 && entradas <= 9)
        {
            descuentoEntradas = 0.075 * Precio;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
        else if (entradas > 9)
        {
            descuentoEntradas = 0.1 * Precio;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
        else
        {
            descuentoEntradas = 0;
            if (esSocio == 'S')
            {
                descuentoSocio = 0.08 * Precio;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
            else
            {
                descuentoSocio = 0;
                descuentoTotal = descuentoEntradas + descuentoSocio;
            }
        }
    }

    MontoPagar = (Precio - descuentoTotal) * entradas;

    cout << endl << "El monto a pagar es: S/" << MontoPagar << endl;
}

int main()
{
    char zona = ValidarZonaElegida();
    int entradas = ValidarNumEntradas();
    char esSocio = ValidarEsSocio();

    MontoPagar(zona, entradas, esSocio);

    system("pause>0");
    return 0;
}
