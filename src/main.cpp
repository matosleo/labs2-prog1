/**
 * @file	main.cpp
 * @brief	aquivo main que executa o programa geometria
 * @author	Leonardo dos Santos Matos
 * @since	17/04/2018
 * @date	21/04/2018
 * @sa		https://github.com/matosleo
 */

#include <iostream>
#include <string>
#include <iomanip>
#include "retangulo.h"
#include "triangulo.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																						

void imprimeRegra();
bool validaValor(double);
bool validaValor(double, double);
bool validaValor(double, double, double);
void imprimeResultadosPlanas(std::string, double, double);
void imprimeResultadosGeo(std::string, double, double);

int main(int argc, char const *argv[]) //argv[0]:geometria argv[1]:forma argv[2]:valor1 argv[3]:valor2
{
	if(argc > 2)
	{
		std::string formas[8] = {"triangulo", "retangulo", "quadrado", "circulo", "piramide", "cubo", "paralelepipedo", "esfera"};
		int opcao;
		for(int i = 0; i < 8; i++)
		{
			if(formas[i] == argv[1])
			{
				opcao = i;
			}
		}
		switch(opcao)
		{
			case 0:
			{
				double valor = std::stod(argv[2]);
				if(validaValor(valor))
				{
					Triangulo t(valor);
					imprimeResultadosPlanas(argv[1], t.calculaArea(), t.calculaPerimetro());
				}
				else
				{
					std::cout << "Valor inválido" << std::endl;
				}
				break;
			}

			case 1:
			{
				double valor1 = std::stod(argv[2]);
				double valor2 = std::stod(argv[3]);
				if(validaValor(valor1, valor2))
				{
					Retangulo r(valor1, valor2);
					imprimeResultadosPlanas(argv[1], r.calculaArea(valor1, valor2), r.calculaPerimetro(valor1, valor2));
				}
				else
				{
					std::cout << "Valores inválidos" << std::endl;
				}
				break;
			}

			case 2:
			{
				double valor = std::stod(argv[2]);
				if(validaValor(valor))
				{
					Retangulo q(valor);
					imprimeResultadosPlanas(argv[1], q.calculaArea(valor), q.calculaPerimetro(valor));
				}
				else
				{
					std::cout << "Valor inválido" << std::endl;
				}				
				break;
			}

			case 3:
			{
				double valor = std::stod(argv[2]);
				if(validaValor(valor))
				{
					Circulo c(valor);
					imprimeResultadosPlanas(argv[1], c.calculaArea(), c.calculaPerimetro());
				}
				else
				{
					std::cout << "Valor inválido" << std::endl;
				}				
				break;
			}

			case 4:
			{
				double valor = std::stod(argv[2]);
				if(validaValor(valor))
				{
					Piramide p(valor);
					imprimeResultadosGeo(argv[1], p.calculaArea(), p.calculaVolume());
				}
				else
				{
					std::cout << "Valor inválido" << std::endl;
				}				
				break;
			}

			case 5:
			{
				double valor = std::stod(argv[2]);
				if(validaValor(valor))
				{
					Cubo cu(valor);
					imprimeResultadosGeo(argv[1], cu.calculaArea(), cu.calculaVolume());
				}
				else
				{
					std::cout << "Valor inválido" << std::endl;
				}				
				break;
			}

			case 6:
			{
				double valor1 = std::stod(argv[2]);
				double valor2 = std::stod(argv[3]);
				double valor3 = std::stod(argv[4]);
				if(validaValor(valor1, valor2, valor3))
				{
					Paralelepipedo pa(valor1, valor2, valor3);
					imprimeResultadosGeo(argv[1], pa.calculaArea(), pa.calculaVolume());
				}
				else
				{
					std::cout << "Valores inválidos" << std::endl;
				}					
				break;
			}

			case 7:
			{
				double valor = std::stod(argv[2]);
				if(validaValor(valor))
				{
					Esfera es(valor);
					imprimeResultadosGeo(argv[1], es.calculaArea(), es.calculaVolume());
				}
				else
				{
					std::cout << "Valor inválido" << std::endl;
				}				
				break;
			}			
		}
	}
	else
	{
		imprimeRegra();
	}	

	return 0;
}

/**
  * @brief 		Método que imprime a regra execução do programa
  * @details   
  * @params
  * @return		
  * @sa 		https://github.com/matosleo
*/
void imprimeRegra() 
{
	std::cout << std::endl << "Instrucoes de uso: O programa em execucao deve receber por linha de comando\n";
	std::cout << "a indicacao da forma geométrica, seguida dos dados necessários para os cálculos." << std::endl;
	std::cout << "Por exemplo, na linha de comando, digite: ./bin/geometria quadrado 6" << std::endl;
}

/**
  * @brief 		Método booleano que valida o valor recebido
  * @details    Verifica se o valor é maior do que zero
  * @params		Um valor do tipo double
  * @return		Verdadeiro ou falso
  * @sa 		https://github.com/matosleo
*/
bool validaValor(double valor1)
{
	return (valor1 > 0)? true : false;
}

/**
  * @brief 		Método booleano que valida os valores recebidos
  * @details    Verifica se os valores são maiores do que zero
  * @params		Um valor do tipo double
  * @params		Um valor do tipo double
  * @return		Verdadeiro ou falso
  * @sa 		https://github.com/matosleo
*/
bool validaValor(double valor1, double valor2)
{
	return (valor1 > 0 && valor2 > 0)? true : false;
}

/**
  * @brief 		Método booleano que valida os valores recebidos
  * @details    Verifica se os valores são maiores do que zero
  * @params		Um valor do tipo double
  * @params		Um valor do tipo double
  * @params		Um valor do tipo double
  * @return		Verdadeiro ou falso
  * @sa 		https://github.com/matosleo
*/
bool validaValor(double valor1, double valor2, double valor3)
{
	return (valor1 > 0 && valor2 > 0 && valor3 > 0)? true : false;
}

/**
  * @brief 		Método que imprime a área e o perímetro de figuras planas
  * @details   
  * @params		valor string com o nome da forma
  * @params		valor double referente a área
  * @params		valor double referente ao perímetro
  * @return		
  * @sa 		https://github.com/matosleo
*/
void imprimeResultadosPlanas(std::string forma, double valor1, double valor2) 
{
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "Area do " << forma << ": " << valor1 << std::endl;
	std::cout << "Perimetro do " << forma << ": " << valor2 << std::endl;
}

/**
  * @brief 		Método que imprime a área e o volume de figuras geométricas
  * @details   
  * @params		valor string com o nome da forma
  * @params		valor double referente a área
  * @params		valor double referente ao volume
  * @return		
  * @sa 		https://github.com/matosleo
*/
void imprimeResultadosGeo(std::string forma, double valor1, double valor2)
{
	std::cout << std::setprecision(2) << std::fixed;
	if(forma == "piramide" || forma == "esfera")
	{
		std::cout << "Area da " << forma << ": " << valor1 << std::endl;
		std::cout << "Volume da " << forma << ": " << valor2 << std::endl;		
	}
	else
	{
		std::cout << "Area do " << forma << ": " << valor1 << std::endl;
		std::cout << "Volume do " << forma << ": " << valor2 << std::endl;	
	}
}
