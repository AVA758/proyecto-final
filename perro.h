/*
La clase "Perro", que tiene los aspectos de raza, edad, tamaño y peso del perro en cuestión.
*/

#include<string>


class Perro{ //Clase
private: //Encapsulamiento
//Atributos (abstracción)
  std::string raza; //raza del perro en cuestión
  int edad; //en años humanos
  float tam; //en centímetros
  float peso; // en kilogramos
 

public: //Encapsulamiento
//constructor1
  Perro(): raza(""), edad(0), tam(0.0), peso(0.0){};
  
//constructor2
  Perro(std::string raz, int ed, float ta, float pes): raza(raz), edad(ed), tam(ta), peso(pes){};

//"índice" de los métodos getters
  std::string get_raza();
  int get_edad();
  float get_tam();
  float get_peso();
  

//"índice" de los métodos setters
  void set_raza(std::string );
  void set_edad(int );
  void set_tam(float );
  void set_peso(float );
 

};


//Getters
std::string Perro::get_raza(){
  return raza;
}
int Perro::get_edad(){
  return edad;
}
float Perro::get_tam(){
  return tam;
}
float Perro::get_peso(){
  return peso;
}

//setters
void Perro::set_raza(std::string raz){
  raza = raz;
}
void Perro::set_edad(int ed){
  edad = ed;
}
void Perro::set_tam(float ta){
  tam = ta;
}
void Perro::set_peso(float pes){
  peso = pes;
}
