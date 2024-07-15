#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarHoras()
{
    int horas;
    do
    {
        cout << "Ingrese el numero de horas laborales: "; cin >> horas;
    } while (horas < 1);
    return horas;
}

void CalcularSalarioSemanal(int HorasLaborales)
{
    double SalarioSemanal = 0;
    if (HorasLaborales <= 40)
    {
        SalarioSemanal = HorasLaborales * 16;
    }
    if (HorasLaborales > 40)
    {
        SalarioSemanal = 40 * 16 + (HorasLaborales - 40) * 20;
    }

    cout << endl << "El salario semanal del obrero es: $" << SalarioSemanal << endl;
}

int main()
{
    int HorasLaborales = ValidarHoras();

    CalcularSalarioSemanal(HorasLaborales);

    system("pause>0");
    return 0;
}
