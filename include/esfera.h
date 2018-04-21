#ifndef ESFERA
#define ESFERA

#include <cmath>

#define PI 3.1415

class Esfera
{
private:
	double m_diametro;
public:
	Esfera(double diametro);
	~Esfera();

	 double getRaio();
	 double calculaArea();
	 double calculaVolume();
};



#endif