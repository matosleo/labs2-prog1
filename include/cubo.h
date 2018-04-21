#ifndef CUBO_H
#define CUBO_H

class Cubo
{
private:
	double m_aresta;
public:
	Cubo(double aresta);
	~Cubo();


	double calculaArea();
	double calculaVolume();
};


#endif