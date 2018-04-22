/**
 * @file	piramide.cpp
 * @brief	Implementação dos métodos da classe Piramide em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#include "piramide.h"

Piramide::Piramide(double arestas):m_arestas(arestas){}

Piramide::~Piramide(){}

/**
  * @brief 		Método que retorna o valor da altura da pirâmide
  * @details   
  * @params		
  * @return		O valor da altura da pirâmide
  * @sa 		https://github.com/matosleo
*/
double
Piramide::getAltura()
{
	double par1 = pow(m_arestas * (sqrt(3)/2), 2);
	double par2 = pow(m_arestas, 2) / 4;
	return sqrt(par1 - par2);
}

/**
  * @brief 		Método que retorna o valor do volume da pirâmide
  * @details   
  * @params		
  * @return		O valor do volume da pirâmide
  * @sa 		https://github.com/matosleo
*/
double
Piramide::calculaVolume()
{
	return (pow(m_arestas, 2) * getAltura())/3;
}

/**
  * @brief 		Método que retorna o valor da área da pirâmide
  * @details   
  * @params		
  * @return		O valor da área da pirâmide
  * @sa 		https://github.com/matosleo
*/
double 
Piramide::calculaArea()
{
	return (sqrt(3)/2) * (3 * pow(m_arestas, 2));
}