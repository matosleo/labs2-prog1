/**
 * @file	circulo.cpp
 * @brief	Implementação dos métodos da classe Circulo em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */
#include "circulo.h"

Circulo::Circulo(double diametro):m_diametro(diametro) {}

Circulo::~Circulo(){}

/**
  * @brief 		Método que retorna o valor do raio do círculo
  * @details   
  * @params
  * @return		O valor do raio do círculo
  * @sa 		https://github.com/matosleo
*/
double getRaio(double diametro)
{
	return diametro/2;
}

/**
  * @brief 		Método que retorna o valor da área do círculo
  * @details   
  * @params		
  * @return		O valor da área do círculo
  * @sa 		https://github.com/matosleo
*/
double
Circulo::calculaArea()
{
	return PI * getRaio(m_diametro) * getRaio(m_diametro);
}

/**
  * @brief 		Método que retorna o valor do perímetro do círculo
  * @details   
  * @params		
  * @return		O valor do perímetro do círculo
  * @sa 		https://github.com/matosleo
*/
double 
Circulo::calculaPerimetro()
{
	return 2 * PI * getRaio(m_diametro);
}