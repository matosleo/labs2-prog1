#include "cubo.h"

Cubo::Cubo(double aresta):m_aresta(aresta){}
Cubo::~Cubo(){}


double 
Cubo::calculaArea()
{
	return 6 * (m_aresta * m_aresta);
}

double 
Cubo::calculaVolume()
{
	return m_aresta * m_aresta * m_aresta;
}