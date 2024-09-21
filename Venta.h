#pragma once
#include <cstring>
#include "Fecha.h"
#include "Producto.h"
#include "ArchivoProducto.h"


class Venta {

private:
    /// Atributos privados
    // Encapsulamiento

    Producto obj; // Objeto de la clase producto
    Fecha _fecha; // Objeto de la clase Fecha. Tiene que venir de la clase FECHA.
    int _idVenta;
    float _precioVenta; /// MODIFICAR
    int _idCliente;
    int _idVendedor;
    char _marca[20];
    char _modelo[20];




public:

    /// METODOS
    Venta(); /// CONSTRUCTOR POR DEFECTO, inicializa los atributos privados a valores predeterminados como "0" cero.
    Venta(const Fecha& fecha, int idVenta, float precioVenta, int idCliente, int idVendedor, std::string marca, std::string modelo); /// CONSTRUCTOR INICIALIZADO CON PARAMETROS
    //const Fecha& fecha, puntero a objeto Fecha
    // FECHA fecha

    // GETTERS Y SETTERS PARA ENCAPSULAMIENTO.
    int getIdVenta();
    void setIdVenta(int idVenta);

    float getPrecioVenta();
    void setPrecioVenta(float precioVenta);

    int getIdCliente();
    void setIdCliente(int idCliente);

    int getIdVendedor();
    void setIdVendedor(int idVendedor);

    void setFecha(const Fecha& fecha);
    Fecha getFecha() const;

    std::string getMarca();
    void setMarca(std::string _marca);

    std::string getModelo();
    void setModelo(std::string _modelo);

   //bool copiaSeguridad(const char *nombreCopia);

};




