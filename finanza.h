/*
La clase "Finanza" que tiene los datos de tus ganancias al mes, considerando tus ganancias netas y la cantidad de gasto sin considerar las necesidades del perro.
*/

#include<string>


class Finanza{ //Clase
private: //Encapsulamiento
//Atributos (abstracción)
  std::string estado; //Estado financiero (Estable o inestable)
  float ingresoMensualNeto; //En pesos mexicanos (MXN)
  float gastoMensual; //EN pesos mexicanos (MXN) SIN considerar los gastos para el perro
 

public: //Encapsulamiento
//COnstructor1
  Finanza(): estado(""), ingresoMensualNeto(0.0), gastoMensual(0.0){};
  
//Constructor2
  Finanza(std::string est, float imn, float gasm): estado(est), ingresoMensualNeto(imn), gastoMensual(gasm){};


//"índice" de los métodos getters
  std::string get_estado();
  float get_ingresoMensualNeto();
  float get_gastoMensual();
  

//"índice" de los métodos setters
  void set_estado(std::string );
  void set_ingresoMensualNeto(float );
  void set_gastoMensual(float );
 

};

//Getters
std::string Finanza::get_estado(){
  return estado;
}
float Finanza::get_ingresoMensualNeto(){
  return ingresoMensualNeto;
}
float Finanza::get_gastoMensual(){
  return gastoMensual;
}

//Setters
void Finanza::set_estado(std::string est){
  estado = est;
}
void Finanza::set_ingresoMensualNeto(float imn){
  ingresoMensualNeto = imn;
}
void Finanza::set_gastoMensual(float gasm){
  gastoMensual = gasm;
}
