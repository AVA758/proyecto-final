/*
La clase "Inmbueble", que tiene los aspectos de dónde vives (departamento, casa, hotel, etc.), todo para tomar en cuenta si el ambiente del perro es adecuado o no.
*/


#include<string>


class Inmueble{ //Clase
private: //Encapsulamiento
//Atributos (abstracción)
  std::string tipo; //Casa, departamento, hotel, casa rodante, etc.
  float area; //en metros cuadrados
  float tamPatio; //en metros cuadrados
 

public: //Encapsulamiento
//Constructor1
  Inmueble(): tipo(""), area(0.0), tamPatio(0.0){};
  
//Constructor2
  Inmueble(std::string tip, float ar, float tamp): tipo(tip), area(ar), tamPatio(tamp){};

//"índice" de los métodos getters
  std::string get_tipo();
  float get_area();
  float get_tamPatio();
  

//"índice" de los métodos setters
  void set_tipo(std::string );
  void set_area(float );
  void set_tamPatio(float );
 

};


//Getters
std::string Inmueble::get_tipo(){
  return tipo;
}
float Inmueble::get_area(){
  return area;
}
float Inmueble::get_tamPatio(){
  return tamPatio;
}


//Setters
void Inmueble::set_tipo(std::string tip){
  tipo = tip;
}
void Inmueble::set_area(float ar){
  area = ar;
}
void Inmueble::set_tamPatio(float tamp){
  tamPatio = tamp;
}
