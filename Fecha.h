#pragma once
#ifndef FECHA_H

#include <iostream>

using namespace std;

class Fecha {
public:
	int dia, mes, anio;
	void imprimir();
	void fecha(int, int, int);
};

#endif // !FECHA_H
