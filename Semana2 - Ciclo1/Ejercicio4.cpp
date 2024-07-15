#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

double ValidarDiametroPizza()
{
    double diametro;
    do
    {
        cout << "Ingrese los centimetros de diametro de las pizzas: "; cin >> diametro;
    } while (diametro < 20);
    return diametro;
}

int ValidarCantIngredientesExtras()
{
    int cantingrextras;
    do
    {
        cout << "Ingrese la cantidad de ingredientes extras que llevara la pizza: "; cin >> cantingrextras;
    } while (cantingrextras < 1);
    return cantingrextras;
}

void PrecioPizza(double Diametro, int CantIngredientesExtras)
{
    double PrecioTotal;
    PrecioTotal = Diametro * 1.5 + CantIngredientesExtras * 2.5;

    cout << endl << "El precio de la pizza es: S/" << PrecioTotal << endl;
}

int main()
{
    double Diametro = ValidarDiametroPizza();
    int CantIngredientesExtras = ValidarCantIngredientesExtras();

    PrecioPizza(Diametro, CantIngredientesExtras);

    system("pause>0");
    return 0;
}
