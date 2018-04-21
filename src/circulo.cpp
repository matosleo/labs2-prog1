#include "circulo.h"

Circulo::Circulo(double diametro):m_diametro(diametro)
{
	m_area = 0;
	m_perimetro = 0;
}

Circulo::~Circulo(){}

double getRaio(double diametro)
{
	return diametro/2;
}

double
Circulo::calculaArea(double diametro)
{
	return PI * getRaio(diametro) * getRaio(diametro);
}

double 
Circulo::calculaPerimetro(double diametro)
{
	return 2 * PI * getRaio(diametro);
}