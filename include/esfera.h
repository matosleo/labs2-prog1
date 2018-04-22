/**
 * @file	jogador.h
 * @brief	Implementação da classe Jogador em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#ifndef ESFERA
#define ESFERA

#include <cmath>

#define PI 3.1415

class Esfera
{
private:
	double m_diametro; /**< Representa o diâmetro da esfera */
public:
	Esfera(double diametro);
	~Esfera();

	 double getRaio();
	 double calculaArea();
	 double calculaVolume();
};



#endif