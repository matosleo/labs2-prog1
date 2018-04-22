/**
 * @file	jogador.h
 * @brief	Implementação da classe Jogador em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#ifndef RETANGULO_H
#define RETANGULO_H

#include <cmath>

class Retangulo
{
private:
	double m_base; /**< Representa a base do retângulo */
	double m_altura; /**< Representa a altura do retângulo */
public:
	Retangulo(double base, double altura);
	Retangulo(double l);
	~Retangulo();
	

	double calculaArea(double base, double altura);
	double calculaArea(double lados);
	double calculaPerimetro(double base, double altura);
	double calculaPerimetro(double lados);
};



#endif