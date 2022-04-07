// clase Libros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include "LibrosHeader.h"
using namespace std;


void Libros::Agregarlibro(int _id)
{
	id = _id;
	cout << "Agrega el nombre del libro: ";
	cin >> nombre;
	cout << endl;
	cout << "Agrega la editorial del libro: ";
	cin >> editorial;
	cout << endl;
	cout << "Agrega el nombre del autor: ";
	cin >> autor;
	cout << endl;
	cout << "Agrega el id del genero: ";
	cin >> generoId;
	cout << endl;
	cout << "Agrega el año de publicacion: ";
	cin >> anoPub;
	cout << endl;
}

void Libros::Imprimirlibro()
{
	cout << "Este es el titulo del libro que ingresaste: " << nombre << endl;
	cout << endl;
	cout << "Esta es la editorial del libro que ingresaste: " << editorial << endl;
	cout << endl;
	cout << "Este es el nombre del autor del libro que ingresaste: " << autor << endl;
	cout << endl;
	cout << "Este es el Id del genero que ingresaste: " << generoId << endl;
	cout << endl;
	cout << "Este es el año de publicacion del libro que ingresaste: " << anoPub << endl;
	cout << endl;
}

void Libros::Editarlibro()
{
	cout << "Edita el nombre del libro: ";
	cin >> nombre;
	cout << endl;
	cout << "Edita la editorial del libro: ";
	cin >> editorial;
	cout << endl;
	cout << "Edita el nombre del autor: ";
	cin >> autor;
	cout << endl;
	cout << "Edita el id del genero: ";
	cin >> generoId;
	cout << endl;
	cout << "Edita el año de publicacion: ";
	cin >> anoPub;
	cout << endl;
}

