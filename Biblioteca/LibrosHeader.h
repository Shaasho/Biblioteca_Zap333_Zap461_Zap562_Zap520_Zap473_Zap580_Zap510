#ifndef LibrosHeader
#define LibrosHeader
#include <string>

using namespace std;

class Libros
{
public:
	int id;
	string nombre;
	string editorial;
	string autor;
	int generoId;
	int anoPub;

	void Agregarlibro(int);
	void Imprimirlibro();
	void Editarlibro();
};

#endif