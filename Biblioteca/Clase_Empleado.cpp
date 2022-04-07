// Clase_Empleado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "EmpleadoHeader.h"

using namespace std;


Empleado::Empleado() {
};

/*Empleado::Empleado(int _id, string _nombre, string _user, string _password) {
    id = _id;
    nombre = _nombre;
    user = _user;
    password = _password;
};*/


void Empleado::agregarEmpleado(int _id) {
    id = _id;
    cout << "\n Introduce el nombre del nuevo empleado: ";
    cin >> nombre;
    cout << "\n Introduce el Usuario que tendra: ";
    cin >> user;
    cout << "\n introduce la contraseña que tendra: ";
    cin >> password;
};

void Empleado::editEmpleado() {
    cout << "\n Introduce el nuevo nombre del empleado: ";
    getline(cin, nombre);
    cout << "\n Introduce el nuevo user del empleado: ";
    getline(cin, user);
    cout << "\n Introduce la nueva password: ";
    getline(cin, password);

};

void Empleado::mostrarEmpleado() {

    cout << "Nombre del Empleado: \n" << nombre << endl;
    cout << "Ususario del empleado: \n" << user << endl;
    cout << "Contrasenia del empleado: \n" << password << endl;
}

