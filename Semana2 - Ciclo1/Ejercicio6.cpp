#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarLado1()
{
    int Lado1;
    do
    {
        cout << "Ingrese Lado 1: "; cin >> Lado1;
    } while (Lado1 < 1);
    return Lado1;
}

int ValidarLado2()
{
    int Lado2;
    do
    {
        cout << "Ingrese Lado 2: "; cin >> Lado2;
    } while (Lado2 < 1);
    return Lado2;
}

int ValidarLado3()
{
    int Lado3;
    do
    {
        cout << "Ingrese Lado 3: "; cin >> Lado3;
    } while (Lado3 < 1);
    return Lado3;
}

//Lado1 = a
//Lado2 = b
//Lado3 = c
bool ExistenciaTriangulo(int Lado1, int Lado2, int Lado3)
{
    return ((Lado1 + Lado2 > Lado3) && (Lado1 + Lado3 > Lado2) && (Lado2 + Lado3 > Lado1));
}

void TipoTriangulo(int Lado1, int Lado2, int Lado3)
{
    char equi;
    char iso;
    char esca;
    if (ExistenciaTriangulo(Lado1, Lado2, Lado3))
    {
        if (Lado1 == Lado2 && Lado2 == Lado3)
        {
            equi = 86;
        }
        else
        {
            equi = 70;
        }

        if (Lado1 != Lado2 && Lado2 != Lado3 && Lado1 != Lado3)
        {
            esca = 86;
        }
        else
        {
            esca = 70;
        }

        if ((Lado1 == Lado2 && Lado1 != Lado3) || (Lado1 == Lado3 && Lado1 != Lado2) || (Lado2 == Lado1 && Lado2 != Lado3) || (Lado2 == Lado3 && Lado2 != Lado1) || (Lado3 == Lado1 && Lado3 != Lado2) || (Lado3 == Lado2 && Lado3 != Lado1))
        {
            iso = 86;
        }
        else
        {
            iso = 70;
        }

        cout << endl << "Equilatero: " << equi << endl;
        cout << "Isosceles: " << iso << endl;
        cout << "Escaleno: " << esca << endl;
    }
    else
    {
        cout << endl << "No es un triangulo valido" << endl;
    }
}

int main()
{
    int Lado1 = ValidarLado1();
    int Lado2 = ValidarLado2();
    int Lado3 = ValidarLado3();

    TipoTriangulo(Lado1, Lado2, Lado3);

    system("pause>0");
    return 0;
}
