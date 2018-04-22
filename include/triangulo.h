/**
 * @file	jogador.h
 * @brief	Implementação da classe Jogador em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <cmath>

class Triangulo
{
private:
	double m_lados; /**< Representa as arestas do triângulo */

public:
	Triangulo(double lado);
	~Triangulo();

	double getAltura();

	double calculaArea();
	double calculaPerimetro();

};

#endif