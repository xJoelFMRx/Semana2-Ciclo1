#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarN()
{
    int N;
    do
    {
        cout << "Ingrese el numero de neumaticos a comprar: "; cin >> N;
    } while (N < 1);
    return N;
}

void MostrarMontoTotal(int N)
{
    double MontoTotal = 0;
    int precioxneuma;
    if (N < 3)
    {
        precioxneuma = 145;
        MontoTotal = 145 * N;
    }
    if (N >= 3 && N <= 5)
    {
        precioxneuma = 138;
        MontoTotal = 138 * N;
    }
    if (N > 5)
    {
        precioxneuma = 135;
        MontoTotal = 135 * N;
    }

    cout << endl << "Precio por neumatico: S/" << precioxneuma << endl;
    cout << "Monto total a pagar: S/" << MontoTotal << endl;
}

int main()
{
    int N = ValidarN();

    MostrarMontoTotal(N);

    system("pause>0");
    return 0;
}
