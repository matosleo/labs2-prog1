#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H

class Paralelepipedo
{
private:
	double m_aresta1;
	double m_aresta2;
	double m_aresta3;
public:
	Paralelepipedo(double aresta1, double aresta2, double aresta3);
	~Paralelepipedo();


	double calculaArea();
	double calculaVolume();

};

#endif