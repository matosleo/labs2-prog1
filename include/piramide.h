/**
 * @file	jogador.h
 * @brief	Implementação da classe Jogador em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include <cmath>

class Piramide
{
private:
	double m_arestas; /**< Representa as arestas da pirâmide */

public:
	Piramide(double arestas);
	~Piramide();

	double getAltura();
	double calculaVolume();
	double calculaArea();
};

#endif