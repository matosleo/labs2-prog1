#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <cmath>

class Triangulo
{
private:
	double m_lados;

public:
	Triangulo(double lado);
	~Triangulo();

	double getAltura();

	double calculaArea(double, double);
	double calculaPerimetro(double);

};

#endif