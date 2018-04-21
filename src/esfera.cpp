#include "esfera.h"

Esfera::Esfera(double diametro):m_diametro(diametro){}

Esfera::~Esfera(){}

 double 
 Esfera::getRaio()
 {
  return m_diametro / 2;
 }

 double 
 Esfera::calculaArea()
 {
 	return 4 * PI * pow(getRaio(), 2);
 }

 double 
 Esfera::calculaVolume()
 {
 	return (PI * pow(getRaio(), 3) * 4) / 3;
 }
