/**
 * @file	jogador.h
 * @brief	Implementação da classe Jogador em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H

class Paralelepipedo
{
private:
	double m_aresta1; /**< Representa a base da forma */
	double m_aresta2; /**< Representa a altura da forma */
	double m_aresta3; /**< Representa o comprimento */
public:
	Paralelepipedo(double aresta1, double aresta2, double aresta3);
	~Paralelepipedo();


	double calculaArea();
	double calculaVolume();

};

#endif