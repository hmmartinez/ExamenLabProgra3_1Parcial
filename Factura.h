#pragma once
#include "Fecha.h"
#include "Producto.h"

class Factura {
public:
	//Fecha Fecha(int, int, int);
	string nombre;
	
	void agregar(Producto *&, string, int, float);
	void mostrar(Producto*);
	void total(Producto*);

	void Facturas(Factura *);
	void agregarFac(Factura *&, Producto *, string);
	void total_pagar(Factura *);

	float totalp(Producto *);
	Factura *sig;
};
