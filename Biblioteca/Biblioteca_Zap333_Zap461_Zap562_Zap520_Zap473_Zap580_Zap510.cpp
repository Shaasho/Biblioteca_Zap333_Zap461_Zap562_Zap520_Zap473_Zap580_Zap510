// Biblioteca_Zap333_Zap461_Zap562_Zap520_Zap473_Zap580_Zap510.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Integrantes del equipo:
// - Oscar Rios Ramirez
// - Abraham Torres
// - Kevin Cabrera
// - Karen Aguilar
// - Rodrigo Tapia
// - Istael Moran
// - Jair Medina


#include <iostream>
#include <iostream>
#include <stdio.h> 
#include <string>
#include <stdlib.h>

//Incluimos todas las clases creadas por el equipo
#include "GenerosHeader.h"
#include "EmpleadoHeader.h"
#include "LibrosHeader.h"
#include "ClienteHeader.h"
#include "ServiciosHeader.h"

using namespace std;

//Variables de control de estructura (Identificadores)
int cuentaIDEmpleado = 0;
int cuentaIDServicio = 0;
int cuentaIDCliente = 0;
int cuentaIDLibros = 0;
int cuentaIDGeneros = 0;

class Biblioteca
{

public:
    //Datos de la biblioteca
    string nombre_Biblioteca;
    string horario;
    string ubicacion;
    string reglas;

    Biblioteca(string, string, string, string);

};

Biblioteca::Biblioteca(string nuevoNom, string nuevoHorario, string nuevaUbi, string nuevasReglas) {

    nombre_Biblioteca = nuevoNom;
    horario = nuevoHorario;
    ubicacion = nuevaUbi;
    reglas = nuevasReglas;

}

//Nodos de la cola para cada tipo
struct NodoEmpleados {
    Empleado empleado_biblioteca;
    NodoEmpleados *siguiente;
};
struct NodoServicios {
    Servicios servicios_biblioteca;
    NodoServicios *siguiente;
};
struct NodoClientes {
    Cliente cliente_biblioteca;
    NodoClientes *siguiente;
};
struct NodoLibros {
    Libros libro_biblioteca;
    NodoLibros *siguiente;
};
struct NodoGeneros {
    Genero genero;
    NodoGeneros *siguiente;
};

//Declaramos metodos para el control del flujo de la cola
void insertaColaEmpleados(NodoEmpleados *&, NodoEmpleados *&, Empleado);
void insertaColaServicios(NodoServicios *&, NodoServicios*&, Servicios);
void insertaColaClientes(NodoClientes *&, NodoClientes *&, Cliente);
void insertaColaLibros(NodoLibros *&, NodoLibros *&, Libros);
void insertaColaGeneros(NodoGeneros *&, NodoGeneros *&, Genero);
bool colaVaciaE(NodoEmpleados *);
bool colaVaciaS(NodoServicios *);
bool colaVaciaC(NodoClientes *);
bool colaVaciaL(NodoLibros *);
bool colaVaciaG(NodoGeneros *);
void suprimirColaE(NodoEmpleados *&, NodoEmpleados *&, Empleado &);
void suprimirColaS(NodoServicios *&, NodoServicios *&, Servicios &);
void suprimirColaC(NodoClientes *&, NodoClientes *&, Cliente &);
void suprimirColaL(NodoLibros *&, NodoLibros *&, Libros &);
void suprimirColaG(NodoGeneros *&, NodoGeneros *&, Genero &);

