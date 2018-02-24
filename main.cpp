#include <string>
#include "Fecha.h"
#include <iostream>
#include "Factura.h"
#include "main.h"
#include <conio.h>

using namespace std;

Producto *Lista = NULL;
Factura *Lista2 = NULL;
Producto *Lista3 = NULL;

Factura nuevo;
Fecha f;

int main() {
	f.fecha(23, 2, 2018);
	nuevo.agregar(Lista, "Arroz", 21, 2);
	nuevo.agregar(Lista, "Comida de perro", 58, 7);

	nuevo.mostrar(Lista3);

	nuevo.agregarFac(Lista2, Lista3, "Hector");

	nuevo.total_pagar(Lista2);

	nuevo.Facturas(Lista2);

	_getch();

}
