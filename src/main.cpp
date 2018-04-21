#include <iostream>
#include <string>
#include "retangulo.h"
#include "triangulo.h"
#include "circulo.h"
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																						

void imprimeRegra();
bool validaValor(double, double);
bool validaValor(double);
void imprimeResultadosPlanas(std::string, double, double);

int main(int argc, char const *argv[]) //argv[0]:geometria argv[1]:forma argv[2]:valor1 argv[3]:valor2
{
	std::string formas[4] = {"triangulo", "retangulo", "quadrado", "circulo"};
	int opcao;
	for(int i = 0; i < 4; i++)
	{

		if(formas[i] == argv[1])
		{
			opcao = i;
		}
	}

	if(argc > 1)
	{
		switch(opcao)
		{
			case 0:
			{
				double valor = std::stod(argv[2]);
				if(validaValor(valor))
				{
					Triangulo t(valor);
					imprimeResultadosPlanas(argv[1], t.calculaArea(valor, t.getAltura()), t.calculaPerimetro(valor));
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
				break;
			}

			case 3:
			{
				double valor = std::stod(argv[2]);
				if(validaValor(valor))
				{
					Circulo c(valor);
					imprimeResultadosPlanas(argv[1], c.calculaArea(valor), c.calculaPerimetro(valor));
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

void imprimeRegra() 
{
	std::cout << "Instrucoes de uso: O programa em execucao deve receber por linha de comando\n";
	std::cout << "a indicacao da forma geométrica, seguida dos dados necessários para os cálculos." << std::endl;
	std::cout << "Por exemplo, na linha de comando, digite: ./bin/geometria quadrado 6" << std::endl;
}

bool validaValor(double valor1 = 1.0, double valor2 = 1.0)
{
	return valor1 && valor2;
}

bool validaValor(double valor1 = 1)
{
	return valor1;
}

void imprimeResultadosPlanas(std::string forma, double valor1, double valor2) 
{
	std::cout << "Area do " << forma << ": " << valor1 << std::endl;
	std::cout << "Perimetro do " << forma << ": " << valor2 << std::endl;
}