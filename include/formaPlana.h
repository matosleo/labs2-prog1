#ifndef FORMAPLANA_H
#define FORMAPLANA_H

#include <string>
#include "triangulo.h"
#include "retangulo.h"
#include "circulo.h"

class FormaPlana
{
private:
	std::string m_forma;
	Triangulo m_triangulo;
	Retangulo m_retangulo;
	Retangulo m_quadrado;
	Circulo m_circulo;
public:
	FormaPlana(std::string forma);
	~FormaPlana();

	void criarTriangulo(double l);
	void criarRetangulo(double l, double l);
	void criarQuadrado(double l);
	void criarCirculo(double r);

};



#endif