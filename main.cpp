#include <iostream>
#include "MenuPrincipal.h"
#include "GestorDeProducto.h"
#include "ArchivoProducto.h"
#include <locale.h> // A�ade paquete de idiomas

using namespace std;


int main ()
{
    setlocale(LC_ALL, "spanish"); // Paquete de idiomas para las "�" o tildes.
    MenuPrincipal menu;

    menu.menu();




	return 0;
}
