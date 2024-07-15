#include "pch.h"
#include "iostream"
#include "cmath"

using namespace System;
using namespace std;

double DistanciaEntreDosPuntos(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

double AnguloConHorizontal(int x1, int y1, int x2, int y2)
{
    if (x2 - x1 == 0)
    {
        return 90.0;
    }
    return (atan(1.0 * (abs(y2 - y1)) / abs(x2 - x1))) * 180 / 3.1416;
}

void MostrarDatos(int x1, int y1, int x2, int y2)
{
    cout << endl << "Distancia entre los dos puntos: " << DistanciaEntreDosPuntos(x1, y1, x2, y2) << endl;
    cout << "Angulo que forma la recta que los une con la horizontal: " << AnguloConHorizontal(x1, y1, x2, y2) << " grados" << endl;
}

int main()
{
    int x1, y1; //Coords Punto1
    int x2, y2; //Coords Punto2

    cout << "PUNTO 1" << endl;
    cout << "Ingrese x1: "; cin >> x1;
    cout << "Ingrese y1: "; cin >> y1;

    cout << endl << "PUNTO 2" << endl;
    cout << "Ingrese x2: "; cin >> x2;
    cout << "Ingrese y2: "; cin >> y2;

    MostrarDatos(x1, y1, x2, y2);

    system("pause>0");
    return 0;
}
