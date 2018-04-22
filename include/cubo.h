/**
 * @file	jogador.h
 * @brief	Implementação da classe Jogador em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#ifndef CUBO_H
#define CUBO_H

class Cubo
{
private:
	double m_aresta; /**< Representa as arestas do cubo*/
public:
	Cubo(double aresta);
	~Cubo();


	double calculaArea();
	double calculaVolume();
};


#endif