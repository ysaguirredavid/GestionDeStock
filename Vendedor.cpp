#include "Vendedor.h"

using namespace std;


    // Constructor de Vendedor
Vendedor::Vendedor(int IdVendedor, std::string nombre,  std::string apellido,  std::string direccion, int dni)

{
    setNombre(nombre);
    setApellido(apellido);
    setIdVendedor(idVendedor);
    setDireccion(direccion);
    setIdVendedor(IdVendedor);
    setDni(dni);

}



  /// Herencia de Persona.
    Vendedor:: Vendedor(): Persona(){idVendedor=0;}



   // Métodos get y set para idCliente
    int Vendedor:: getIdVendedor(){return idVendedor; }
    void Vendedor:: setIdVendedor(int _idVendedor){idVendedor=_idVendedor;}


