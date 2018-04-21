#include "paralelepipedo.h"


Paralelepipedo::Paralelepipedo(double aresta1, double aresta2, double aresta3)
{
	m_aresta1 = aresta1;
	m_aresta2 = aresta2;
	m_aresta3 = aresta3;
}
Paralelepipedo::~Paralelepipedo(){}


double 
Paralelepipedo::calculaArea()
{
	return (2 * m_aresta1  * m_aresta2) + (2 * m_aresta1 * m_aresta3) + (2 * m_aresta2 * m_aresta3);
}
double 
Paralelepipedo::calculaVolume()
{
	return m_aresta1 * m_aresta2 * m_aresta3;
}