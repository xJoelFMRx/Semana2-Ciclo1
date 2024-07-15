#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

double ValidarX()
{
    double x;
    do
    {
        cout << "Ingrese la coordenada X: "; cin >> x;
    } while (x == 0);
    return x;
}

double ValidarY()
{
    double y;
    do
    {
        cout << "Ingrese la coordenada Y: "; cin >> y;
    } while (y == 0);
    return y;
}

void LocalizarCuadrante(double x, double y)
{
    if (x > 0 && y > 0)
    {
        cout << endl << "El punto se encuentra en el cuadrante 1" << endl;
    }
    if (x < 0 && y > 0)
    {
        cout << endl << "El punto se encuentra en el cuadrante 2" << endl;
    }
    if (x < 0 && y < 0)
    {
        cout << endl << "El punto se encuentra en el cuadrante 3" << endl;
    }
    if (x > 0 && y < 0)
    {
        cout << endl << "El punto se encuentra en el cuadrante 4" << endl;
    }
}

int main()
{
    double x = ValidarX();
    double y = ValidarY();

    LocalizarCuadrante(x, y);

    system("pause>0");
    return 0;
}
