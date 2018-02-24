#include <iostream>
#include "Fecha.h"

using namespace std;

void Fecha::fecha(int _dia, int  _mes, int _anio) {
	anio = _anio;
	mes = _mes;
	dia = _dia;
	imprimir();
}

void Fecha::imprimir() {
	cout << dia << "-" << mes << "-" << anio << endl;
}
