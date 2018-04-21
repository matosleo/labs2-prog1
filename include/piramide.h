#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include <cmath>

class Piramide
{
private:
	double m_aresta;

public:
	Piramide(double arestas);
	~Piramide();

	double getAltura();
	double calculaVolume(double valor);
	double calculaArea(double valor);
};

#endif