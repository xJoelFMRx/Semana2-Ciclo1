#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarAņosLaborados()
{
    int cantaņoslaborados;
    do
    {
        cout << "Ingrese la cantidad de anuales que labora: "; cin >> cantaņoslaborados;
    } while (cantaņoslaborados < 1 || cantaņoslaborados > 50);
    return cantaņoslaborados;
}

char ValidarEstudios()
{
    char estudiosrealizados;
    do
    {
        cout << "Estudios (P: primaria; S: secundaria; U: universitario; G: posgrado): "; cin >> estudiosrealizados;
    } while (estudiosrealizados != 'P' && estudiosrealizados != 'S' && estudiosrealizados != 'U' && estudiosrealizados != 'G');
    return estudiosrealizados;
}

void PuntajeObtenido(int cantaņoslaborados, char estudiosrealizados)
{
    int PuntajeObtenido = 0;
    if (cantaņoslaborados < 5)
    {
        PuntajeObtenido += 5;
    }
    else
    {
        PuntajeObtenido += 10;
    }

    if (estudiosrealizados == 'P')
    {
        PuntajeObtenido += 5;
    }
    if (estudiosrealizados == 'S')
    {
        PuntajeObtenido += 10;
    }
    if (estudiosrealizados == 'U')
    {
        PuntajeObtenido += 20;
    }
    if (estudiosrealizados == 'G')
    {
        PuntajeObtenido += 30;
    }

    cout << endl << "Puntaje Obtenido: " << PuntajeObtenido << endl;
}

int main()
{
    int cantaņoslaborados = ValidarAņosLaborados();
    char estudiosrealizados = ValidarEstudios();

    PuntajeObtenido(cantaņoslaborados, estudiosrealizados);

    system("pause>0");
    return 0;
}
