#include <iostream>
using namespace std;
class UDMedicion{
  //atributos
    protected : float kilometros, millas, metros, pulgadas, libras, kilos;

    protected :
      UDMedicion(float km, float ml, float m, float p, float l, float k){
        kilometros=km;
        millas=ml;
        metros=m;
        pulgadas=p;
        libras=l;
        kilos=k;

      }
// kilometros a Millas
void kmtoml();
// Millas a Kilometro
void mltokm();
//metro a pulgadas
void MtoP();
//pulgadas a metros
void PtoM();
//libras a kilos
void LtoK();
//kilos a libras
void KtoL();
};
