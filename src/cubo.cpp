/**
 * @file	cubo.cpp
 * @brief	Implementação dos métodos da classe Cubo em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */
#include "cubo.h"

Cubo::Cubo(double aresta):m_aresta(aresta){}
Cubo::~Cubo(){}

/**
  * @brief 		Método que retorna o valor da área do cubo
  * @details   
  * @params		
  * @return		O valor da área do cubo
  * @sa 		https://github.com/matosleo
*/
double 
Cubo::calculaArea()
{
	return 6 * (m_aresta * m_aresta);
}

/**
  * @brief 		Método que retorna o valor do volume do círculo
  * @details   
  * @params		
  * @return		O valor do volume do círculo
  * @sa 		https://github.com/matosleo
*/
double 
Cubo::calculaVolume()
{
	return m_aresta * m_aresta * m_aresta;
}