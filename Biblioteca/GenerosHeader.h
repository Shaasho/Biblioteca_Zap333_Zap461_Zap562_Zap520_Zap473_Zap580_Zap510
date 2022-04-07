#ifndef GenerosHeader
#define GenerosHeader
#include <string>

using namespace std;

class Genero
{
public:
    int IDg;
    string nombre_g;
    void AgregarGenero(int IDg);
    void ImprimirGenero();
    void EditarGenero();
};

#endif