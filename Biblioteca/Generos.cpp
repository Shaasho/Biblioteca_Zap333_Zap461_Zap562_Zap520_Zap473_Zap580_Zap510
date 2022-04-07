#pragma once

#include <iostream>
#include <string>
#include <conio.h>
#include "GenerosHeader.h"

using namespace std;



void Genero::AgregarGenero(int _IDg)
{
    IDg = _IDg;
    cout << "Ingresa el nombre del Genero: ";
    cin >> nombre_g;
    cout << endl;
    _getch();
    system("CLS");
}

void Genero::ImprimirGenero()
{

    cout << "El Genero " << nombre_g << "ahora cuenta con el ID: " << IDg;
    _getch();
    system("CLS");
}

void Genero::EditarGenero()
{

    cout << "Ingresa el nombre del Genero: ";
    cin >> nombre_g;
    cout << endl;
    _getch();
    system("CLS");
}