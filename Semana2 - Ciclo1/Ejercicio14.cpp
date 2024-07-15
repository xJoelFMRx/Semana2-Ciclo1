#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

char ValidarModelo()
{
    char modelo;
    do
    {
        cout << "Ingrese el modelo: "; cin >> modelo;
    } while (modelo != 'A' && modelo != 'B');
    return modelo;
}

char ValidarColor()
{
    char color;
    do
    {
        cout << "Color (B: blanco; M: metalizado; O: otros): "; cin >> color;
    } while (color != 'B' && color != 'M' && color != 'O');
    return color;
}

int ValidarEdad()
{
    int edad;
    do
    {
        cout << "Edad: "; cin >> edad;
    } while (edad < 18 || edad > 65);
    return edad;
}

void PrecioSeguro(char modelo, char color, int edad)
{
    double Precio = 0;
    double incremento;
    if (modelo == 'A')
    {
        if (color == 'B')
        {
            Precio = 240.50;
            if (edad < 31)
            {
                incremento = 0.25 * Precio;
                Precio += incremento;
            }
            if (edad >= 31 && edad <= 65)
            {
                incremento = 0;
                Precio += incremento;
            }
            if (edad > 65)
            {
                incremento = 0.1 * Precio;
                Precio += incremento;
            }
        }
        else if (color == 'M')
        {
            Precio = 330.00;
            if (edad < 31)
            {
                incremento = 0.25 * Precio;
                Precio += incremento;
            }
            if (edad >= 31 && edad <= 65)
            {
                incremento = 0;
                Precio += incremento;
            }
            if (edad > 65)
            {
                incremento = 0.1 * Precio;
                Precio += incremento;
            }
        }
        else
        {
            Precio = 270.50;
            if (edad < 31)
            {
                incremento = 0.25 * Precio;
                Precio += incremento;
            }
            if (edad >= 31 && edad <= 65)
            {
                incremento = 0;
                Precio += incremento;
            }
            if (edad > 65)
            {
                incremento = 0.1 * Precio;
                Precio += incremento;
            }
        }
    }
    if (modelo == 'B')
    {
        if (color == 'B')
        {
            Precio = 300.00;
            if (edad < 31)
            {
                incremento = 0.25 * Precio;
                Precio += incremento;
            }
            if (edad >= 31 && edad <= 65)
            {
                incremento = 0;
                Precio += incremento;
            }
            if (edad > 65)
            {
                incremento = 0.1 * Precio;
                Precio += incremento;
            }
        }
        else if (color == 'M')
        {
            Precio = 360.50;
            if (edad < 31)
            {
                incremento = 0.25 * Precio;
                Precio += incremento;
            }
            if (edad >= 31 && edad <= 65)
            {
                incremento = 0;
                Precio += incremento;
            }
            if (edad > 65)
            {
                incremento = 0.1 * Precio;
                Precio += incremento;
            }
        }
        else
        {
            Precio = 330.00;
            if (edad < 31)
            {
                incremento = 0.25 * Precio;
                Precio += incremento;
            }
            if (edad >= 31 && edad <= 65)
            {
                incremento = 0;
                Precio += incremento;
            }
            if (edad > 65)
            {
                incremento = 0.1 * Precio;
                Precio += incremento;
            }
        }
    }

    cout << endl << "Precio del seguro: $" << Precio << endl;
}

int main()
{
    char modelo = ValidarModelo();
    char color = ValidarColor();
    int edad = ValidarEdad();

    PrecioSeguro(modelo, color, edad);

    system("pause>0");
    return 0;
}
