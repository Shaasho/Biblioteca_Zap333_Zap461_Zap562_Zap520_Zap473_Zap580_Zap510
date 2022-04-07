#ifndef ClienteHeader
#define ClienteHeader
#include <string>

using namespace std;

class Cliente
{
    // Brindamos de atributos la clase
public:
    int idCliente;
    string nombreCliente;
    string apellidoCliente;
    int edadCliente;
    int librosPrestamo;
    string numContacto;
    string direccionCliente;

    // Constructor de la Clase
    //Cliente(int,char, char, int, int, string, string);
    // Declaramos el metodo a utilizar
    void agregarCliente(int);
    void editarCliente();
    void mostrarCliente();
};

#endif