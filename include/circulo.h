/**
 * @file	jogador.h
 * @brief	Implementação da classe Jogador em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#ifndef CIRCULO_H
#define CIRCULO_H

#define PI 3.1415

class Circulo
{
private:
	double m_diametro; /**< Representa o diâmetro do círculo */
public:
	Circulo(double diametro);
	~Circulo();

	double calculaArea();
	double calculaPerimetro();

};



#endif