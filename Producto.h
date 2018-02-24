#pragma once

#include <string>
using namespace std;

class Producto {
public:
	int cant;
	string nombre;
	float precio;
	Producto *sig;
		
};
