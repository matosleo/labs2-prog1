#include "retangulo.h"

Retangulo::Retangulo(double base, double altura):m_base(base), m_altura(altura)
{
	m_area = 0;
	m_perimetro = 0;
}

Retangulo::Retangulo(double l):m_base(l), m_altura(l)
{
	m_altura = 0;
	m_area = 0;
	m_perimetro = 0;
}

Retangulo::~Retangulo(){}


double
Retangulo::calculaArea(double base, double altura)
{
	return base * altura;
}

double
Retangulo::calculaArea(double base)
{
	return base * base;
}

double
Retangulo::calculaPerimetro(double base, double altura)
{
	return 2 * (base + altura);
}

double
Retangulo::calculaPerimetro(double base)
{
	return 4 * base;
}