#ifndef EmpleadoHeader
#define EmpleadoHeader
#include <string>

using namespace std;

class Empleado {
public:
    Empleado();

    //atributos de la clase Empleado
    int id;
    string nombre;
    string user;
    string password;

    //metodos de la clase empeleado
    //Empleado(int, string, string, string);
    void agregarEmpleado(int);
    void editEmpleado();
    void mostrarEmpleado();

    
};

#endif