int main()
{
    //Se inicializa la Biblioteca
    Biblioteca miBiblioteca("Libreria Las Esposas de Alex Marin (y Dis)", "7:00 am - 11:00 pm", "Universidad Amerike", "1.No Gritar, 2.No Correr, 3.No Invadir Ucrania");

    cout << "Bienvenido a la Biblioteca: " << miBiblioteca.nombre_Biblioteca << endl;
    system("pause");

    bool ciclando = true;
    string decidiendo = "";
    string editando = "";

    //Comenzamos a agregar datos
    //Datos de Empleado

    //Creamos nodos
    NodoEmpleados* frenteE = NULL;
    NodoEmpleados* finE = NULL;
    NodoServicios* frenteS = NULL;
    NodoServicios* finS = NULL;
    NodoClientes* frenteC = NULL;
    NodoClientes* finC = NULL;
    NodoLibros* frenteL = NULL;
    NodoLibros* finL = NULL;
    NodoGeneros* frenteG = NULL;
    NodoGeneros* finG = NULL;

    //Creamos los objetos de clase
    Empleado empleado_biblioteca;
    Servicios servicios_biblioteca;
    Cliente clientes_biblioteca;
    Libros libros_biblioteca;
    Genero generos_libros;
    cout << "Agregando Empleados" << endl;
    while (ciclando) {
        
        
        //Comenzamos a ingresar datos
        
        empleado_biblioteca.agregarEmpleado(cuentaIDEmpleado);

        //Pregunta si se desean realizar cambios
        cout << "Deseas realizar cambios en tu registro? (Edicion) S/N" << endl;
        cin >> editando;

        if (editando == "S" || editando == "s" || editando == "Si" || editando == "SI") {
            empleado_biblioteca.editEmpleado();
        }

        insertaColaEmpleados(frenteE, finE, empleado_biblioteca);

        //Ciclo while de control que permitira continuar a la siguiente fase
        do 
        {
            cout << "Deseas continuar agregando datos? S/N: ";
            cin >> decidiendo;
        } while (decidiendo != "S" && decidiendo != "N");
        if (decidiendo == "S")
        {

            ciclando = true;
            

        }

        if (decidiendo == "N")
        {

            ciclando = false;
            system("cls");
        }
        cuentaIDEmpleado++;
    }

    //Se reinicia las variables para el siguiente ciclo
    ciclando = true;
    editando = "";
    decidiendo = "";
    cout << "Agregando Servicios" << endl;
    while (ciclando) {


        //Comenzamos a ingresar datos

        servicios_biblioteca.Agregar_Servicio(cuentaIDServicio);
        //Pregunta si se desean realizar cambios
        cout << "Deseas realizar cambios en tu registro? (Edicion) S/N" << endl;
        cin >> editando;

        if (editando == "S" || editando == "s" || editando == "Si" || editando == "SI") {
            servicios_biblioteca.Editar();
        }

        insertaColaServicios(frenteS, finS, servicios_biblioteca);

        //Ciclo while de control que permitira continuar a la siguiente fase
        do
        {
            cout << "Deseas continuar agregando datos? S/N: ";
            cin >> decidiendo;
        } while (decidiendo != "S" && decidiendo != "N");
        if (decidiendo == "S")
        {

            ciclando = true;
            

        }

        if (decidiendo == "N")
        {

            ciclando = false;
            system("cls");
        }
        cuentaIDServicio++;
    }

    //Se reinicia las variables para el siguiente ciclo
    ciclando = true;
    editando = "";
    decidiendo = "";
    cout << "Agregando Clientes" << endl;
    while (ciclando) {


        //Comenzamos a ingresar datos

        clientes_biblioteca.agregarCliente(cuentaIDCliente);

        //Pregunta si se desean realizar cambios
        cout << "Deseas realizar cambios en tu registro? (Edicion) S/N" << endl;
        cin >> editando;

        if (editando == "S" || editando == "s" || editando == "Si" || editando == "SI") {
            clientes_biblioteca.editarCliente();
        }

        insertaColaClientes(frenteC, finC, clientes_biblioteca);

        //Ciclo while de control que permitira continuar a la siguiente fase
        do
        {
            cout << "Deseas continuar agregando datos? S/N: ";
            cin >> decidiendo;
        } while (decidiendo != "S" && decidiendo != "N");
        if (decidiendo == "S")
        {

            ciclando = true;
            

        }

        if (decidiendo == "N")
        {

            ciclando = false;
            system("cls");
        }
        cuentaIDCliente++;
    }

    //Se reinicia las variables para el siguiente ciclo
    ciclando = true;
    editando = "";
    decidiendo = "";
    cout << "Agregando Generos Literarios" << endl;
    while (ciclando) {


        //Comenzamos a ingresar datos

        generos_libros.AgregarGenero(cuentaIDGeneros);

        //Pregunta si se desean realizar cambios
        cout << "Deseas realizar cambios en tu registro? (Edicion) S/N" << endl;
        cin >> editando;

        if (editando == "S" || editando == "s" || editando == "Si" || editando == "SI") {
            generos_libros.EditarGenero();
        }

        insertaColaGeneros(frenteG, finG, generos_libros);

        //Ciclo while de control que permitira continuar a la siguiente fase
        do
        {
            cout << "Deseas continuar agregando datos? S/N: ";
            cin >> decidiendo;
        } while (decidiendo != "S" && decidiendo != "N");
        if (decidiendo == "S")
        {

            ciclando = true;


        }

        if (decidiendo == "N")
        {

            ciclando = false;
            system("cls");
        }
        cuentaIDGeneros++;
    }

    //Se reinicia las variables para el siguiente ciclo
    ciclando = true;
    editando = "";
    decidiendo = "";
    cout << "Agregando Libros" << endl;
    while (ciclando) {


        //Comenzamos a ingresar datos

        libros_biblioteca.Agregarlibro(cuentaIDLibros);

        //Pregunta si se desean realizar cambios
        cout << "Deseas realizar cambios en tu registro? (Edicion) S/N" << endl;
        cin >> editando;

        if (editando == "S" || editando == "s" || editando == "Si" || editando == "SI") {
            libros_biblioteca.Editarlibro();
        }

        insertaColaLibros(frenteL, finL, libros_biblioteca);

        //Ciclo while de control que permitira continuar a la siguiente fase
        do
        {
            cout << "Deseas continuar agregando datos? S/N: ";
            cin >> decidiendo;
        } while (decidiendo != "S" && decidiendo != "N");
        if (decidiendo == "S")
        {

            ciclando = true;


        }

        if (decidiendo == "N")
        {

            ciclando = false;
            system("cls");
        }
        cuentaIDLibros++;
    }

    //Mostrar datos Empleado
    cout << "Imprimiendo y Borrando Datos de Empleados";
    while (frenteE != NULL) {
        suprimirColaE(frenteE, finE, empleado_biblioteca);
        if (frenteE != NULL) {
            cout << "Id: " << empleado_biblioteca.id << endl;
            empleado_biblioteca.mostrarEmpleado();
            cout << "--------------------------" << endl;
        }
        else {
            cout << "Id: " << empleado_biblioteca.id << endl;
            empleado_biblioteca.mostrarEmpleado();
            cout << "." << endl;
        }
    }
    system("pause");
    system("cls");
    
    //Mostrar datos Servicios
    cout << "Imprimiendo y Borrando Datos de Servicios";
    while (frenteS != NULL) {
        suprimirColaS(frenteS, finS, servicios_biblioteca);
        if (frenteS != NULL) {
            cout << "Id: " << servicios_biblioteca.id << endl;
            servicios_biblioteca.Mostrar();
            cout << "--------------------------" << endl;
        }
        else {
            cout << "Id: " << servicios_biblioteca.id << endl;
            servicios_biblioteca.Mostrar();
            cout << "." << endl;
        }
    }
    system("pause");
    system("cls");
    
    //Mostrar datos Cliente
    cout << "Imprimiendo y Borrando Datos de Clientes";
    while (frenteC != NULL) {
        suprimirColaC(frenteC, finC, clientes_biblioteca);
        if (frenteE != NULL) {
            cout << "Id: " << clientes_biblioteca.idCliente << endl;
            clientes_biblioteca.mostrarCliente();
            cout << "--------------------------" << endl;
        }
        else {
            cout << "Id: " << clientes_biblioteca.idCliente << endl;
            clientes_biblioteca.mostrarCliente();
            cout << "." << endl;
        }
    }
    system("pause");
    system("cls");

    //Mostrar datos Generos
    cout << "Imprimiendo y Borrando Datos de Generos";
    while (frenteG != NULL) {
        suprimirColaG(frenteG, finG, generos_libros);
        if (frenteG != NULL) {
            cout << "Id: " << generos_libros.IDg << endl;
            generos_libros.ImprimirGenero();
            cout << "--------------------------" << endl;
        }
        else {
            cout << "Id: " << generos_libros.IDg << endl;
            generos_libros.ImprimirGenero();
            cout << "." << endl;
        }
    }
    system("pause");
    system("cls");
    
    //Mostrar datos Libros
    cout << "Imprimiendo y Borrando Datos de Libros";
    while (frenteL != NULL) {
        suprimirColaL(frenteL, finL, libros_biblioteca);
        if (frenteL != NULL) {
            cout << "Id: " << libros_biblioteca.id << endl;
            libros_biblioteca.Imprimirlibro();
            cout << "--------------------------" << endl;
        }
        else {
            cout << "Id: " << libros_biblioteca.id << endl;
            libros_biblioteca.Imprimirlibro();
            cout << "." << endl;
        }
    }
    system("pause");
    system("cls");

}

