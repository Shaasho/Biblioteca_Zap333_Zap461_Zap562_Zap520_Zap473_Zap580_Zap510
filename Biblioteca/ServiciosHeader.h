#ifndef ServiciosHeader
#define ServiciosHeader
#include <string>

using namespace std;

class  Servicios
{

public:
    int id;
    string nombre;
    bool disponibles;
    void Agregar_Servicio(int);
    void Editar();
    void Mostrar();

};

#endif