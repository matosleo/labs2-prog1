#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo
{
private:
	double m_base;
	double m_altura;
	double m_area;
	double m_perimetro;
public:
	Retangulo(double base, double altura);
	Retangulo(double l);
	~Retangulo();
	

	double calculaArea(double, double);
	double calculaArea(double);
	double calculaPerimetro(double, double);
	double calculaPerimetro(double);

};



#endif