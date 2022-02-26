#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

float kilometros, millas, metros, pulgadas, libras, kilos;
float no_1,no_2;
  // kilometros a Millas
  void kmtoml(float no_1){
    //system("cls");
					std::cout<<"kilometros a millas "<<endl;

					millas=no_1*0.62137;
					cout<<"La respuesta es: "<<millas<<" Millas "<<endl;
          system("pause");
        };

  // Millas a Kilometro
  void mltokm(float no_1){
  //system("cls");
		cout<<"Millas a kilometros ";
		millas==no_1;
		kilometros=millas*1.609;
		cout<<"La respuesta es: "<<kilometros<<" KM "<<endl;
    system("pause");
  };

  //metro a pulgadas
  void MtoP(float no_1){

		cout<<"metro a pulgadas: ";
		metros==no_1;
		pulgadas=no_1*39.3701;
		cout<<"La respuesta es: "<<pulgadas<<" Pulgadas "<<endl;
    system("pause");
  };

  //pulgadas a metros
  void PtoM(float no_1){
	cout<<"pulgadas a metros: ";
	pulgadas==no_1;
	metros=no_1/39.37;
  	cout<<"La respuesta es: "<<metros<<" mts "<<endl;
    system("pause");
          };
  //libras a kilos
  void LtoK(float no_1){

  	cout<<"Ilibras a kilos ";
  	kilos=no_1/2.205;
  	cout<<"La respuesta es: "<<kilos<<" Kilos "<<endl;
    system("pause");
  };
  //kilos a libras
  void KtoL(float no_1){
    	cout<<"kilos a libras ";
  		libras=no_1*2.20462;
  		cout<<"La respuesta es: "<<libras<<" Libras "<<endl;
      system("pause");
    }
