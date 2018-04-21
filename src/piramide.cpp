#include "piramide.h"

Piramide::Piramide(double arestas):m_aresta(arestas){}

Piramide::~Piramide(){}


double
Piramide::getAltura()
{
	double par1 = pow(m_aresta * (sqrt(3)/2), 2);
	double par2 = pow(m_aresta, 2) / 4;
	return sqrt(par1 - par2);
}

double
Piramide::calculaVolume(double valor)
{
	return (pow(valor, 2) * getAltura())/3;
}

double 
Piramide::calculaArea(double valor)
{
	return (sqrt(3)/2) * (3 * pow(valor, 2));
}