/*
 
Alain Vicencio Arizabalo A01620758
Proyecto Final Perritos

Clase Refugio, de donde parte todo, pues ahí se encuentran los objetos de los perros. De aquí viene la composición a la clase Perrito, y de ahí, la herencia a la clase Adulto y Cachorro.

 */



#ifndef REFUGIO_H_
#define REFUGIO_H_
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

#include "Perrito.h"
const int MAX = 100; //tamaño de arreglos


class Refugio { //Clase


    private: //Encapsulamiento
//ABstracción privados (abstracción) y declaración de variables. 
        Adulto adul[MAX]; //Indicar el número del perrito.
        Cachorro cacho[MAX];
        int adul, cacho;

    public :
        //Constuctor
        Refugio(): adul(0), cacho(0){};

        
        // Metodos setters y otros.
        void set_Perritos_Adultos();
        void set_Perritos_Cachorros();
        void agregaAdulto(string raza, int edad, float tam, float peso, int salidas);
        void agregaCachorro(string raza, int edad, float tam, float peso, float horasDeJuego );
        

//Método para llenar arreglo con ejemplos. Es para darle los valores de los atributos a los perros Adultos.
void Refugio::set_Perritos_Adultos(){

    adul[0] = Adultos(iadul, "Chihuahua", 7, 20.2, 2.0, 3 );
    iadul += 1;
    adul[1] = Adulto(iadul, "Bichón Frisé", 8, 24.0, 5, 2);
    iadul += 1;
    adul[2] = Adulto(iadul, "Labrador", 12, 58, 31.0, 2);
    iadul += 1;
    adul[3] = Adulto(iadul, "Crestado chino", 9, 25.5, 5.4, 2);
    iadul += 1;
    adul[4] = Adulto(iadul, "Labrador", 6, 57.7, 30.0, 3);
    iadul +=1;
    adul[5] = Adulto(iadul, "Chamuco", 8, 50.3, 24.6, 2 );
    iadul += 1;
    adul[6] = Adulto(iadul, "Pug", 8, 34.0, 7.1, 2);


}

//Método para llenar arreglo con ejemplos. Es para darle los valores de los atributos a los perros Cachorros.
void Cachorro::set_Perritos_Cachorros(){

    cacho[0] = Cachorro(icacho, "Pug", 1, 20.2, 2.0, 3 );
    icacho += 1;
    cacho[1] = Cachorro(icacho, "Chihuahua", 0, 24.0, 5, 2);
    icacho += 1;
    cacho[2] = Cachorro(icacho, "Chihuahua", 0, 58, 31.0, 2);
    icacho += 1;
    cacho[3] = Cachorro(icacho, "Xoloitzcuintle", 2, 25.5, 5.4, 2);
    icacho += 1;
    cacho[4] = Cachorro(icacho, "Labrador", 1, 57.7, 30.0, 3);
    icacho +=1;
    cacho[5] = Cachorro(icacho, "Labrador", 0, 50.3, 24.6, 2 );
    icacho += 1;
    cacho[6] = Cachorro(icacho, "Crestado Chino", 1, 34.0, 7.1, 2);
}

//Agregamos un perro adulto. al refugio, con su id, raza, tamaño, peso y salidas.
void Refugio::agregaAdulto(string raza, int edad, float tam, float peso, int salidas){
    iadul += 1;
    Adulto aux(iadul, raza, edad, tam, peso, salidas);
    adul[iadul] = aux;

}


//Agregamos un perro cachorro. al refugio, con su id, raza, tamaño, peso y horas de juego.
void Refugio::agregaCachorro(string raza, int edad, float tam, float peso, float horasDeJuego ){

    icacho += 1;
    Cachorro aux(icacho, raza, edad, tam, peso, horasDeJuego);
    cacho[icacho] = aux;

}

#endif // Termina REFUGIO_H