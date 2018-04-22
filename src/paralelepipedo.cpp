/**
 * @file	paralelepipedo.cpp
 * @brief	Implementação dos métodos da classe Paralelepipedo em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */
#include "paralelepipedo.h"


Paralelepipedo::Paralelepipedo(double aresta1, double aresta2, double aresta3)
{
	m_aresta1 = aresta1;
	m_aresta2 = aresta2;
	m_aresta3 = aresta3;
}
Paralelepipedo::~Paralelepipedo(){}

/**
  * @brief 		Método que retorna o valor da área do paralelepipedo
  * @details   
  * @params		
  * @return		O valor da área do paralelepipedo
  * @sa 		https://github.com/matosleo
*/
double 
Paralelepipedo::calculaArea()
{
	return (2 * m_aresta1  * m_aresta2) + (2 * m_aresta1 * m_aresta3) + (2 * m_aresta2 * m_aresta3);
}

/**
  * @brief 		Método que retorna o valor do volume do paralelepipedo
  * @details   
  * @params		
  * @return		O valor do volume do paralelepipedo
  * @sa 		https://github.com/matosleo
*/
double 
Paralelepipedo::calculaVolume()
{
	return m_aresta1 * m_aresta2 * m_aresta3;
}