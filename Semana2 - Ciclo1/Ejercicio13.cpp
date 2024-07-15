#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

long long ValidarCodigo()
{
    long long codigo;
    do
    {
        cout << "Ingrese codigo del empleado: "; cin >> codigo;
    } while (codigo < 100000000000 || codigo > 999999999999);
    return codigo;
}

void ImprimirDatos(long long codigo)
{
    char a; //Primera Letra Nombre
    char b; //Primera Letra Apellido Paterno
    char c; //Primera Letra Apellido Materno
    int d; //Hora de entrada
    int e; //Minutos entrada
    int f; //Segundos entrada
    char tarde; //Si llego tarde o no llego tarde

    a = codigo / 10000000000;
    b = (codigo % 10000000000) / 100000000;
    c = ((codigo % 10000000000) % 100000000) / 1000000;
    d = (((codigo % 10000000000) % 100000000) % 1000000) / 10000;
    e = ((((codigo % 10000000000) % 100000000) % 1000000) % 10000) / 100;
    f = ((((codigo % 10000000000) % 100000000) % 1000000) % 10000) % 100;

    if (d > 9 || d >= 9 && e > 0 || d >= 9 && f > 0 || d >= 9 && e >= 0 && f > 0 || d >= 9 && e > 0 && f >= 0 || d >= 9 && e > 0 && f > 0)
    {
        tarde = 86;
    }
    else
    {
        tarde = 70;
    }

    cout << endl << "Hora de entrada: " << d << endl;
    cout << "Minuto de entrada: " << e << endl;
    cout << "Segundos de entrada: " << f << endl;
    cout << "Su nombre empieza con la letra: " << a << endl;
    cout << "Su apellido paterno inicia con la letra: " << b << endl;
    cout << "Su apellido materno inicia con la letra: " << c << endl;
    cout << "¿Llego tarde?: " << tarde << endl;
}

int main()
{
    long long codigo = ValidarCodigo();

    ImprimirDatos(codigo);

    system("pause>0");
    return 0;
}
