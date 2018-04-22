/**
 * @file	triangulo.cpp
 * @brief	Implementação dos métodos da classe Triangulo em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#include "triangulo.h"

Triangulo::Triangulo(double lado):m_lados(lado){}

Triangulo::~Triangulo(){}

/**
  * @brief 		Método que retorna o valor da altura do triângulo
  * @details   
  * @params		
  * @return		O valor da altura do triângulo
  * @sa 		https://github.com/matosleo
*/
double
Triangulo::getAltura()
{
	return sqrt(3) * m_lados * 1/2;
}

/**
  * @brief 		Método que retorna o valor da área do retângulo
  * @details   	
  * @params		
  * @return		O valor da área do triângulo
  * @sa 		https://github.com/matosleo
*/
double 
Triangulo::calculaArea()
{
	return (m_lados * getAltura()) / 2;
}

/**
  * @brief 		Método que retorna o valor do perímetro do triângulo
  * @details   	
  * @params		
  * @return		O valor do perímetro do triângulo
  * @sa 		https://github.com/matosleo
*/
double 
Triangulo::calculaPerimetro()
{
	return 3 * m_lados;
}