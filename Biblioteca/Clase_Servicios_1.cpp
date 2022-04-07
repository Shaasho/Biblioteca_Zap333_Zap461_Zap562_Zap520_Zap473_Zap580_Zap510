// clase Servicios.cpp
// Abraham Torres - Isra Morán P.

#include <iostream>
#include <stdio.h> 
#include <string>
#include "ServiciosHeader.h"

using namespace std;



void Servicios::Agregar_Servicio(int _id)
{

    id = _id;
    string decide;
    cout << "Agrege el nombre del servicio: ";
    cin >> nombre;
    cout << endl;

    do
    {

        cout << "Esta disponible? S/N ";
        cin >> decide;

        if (decide == "S")
        {

            disponibles = true;

        }

        if (decide == "N")
        {

            disponibles = false;

        }

    } while (decide != "S" && decide != "N");
}

void Servicios::Editar()
{

    string decide;
    cout << "edite el nombre del servicio: ";
    cin >> nombre;
    cout << endl;

    do
    {

        cout << "Esta disponible? S/N ";
        cin >> decide;

        if (decide == "S")
        {

            disponibles = true;

        }

        if (decide == "N")
        {

            disponibles = false;

        }

    } while (decide != "S" && decide != "N");
}

void Servicios::Mostrar()
{

    cout << nombre << " disponibilidad: " << disponibles << endl;

}

