#include "piramide.h"

Piramide::Piramide(double arestas):m_aresta(arestas){}

Piramide::~Piramide(){}


double
Piramide::getAltura()
{
	double par1 = (m_aresta * (sqrt(3)/2)) * (m_aresta * (sqrt(3)/2));
	double par2 = (m_aresta * m_aresta) / 4;
	return sqrt(par1 - par2);
}

double
Piramide::calculaVolume(double valor)
{
	return ((valor * valor) * getAltura())/3;
}

double 
Piramide::calculaArea(double valor)
{
	return (sqrt(3)/2) * (3 * (valor * valor));
}