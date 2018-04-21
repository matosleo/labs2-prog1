#ifndef CIRCULO_H
#define CIRCULO_H

#define PI 3.1415

class Circulo
{
private:
	double m_diametro;
	double m_area;
	double m_perimetro;
public:
	Circulo(double diametro);
	~Circulo();

	double calculaArea(double diametro);
	double calculaPerimetro(double diametro);

};



#endif