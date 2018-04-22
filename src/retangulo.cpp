/**
 * @file	retangulo.cpp
 * @brief	Implementação dos métodos da classe Retangulo em C++
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#include "retangulo.h"

Retangulo::Retangulo(double base, double altura):m_base(base), m_altura(altura) {}

Retangulo::Retangulo(double l):m_base(l), m_altura(l) {}

Retangulo::~Retangulo(){}

/**
  * @brief 		Método que retorna o valor da área do retângulo
  * @details   
  * @params   valor da base do retangulo
  * @params   valor da altura do retangulo
  * @return		O valor da área do retângulo
  * @sa 		https://github.com/matosleo
*/
double
Retangulo::calculaArea(double base, double altura)
{
	return base * altura;
}

/**
  * @brief 		Método que retorna o valor da área do retângulo com lados iguais
  * @details  Função sobrecarregada para a forma plana quadrado
  * @params		valor dos lados do quadrado
  * @return		O valor da área do quadrado
  * @sa 		https://github.com/matosleo
*/
double
Retangulo::calculaArea(double lados)
{
	return pow(lados,2);
}

/**
  * @brief 		Método que retorna o valor do perímetro do retângulo
  * @details   
  * @params   valor da base do retangulo
  * @params   valor da altura do retangulo	
  * @return		O valor do perímetro do retângulo
  * @sa 		https://github.com/matosleo
*/
double
Retangulo::calculaPerimetro(double base, double altura)
{
	return 2 * (base + altura);
}

/**
  * @brief 		Método que retorna o valor do perímetro do retângulo com lados iguais
  * @details   	função sobrecarregada para a forma plana quadrado
  * @params   valor dos lados do quadrado
  * @return		O valor do perímetro do quadrado
  * @sa 		https://github.com/matosleo
*/
double
Retangulo::calculaPerimetro(double lados)
{
	return 4 * lados;
}