#include "Factura.h"
#include "Producto.h"
#include <iostream>
#include <string>
#include "main.cpp"

using namespace std;

#include "Nodo.h"

//void Factura::total(string name) {
//
//	Factura *tmp = primero;
//
//	bool band = false;
//	/*Factura *actual = new Factura();
//	actual = 0;*/
//
//	while (tmp != NULL) {
//
//		tmp->nombre;
//
//		if (tmp == name) {
//			
//		}
//		else
//	}
//}

void Factura::agregar(Producto *&lista, string nombre, int cant, float valor1) {
	Producto *producto = new Producto();
	Producto *tmp = Lista;
	
	producto->cant = cant;
	producto->nombre = nombre;
	producto->precio = valor1;

	if (lista == tmp) {
		lista = producto;
	}
	else {
		tmp->sig = producto;
	}

	producto->sig = tmp;
}

void Factura::mostrar(Producto*Lista) {
	Producto *act = new Producto();

	act = Lista;

	while (act != NULL) {
		cout << "Producto: " << act->nombre << "\nPrecio: " << act->precio << "\nCantidad: " << act->cant << endl;
		act = act->sig;
	}
}

void Factura::total(Producto *lista) {
	Producto *act = new Producto();
	float sub = 0;

	act = lista;
	while (act != NULL) {
		sub = sub + (act->precio*act->cant);

		act = act->sig;
	}

	cout << "El subtotal es: " << sub << endl;
	cout << "ISV: " << sub * 0.07;
	cout << "Total: " << sub + (sub * 0.07) << endl;
}

void Factura::Facturas(Factura *Lista) {
	Factura *act = new Factura();
	
	int a = 0;
	act = Lista;
	while (act != NULL) {
		cout << "Factura #" << a << " \nNombre: " << act->nombre << endl;
	}
}

void Factura::agregarFac(Factura *&lista, Producto *Lista2, string nombre) {

	Factura *nueva = new Factura();

	nueva->nombre = nombre;
	nueva->Lista = Lista2;
	Factura *tmp = lista;

	if (lista == tmp) {
		lista = nueva;
	}

	nueva->sig = tmp;

	cout << "La factura se ha agregado.";

}

float Factura::totalp(Producto *Lista) {
	Producto *act = new Producto();

	float t = 0;

	act = Lista;

	while (act != NULL) {
		t = t + (act->cant*act->precio) + ((act->cant * act->precio) * 0.07);
		act = act->sig;
	}
	return t;
}

void Factura::total_pagar(Factura *ListaTP) {
	Factura nuevo;

	Factura *act_factura = new Factura();
	int co = 0;

	float total = 0;

	Producto *act_producto = new Producto();
	act_factura = ListaTP;
	act_producto = ListaTP->Lista;

	while (act_factura != NULL) {
		total = total + nuevo.totalp(act_factura->Lista);

		co++;
		act_factura = act_factura->sig;
	}

	cout << "Total: " << total << "\nFacturas: " << co;
}