//Implementamos Metodos de control de colas
void insertaColaEmpleados(NodoEmpleados*& frente, NodoEmpleados*& fin, Empleado _empleado) {
    NodoEmpleados* nuevo_nodo = new NodoEmpleados();
    nuevo_nodo->empleado_biblioteca = _empleado;
    nuevo_nodo->siguiente = NULL;
    if (colaVaciaE(frente)) {
        frente = nuevo_nodo;
    }
    else {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}

void insertaColaServicios(NodoServicios*& frente, NodoServicios*& fin, Servicios _servicios) {
    NodoServicios* nuevo_nodo = new NodoServicios();
    nuevo_nodo->servicios_biblioteca = _servicios;
    nuevo_nodo->siguiente = NULL;
    if (colaVaciaS(frente)) {
        frente = nuevo_nodo;
    }
    else {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}

void insertaColaClientes(NodoClientes*& frente, NodoClientes*& fin, Cliente _cliente) {
    NodoClientes* nuevo_nodo = new NodoClientes();
    nuevo_nodo->cliente_biblioteca = _cliente;
    nuevo_nodo->siguiente = NULL;
    if (colaVaciaC(frente)) {
        frente = nuevo_nodo;
    }
    else {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}

void insertaColaLibros(NodoLibros*& frente, NodoLibros*& fin, Libros _libros) {
    NodoLibros* nuevo_nodo = new NodoLibros();
    nuevo_nodo->libro_biblioteca = _libros;
    nuevo_nodo->siguiente = NULL;
    if (colaVaciaL(frente)) {
        frente = nuevo_nodo;
    }
    else {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}

void insertaColaGeneros(NodoGeneros*& frente, NodoGeneros*& fin, Genero _genero) {
    NodoGeneros* nuevo_nodo = new NodoGeneros();
    nuevo_nodo->genero = _genero;
    nuevo_nodo->siguiente = NULL;
    if (colaVaciaG(frente)) {
        frente = nuevo_nodo;
    }
    else {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}


//Elimina nodos
void suprimirColaE(NodoEmpleados*& frente, NodoEmpleados*& fin, Empleado& _empleado) {
    _empleado = frente->empleado_biblioteca;
    NodoEmpleados* aux = frente;

    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }else{
        frente = frente->siguiente;
    }
    delete aux;
}

void suprimirColaS(NodoServicios*& frente, NodoServicios*& fin, Servicios& _empleado) {
    _empleado = frente->servicios_biblioteca;
    NodoServicios* aux = frente;

    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }
    else {
        frente = frente->siguiente;
    }
    delete aux;
}


void suprimirColaC(NodoClientes*& frente, NodoClientes*& fin, Cliente& _empleado) {
    _empleado = frente->cliente_biblioteca;
    NodoClientes* aux = frente;

    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }
    else {
        frente = frente->siguiente;
    }
    delete aux;
}

void suprimirColaL(NodoLibros*& frente, NodoLibros*& fin, Libros& _empleado) {
    _empleado = frente->libro_biblioteca;
    NodoLibros* aux = frente;

    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }
    else {
        frente = frente->siguiente;
    }
    delete aux;
}

void suprimirColaG(NodoGeneros*& frente, NodoGeneros*& fin, Genero& _empleado) {
    _empleado = frente->genero;
    NodoGeneros* aux = frente;

    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }
    else {
        frente = frente->siguiente;
    }
    delete aux;
}

//Metodo que verifica si las colas estan vacias
bool colaVaciaE(NodoEmpleados* frente) {
    return (frente == NULL) ? true : false;
}
bool colaVaciaS(NodoServicios* frente) {
    return (frente == NULL) ? true : false;
}
bool colaVaciaC(NodoClientes* frente) {
    return (frente == NULL) ? true : false;
}
bool colaVaciaL(NodoLibros* frente) {
    return (frente == NULL) ? true : false;
}
bool colaVaciaG(NodoGeneros* frente) {
    return (frente == NULL) ? true : false;
}