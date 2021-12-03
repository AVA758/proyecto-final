/*

Proyecto Final Perritos
Alain Vicencio Arizabalo
A01620758



Esta es la clase Perrito, donde se usan los métodos para la creación de los perros. Es una clase padre, quien hereda a dos clases hijas, dos tipos de perros: los Adultos, y los Cachorros. 

 */



#ifndef PERRITO_H_
#define PERRITO_H_

#include <string>
#include <sstream>

using namespace std;


class Perrito { //Clase abstracta Perritos

    protected: //Encapsulamiento
//Atributos privados(abstracción) y delcaración de vatriables
        int id; //número de identificación del perro
        string raza; //raza del perro en cuestión
        int edad; //edad en años humanos
        float tam; //tamaño (altura) en centímetros
        float peso; // peso en kg


    public : //Encapsulamiento
        bool presente; //Atributo público, que si el perro está presente o no en el refugio.

        //Constructor 1
        Perrito(): id(0), raza(""), edad(0), tam(0.0), peso(0.0), presente(true){};
        
        //Constructor 2
        Perrito(int n, string raz, int ed, float ta, float pes, bool pres): id(n), raza(raz), edad(ed), tam(ta), peso(pes), presente(pres){};
        
        //Índice de métodos getters
        int get_id() const;
        string get_raza() const;
        int get_edad()const;
        float get_tam()const;
        float get_peso()const;

        // Otro método, mueve los datos obtenidos de los getters a un párrafo pre-escrito.
        string toString()const;

};

//Getters
int Perrito::get_id()const{
   return id;
}
string Perrito::get_raza() const{
    return raza;
}
int Perrito::get_edad() const{
  return edad;
}
float Perrito::get_tam() const{
  return tam;
}
float Perrito::get_peso() const{
  return peso;
}

//Método string
string Perrito::toString()const{

    stringstream aux;
    aux << "El perrito tiene un id de " << id << ". Es de raza "<< raza << ". Tiene " << edad << " años. " << "Mide " << tam << " cm y pesa " << peso << "kilos. \n";
    return aux.str();

}

// Objeto de clase Adulto, heredado de clase Perrito. Una de las dos clases hijas. (Es un perro adulto)

//Escencialmente, es casi lo mismo que la clase Perritos, tiene los mismo puntos de abstracción, encapsulamiento, atributos privados y públicos, etc. La diferencia es en un atributo respectivo.
class Adulto: public Perrito{
    private:
        int salidas; //Atributo exclusivo de los perros adultos, salidas a caminar/pasear. 

    public:
        //Constructor 2
        Adulto(): salidas(0), Perrito(){}; 

      //Constrctor 2
        Adulto(int n, string raz, int ed, float ta, float pes, bool pres, int sal): salidas(sal), Perrito(n, raz, ed, ta, pes, pres){};
    
        
        //Ïndice de métodos getters
         int get_id() const;
         string get_raza() const;
         int get_edad()const;
         float get_tam()const;
         float get_peso()const;
         int get_salidas() const;
         Adulto get_adulto(int id);

         //Método string
         string toString()const;
};

//Getters
int Adulto::get_id()const{
   return id;
}
string Adulto::get_raza() const{
    return raza;
}
int Adulto::get_edad() const{
  return edad;
}
float Adulto::get_tam() const{
  return tam;
}
float Adulto::get_peso() const{
  return peso;
}
int Adulto::get_salidas() const{
  return salidas;
}

//Método string
string Adulto::toString()const{

    stringstream aux;
    aux << "\n El perrito tiene un id de " << id << ". Es de raza "<< raza << ". Tiene " << edad << " años. " << "Mide " << tam << " cm, pesa " << peso << " kilos. Y necesita salir a pasear " << salidas << " veces al día. \n";
    return aux.str();

}

// Objeto de clase Cachorro, heredado de clase Perrito. La otra hija del padre. (Es un perro cachorro)

//Escencialmente, es casi lo mismo que la clase Perritos, tiene los mismo puntos de abstracción, encapsulamiento, atributos privados y públicos, etc. La diferencia es en un atributo respectivo.
class Cachorro: public Perrito{
    private:
        float horasDeJuego; 
        //Atriuto exclusivos de los Cachorros, la cantidad de horas que juega el cachorro. 

    public:
        //Constructor 1
        Cachorro(): horasDeJuego(0), Perrito(){};

        //Constructor 2
        Cachorro(int n, string raz, int ed, float ta, float pes, bool pres, float hor): horasDeJuego(hor), Perrito(n, raz, ed, ta, pes, pres){};
    
        
        //Ïndice metodos getters
         int get_id() const;
         string get_raza() const;
         int get_edad()const;
         float get_tam()const;
         float get_peso()const;
         float get_horasDeJuego() const;
         Cachorro get_cachorro(int id);

         //Mëtodo string
         string toString()const;
};

//Getters
int Cachorro::get_id()const{
   return id;
}
string Cachorro::get_raza() const{
    return raza;
}
int Cachorro::get_edad() const{
  return edad;
}
float Cachorro::get_tam() const{
  return tam;
}
float Cachorro::get_peso() const{
  return peso;
}
float Cachorro::get_horasDeJuego() const{
  return horasDeJuego;
}

//Método string
string Cachorro::toString()const{

    stringstream aux;
    aux << " \n El perrito tiene un id de " << id << " de raza "<< raza << ". Tiene " << edad << " años. " << "Mide " << tam << " cm, pesa " << peso << " kilos. Y necesita jugar " << horasDeJuego << " horas al día. \n";
    return aux.str();

}


#endif //Termina PERRITO_H
