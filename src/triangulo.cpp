#include "triangulo.h"

Triangulo::Triangulo(double lado)
{
	m_lados = lado;
	m_altura = 0;
	m_area = 0;
	m_perimetro = 0;
}

Triangulo::~Triangulo(){}


double
Triangulo::getAltura()
{
	return sqrt(3)*(m_lados / 2);
}

double 
Triangulo::calculaArea(double lados, double altura)
{
	return m_area =  (lados * altura) / 2;
}

double 
Triangulo::calculaPerimetro(double lados)
{
	return m_perimetro = 3 * lados;
}