/* 
Alain Vicencio Arizabalo A01620758

Adopción de perritos.
Este programa, una ve que esté 100% terminado, te presentará un refugio para perritos, donde se te presentarán dos tipos de caninos, los adultos y los cachorros. Cada tipo te presentará información como su número de identificación, su raza, edad, tamaño y peso, siendo que la diferencia es que los adultos muestran cantidades de salidas que requieren para pasear al día, y los cachorros las horas que necesitas prestarles para jugar al día. 


*/

//Las bibliotecas que servirán para incluí las clases y subclases del proyecto. 
#include <iostream>   
#include "Perrito.h" 
#include "Refugio.h"

using namespace std;

//El menu para dar la opción de ver a los cachorros, adultos u otra acción. 
void menu(){

    //Muestra a los perros disponibles para adopción, sperando en adultos y en cachorros
    cout << "\n \n REFUGIO SAN SCOOBY\n";
    cout<< "Porque todos los perros merecen un hogar.\n \n";
    cout << "1. Perros Adultos. \n";
    cout << "2. Perros Cachorros \n";
    cout << "3. ---. \n";
    cout << "4. ---. \n";
    cout << "5. ---. \n";
    cout << "6. ---.  \n";
    cout << "7. Agregar Perro Adulto. \n";
    cout << "8. --- \n";
    cout << "9. Agregar Perro Cachorro \n";
    cout << "10. ---. \n";
    cout << "11. Salir. \n";
}

int main(int argc, char* argv[]){

  	Refugio refugio;
  	refugio.set_PerritosAdultos();
  	refugio.set_PerritosCachorros();
  	string temp_raza;
    int temp_edad;
    float temp_tam;
    float temp_peso;
    
    

    int opcion = 0, temp_salidas = 0, temp_horasDeJuego = 0; 

    while(opcion < 11 && opcion > -1){

  		//Se despliega el menu
  		menu();

  		//Elegir opción
  		cin >> opcion;

  		//Elección
  		switch(opcion){

  			//En caso de elegir la opción 1, que mandará a mostrar a los perros adultos.
  			case 1:
  				refugio.set_PerritosAdultos();
  			  break;

  			//En caso de elegir la opción 2, que mandará a mostrar a los perros cachorros.
  			case 2:
  				refugio.set_PerritosCachorros();
  			  break;

  			//Acción indefinida por el momento.
  			case 3:
  				
  			  break;

  			//Acción indefinida por el momento.
  			case 4:
  				
  			  break;

  			//Acción indefinida por el momento. 
  			case 5:
  			
   			  break;

  			//Acción indefinida por el momento.
  			case 6:
  				
  		  	break;

  			//En caso de elegir la opción 7, mandará a agregar un nuevo perro adulto al refugio.
  			case 7:
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

          refugio.agregaAdulto(temp_raza, temp_edad, temp_tam, temp_peso, temp_salidas);
  			  break;

  			//En caso de elegir la opción 8, mandará a agrefar a un nuevo perro cachorro al refugio.
  			case 8:
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

          refugio.agregaCachorro(temp_raza, temp_edad, temp_tam, temp_peso, temp_horasDeJuego);
  			  break;

  			case 9: //Acción todavía no programada. Es para mandar a eliminar a un perro adulto del refugio, es decir, ADOPTARLO.
  				
  			  break;

  			case 10: //Acción todavía no programada. Es para mandar a eliminar a un perro cachorro del refugio, es decir, ADOPTARLO.
  				
  			  break;

  		}
    }
}