#include <iostream>
#include <string>
#include "Clase_Empleado_1.h"

using namespace std;

void Empleado::agregarEmpleado(int _id) {
    id = _id;
    cout << "\n Introduce el nombre del nuevo empelado: ";
    getline(cin, nombre);
    cout << "\n Introduce el Usuario que tendra: ";
    getline(cin, user);
    cout << "\n introduce la contraseña que tendra:";
    getline(cin, password);
};

void Empleado::editEmpleado() {
    cout << "\n Introduce el nuevo nombre del empelado: ";
    getline(cin, nombre);
    cout << "\n Introduce el nuevo user del empelado: ";
    getline(cin, user);
    cout << "\n Introduce la nueva password : ";
    getline(cin, password);

};

void Empleado::mostrarEmpleado() {

    cout << "Nombre del Empleado: \n" << nombre << endl;
    cout << "Ususario del empelado: \n" << user << endl;
    cout << "Contrasenia del empelado: \n" << password << endl;
}

