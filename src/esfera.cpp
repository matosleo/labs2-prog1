/**
 * @file	esfera.cpp
 * @brief	Implementação dos métodos da classe Esfera em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */
#include "esfera.h"

Esfera::Esfera(double diametro):m_diametro(diametro){}

Esfera::~Esfera(){}

/**
  * @brief 		Método que retorna o valor do raio da esfera
  * @details   
  * @params
  * @return		O valor do raio da esfera
  * @sa 		https://github.com/matosleo
*/
double 
Esfera::getRaio()
{
return m_diametro / 2;
}

/**
  * @brief 		Método que retorna o valor da área da esfera
  * @details   
  * @params		
  * @return		O valor da área da esfera
  * @sa 		https://github.com/matosleo
*/
double 
Esfera::calculaArea()
{
	return 4 * PI * pow(getRaio(), 2);
}

/**
  * @brief 		Método que retorna o valor do volume da esfera
  * @details   
  * @params		
  * @return		O valor do volume da esfera
  * @sa 		https://github.com/matosleo
*/
double 
Esfera::calculaVolume()
{
	return (PI * pow(getRaio(), 3) * 4) / 3;
}
