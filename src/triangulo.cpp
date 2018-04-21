#include "triangulo.h"

Triangulo::Triangulo(double lado):m_lados(lado){}

Triangulo::~Triangulo(){}


double
Triangulo::getAltura()
{
	return sqrt(3) * m_lados * 1/2;
}

double 
Triangulo::calculaArea(double lados, double altura)
{
	return (lados * altura) / 2;
}

double 
Triangulo::calculaPerimetro(double lados)
{
	return 3 * lados;
}