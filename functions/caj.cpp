#include <iostream>

using namespace std;
const string contracorrecta= "12345";
string contra = "";
string usuario;
string eleccion= "";
double fondos = 5000;
double retiro;

void cajero(){
  std::cout << "bienvenido a la simulacion de cajero automatico" << '\n';
  std::cout << "ingrese su usuario" << '\n';
  std::cin >> usuario;
  std::cout << "ingrese la contrasenia: " << '\n';
  std::cin >> contra;
  if (contra!=contracorrecta){
    std::cout << "contrasenia incorrecta" << '\n';
    exit(EXIT_SUCCESS);
  }//cierreif
  system("cls");
  std::cout << "bienvenido: " <<usuario<< '\n';

while(eleccion !="2"){
  std::cout << '\n';
  system("cls");
  std::cout << "Fondos disponibles: " << fondos << '\n';
  std::cout << "que deseas hacer?" << '\n';
  std::cout << '\n';
  std::cout << "(1) retirar dinero" << '\n';
  std::cout << "(2) salir" << '\n';
  std::cin >> eleccion;
  if(eleccion=="1"){
    std::cout << '\n';
    std::cout << "ingrese la cantidad a retirar: ";
    std::cin >> retiro;
    if (retiro > fondos || retiro <= 0){
      std::cout << '\n';
      std::cout << "no tienes fondos suficientes" << '\n';
    }else{
      std::cout << '\n';
      std::cout << "el monto ah sido retirado ah sido: " << retiro<< '\n';
      fondos=fondos-retiro;
      system("pause");
    }





  }//cierreif




}//cierrewhile












}
