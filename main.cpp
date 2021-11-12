/*
Alain Vicencio Arizabalo A01620758

Proyecto: ¿Eres apto para tener a un perro?

Este programa, una vez que esté completamente desarrollado, deberá comparar tus datos de las 3 clases para averiguar si tienes la capacidad de cuidar a un perro de x raza (edad, tamaño y peso), en x inmueble (casa departamento, trailer, hotel, etc.) con x finanzas (dependiendo de tus ingresos y gastos sin contar las necesidades del canino.)

Este es el main donde todos las clases se reunen. Incluye las clases:
*perro
*inmueble
*finanzas

LLama a los métodos de las clases dos veces, una inicial y otra final, y muestra todas al ejecutar el programa

*/

#include <iostream>
#include <string>
#include "perro.h"
#include "inmueble.h"
#include "finanza.h"



int main(){

  Perro perro_1("Chihuahua", 12, 17, 2.5);
  std::cout << perro_1.get_raza() << " "
            << perro_1.get_edad() << " "\
            << perro_1.get_tam() << " "\
            << perro_1.get_peso() << std::endl;


  perro_1.set_edad(14);
  perro_1.set_tam(17);
  perro_1.set_peso(2.6);


  std::cout << perro_1.get_raza() << " "
            << perro_1.get_edad() << " "\
            << perro_1.get_tam() << " "\
            << perro_1.get_peso() << std::endl;


  Inmueble inmueble_1("Casa", 100.0, 30.0);
  std::cout << inmueble_1.get_tipo() << " "
            << inmueble_1.get_area() << " "\
            << inmueble_1.get_tamPatio() << std::endl;


  inmueble_1.set_tipo("Departamento");
  inmueble_1.set_area(50);
  inmueble_1.set_tamPatio(0);


  std::cout << inmueble_1.get_tipo() << " "
            << inmueble_1.get_area() << " "\
            << inmueble_1.get_tamPatio() << std::endl;
  

  Finanza finanza_1("Estable", 20000, 17000);
  std::cout << finanza_1.get_estado() << " "
            << finanza_1.get_ingresoMensualNeto() << " "\
            << finanza_1.get_gastoMensual() << std::endl;


  finanza_1.set_estado("Estable");
  finanza_1.set_ingresoMensualNeto(20000);
  finanza_1.set_gastoMensual(17000);


  std::cout << finanza_1.get_estado() << " "
            << finanza_1.get_ingresoMensualNeto() << " "\
            << finanza_1.get_gastoMensual() << std::endl;

  return 0;

}