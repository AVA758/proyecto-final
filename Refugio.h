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
        int adul_indice, cacho_indice;

    public :
        //Constuctor
        Refugio(): adul_indice(0), cacho_indice(0){};

        
        // Metodos setters y otros.
        void set_PerritosAdultos();
        void set_PerritosCachorros();
        void agregaAdulto(string raza, int edad, float tam, float peso, int salidas);
        void agregaCachorro(string raza, int edad, float tam, float peso, float horasDeJuego );
        
};

//Método para llenar arreglo con ejemplos. Es para darle los valores de los atributos a los perros Adultos.
void Refugio::set_PerritosAdultos(){

    adul[0] = Adulto(adul_indice, "Chihuahua", 7, 20.2, 2.0, 3 );
    adul_indice += 1;
    adul[1] = Adulto(adul_indice, "Bichón Frisé", 8, 24.0, 5, 2);
    adul_indice += 1;
    adul[2] = Adulto(adul_indice, "Labrador", 12, 58, 31.0, 2);
    adul_indice += 1;
    adul[3] = Adulto(adul_indice, "Crestado chino", 9, 25.5, 5.4, 2);
    adul_indice += 1;
    adul[4] = Adulto(adul_indice, "Labrador", 6, 57.7, 30.0, 3);
    adul_indice +=1;
    adul[5] = Adulto(adul_indice, "Chamuco", 8, 50.3, 24.6, 2 );
    adul_indice += 1;
    adul[6] = Adulto(adul_indice, "Pug", 8, 34.0, 7.1, 2);


}

//Método para llenar arreglo con ejemplos. Es para darle los valores de los atributos a los perros Cachorros.
void Refugio::set_PerritosCachorros(){

    cacho[0] = Cachorro(cacho_indice, "Pug", 1, 20.2, 2.0, 3 );
    cacho_indice += 1;
    cacho[1] = Cachorro(cacho_indice, "Chihuahua", 0, 24.0, 5, 2);
    cacho_indice += 1;
    cacho[2] = Cachorro(cacho_indice, "Chihuahua", 0, 58, 31.0, 2);
    cacho_indice += 1;
    cacho[3] = Cachorro(cacho_indice, "Xoloitzcuintle", 2, 25.5, 5.4, 2);
    cacho_indice += 1;
    cacho[4] = Cachorro(cacho_indice, "Labrador", 1, 57.7, 30.0, 3);
    cacho_indice +=1;
    cacho[5] = Cachorro(cacho_indice, "Labrador", 0, 50.3, 24.6, 2 );
    cacho_indice += 1;
    cacho[6] = Cachorro(cacho_indice, "Crestado Chino", 1, 34.0, 7.1, 2);
}

//Agregamos un perro adulto. al refugio, con su id, raza, tamaño, peso y salidas.
void Refugio::agregaAdulto(string raza, int edad, float tam, float peso, int salidas){
    adul_indice += 1;
    Adulto aux(adul_indice, raza, edad, tam, peso, salidas);
    adul[adul_indice] = aux;

}


//Agregamos un perro cachorro. al refugio, con su id, raza, tamaño, peso y horas de juego.
void Refugio::agregaCachorro(string raza, int edad, float tam, float peso, float horasDeJuego ){

    cacho_indice += 1;
    Cachorro aux(cacho_indice, raza, edad, tam, peso, horasDeJuego);
    cacho[cacho_indice] = aux;

}

#endif // Termina REFUGIO_H
