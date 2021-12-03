/* 
Alain Vicencio Arizabalo A01620758

Adopción de perritos.
El programa presenta un refgio para perritos, donde se presentan dos tipos de caninos: los adultos y los cachorros. Cada tipo presenta información general, como lo son su número de identificación (id), raza, edad, tamaño, peso, y si está presente o no como objeto. Los adultos también muestran sus salidas a paseo durante el día, mientras que los cachorros muestras sus horas de juego. 

El programa permite al refugio registrar sus perros en sus respectivas clases y da la opción de agregar o retirar un perrito según lo consideren.

*/

//Las bibliotecas que servirán para inclur las clases y subclases del proyecto. 
#include <iostream>   
#include "Perrito.h" 
#include "Refugio.h"

using namespace std;

//El menu para dar la opción de ver a los cachorro o adultos, agregar algún perro o retirarlo. 
void menu(){

    //Muestra a los perros disponibles para adopción, sperando en adultos y en cachorros, la opción de agregar un perrito de alguna clase, y la opción de retirarlo
    cout << "\n \n REFUGIO SAN SCOOBY\n";
    cout<< "Porque todos los perros merecen un hogar.\n \n";
    cout << "-Perros Adultos- \n";
    cout << "1. Mostrar Perros Adultos. \n";
    cout << "2. Agregar Perro Adulto. \n";
    cout << "3. Retirar Perro Adulto. \n \n";
    cout << "-Perros Cachorros- \n";
    cout << "4. Mostrar Perros Cachorros \n";
    cout << "5. Agregar Perro Cachorro \n";
    cout << "6. Retirar Perro Cachorro. \n \n";
    cout << "7. Salir. \n";
}

int main(int argc, char* argv[]){

  	Refugio refugio;
  	refugio.creaPerritosAdultos();
  	refugio.PerritosCachorros();
    Cachorro cach(1, "Chihuahua", 5, 30, 20, true, 3);
    Adulto adul(1, "Labrador", 5, 50, 20, true, 3);
  	string temp_raza;

    
    int temp_id;
    int temp_edad;
    float temp_tam;
    float temp_peso;
    bool temp_presente;
    
    

    int opcion = 0, temp_salidas = 0, temp_horasDeJuego = 0; 

    while(opcion < 7 && opcion > -1){

  		//Se despliega el menu
  		menu();

  		//Elegir opción
  		cin >> opcion;

  		//Elección
  		switch(opcion){

  			//En caso de elegir la opción 1, que mandará a mostrar a los perros adultos.
  			case 1:
  				refugio.aberperradulto();
  			  break;

  			//En caso de elegir la opción 2, pedirá los datos necesarios para crear a un objeto tipo perrito adulto
  			case 2:
          cout << "Raza: ";
          cin >> temp_raza;
          cout << "Edad: ";
          cin >> temp_edad;
          cout << "Tamaño (en cm): ";
          cin >> temp_tam;
          cout << "Peso (en kg): ";
          cin >> temp_peso;
          cout << "Salidas a pasear en el día: ";
          cin >> temp_salidas;

          temp_presente = true;

          refugio.agregaAdulto(temp_raza, temp_edad, temp_tam, temp_peso, temp_presente,  temp_salidas);
 
  			  break;
          
  			//En caso de elegir la opción 3, pedirá el número de id para retirar a un perro adulto ya presente en el refugio.
  			case 3:
  				refugio.mueveAdulto(adul);
          cout << "¿Cuál es el id del adulto a retirar?: ";
          cin >> temp_id;
          
          refugio.get_adulto(temp_id);

  			  break;

  			//En caso de elegir la opción 4, mandará a mostrar a los perros cachorros
  			case 4:
          refugio.aberperrcachorro();
  			  break;


  			//En caso de elegir la opción 5, pedirá los datos (atriburtos) necesarios para crear un objeto tipo Perrito Cachorro
  			case 5:
  				cout << "Raza: ";
          cin >> temp_raza;
          cout << "Edad: ";
          cin >> temp_edad;
          cout << "Tamaño (en cm): ";
          cin >> temp_tam;
          cout << "Peso (en kg): ";
          cin >> temp_peso;
          cout << "Horas de juego en el día: ";
          cin >> temp_horasDeJuego;

          temp_presente = true;

          refugio.agregaCachorro(temp_raza, temp_edad, temp_tam, temp_peso, temp_presente, temp_horasDeJuego);
  				
  			  break;
   			  

  			//En caso de elegir la opción 6, pedirá el id para retirar a un perro cachorro ya presente en el refugio
  			case 6:
  				refugio.mueveCachorro(cach);
          cout << "¿Cuál es el id del cachorro a retirar?: ";
          cin >> temp_id;
          
          refugio.get_cachorro(temp_id);

  			  break;
  				

  		}
    }
}