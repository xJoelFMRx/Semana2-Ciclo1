#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarEdad()
{
    int edad;
    do
    {
        cout << "Ingresa la edad del jugador: "; cin >> edad;
    } while (edad < 15 || edad > 50);
    return edad;
}

char ValidarNacionalidad()
{
    char nacionalidad;
    do
    {
        cout << "Ingrese la nacionalidad del jugador: "; cin >> nacionalidad;
    } while (nacionalidad != 'E' && nacionalidad != 'N');
    return nacionalidad;
}

void SueldoJugador(int edad, char nacionalidad)
{
    double SueldoJugador = 2500;
    if (nacionalidad == 'E')
    {
        SueldoJugador += 500;
    }
    if (nacionalidad == 'N')
    {
        SueldoJugador += 0;
    }

    if (edad >= 15 && edad <= 20)
    {
        SueldoJugador += 1400;
    }
    else if (edad >= 21 && edad <= 25)
    {
        SueldoJugador += 1500;
    }
    else if (edad >= 26 && edad <= 30)
    {
        SueldoJugador += 1200;
    }
    else
    {
        SueldoJugador += 800;
    }

    cout << endl << "Sueldo del Jugador: S/" << SueldoJugador << endl;
}

int main()
{
    int edad = ValidarEdad();
    char nacionalidad = ValidarNacionalidad();

    SueldoJugador(edad, nacionalidad);

    system("pause>0");
    return 0;
}
