#include "conversorinit.cpp"
#include "operaciones2_numeros.cpp"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
string letra;
double valor;
int milesde,miles,cientos,unidades,decimales;
int binario[50];

//-------------------------------------------------------------------------------------
char numeros[200][40] =
 {
  {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
  {"treinta"},{"treinta y un"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
  {"cuarenta"},{"cuarenta y un"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
  {"cincuenta"},{"cincuenta y un"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
  {"sesenta"},{"sesenta y un"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
  {"setenta"},{"setenta y un"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
  {"ochenta"},{"ochenta y un"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
  {"noventa"},{"noventa y un"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
 };

 char centenas[20][30] =
 {
  {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
 };

 char milesdemiles [200][40]=
  {
  {""},{"ciento"},{"doscientos "},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"setecientos"},{"ochocientos "},{"novecientos"},
  };


 char millones [200][40]=
  {
  {""},{"un millon"},{"dos millones "},{"tres millones"},{"cuatro millones"},{"cinco millones"},{"seis millones"},{"siete millones"},{"ocho millones "},{"nueve millones"},
  {"diez millones"},{"once millones"},{"doce millones"},{"trece millones"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
  {"treinta"},{"treinta y un"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
  {"cuarenta"},{"cuarenta y un"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
  {"cincuenta"},{"cincuenta y un"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
  {"sesenta"},{"sesenta y un"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
  {"setenta"},{"setenta y un"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
  {"ochenta"},{"ochenta y un"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
  {"noventa"},{"noventa y un"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
 };


class call : num{
  //atributos
  private : int suma,resta,multiplicacion,division,unidad,decena,centena,unimil;
            int cont;
  public :
  call(int n1, int n2) : num(n1,n2){

  }

  void sumar(){
    std::cout << "---------" << '\n';
    std::cout << "numero ingresado:" <<numero1<< '\n';
    std::cout << "numero ingresado:" <<numero2<< '\n';
    suma=numero1+numero2;
    std::cout << "la suma de los numeros es: " <<suma<<'\n';
    system("pause");

  }
  void restar(){
    std::cout << "---------" << '\n';
    std::cout << "numero ingresado:" <<numero1<< '\n';
    std::cout << "numero ingresado:" <<numero2<< '\n';
    resta=numero1-numero2;
    std::cout << "la resta de los numeros es: " <<resta<<'\n';
        system("pause");

  }
  void multiplica(){
    std::cout << "---------" << '\n';
    std::cout << "numero ingresado:" <<numero1<< '\n';
    std::cout << "numero ingresado:" <<numero2<< '\n';
    multiplicacion=numero1*numero2;
    std::cout << "la multiplicacion de los numeros es: " <<multiplicacion<<'\n';
        system("pause");

  }
  void dividir(){
    std::cout << "---------" << '\n';
    std::cout << "numero ingresado:" <<numero1<< '\n';
    std::cout << "numero ingresado:" <<numero2<< '\n';
    division=numero1/numero2;
    std::cout << "la division de los numeros es: " <<division<<'\n';
        system("pause");
  }

  void numpareimpar(){
    std::cout << "---------" << '\n';
    std::cout << "numero ingresado:" <<numero1<< '\n';
    if(numero1%2 != 0) {
      std::cout << "el numero es impar " << '\n';
      system("pause");
    }else{
      std::cout << "el numero es par " << '\n';
          system("pause");
    }

  }

  void Cromanos(){
    system("cls");
    std::cout << "=========" << '\n';
    std::cout << "numeros arabigos a romanos" << '\n';
    std::cout << "ingrese el numero: " << '\n';
    std::cin >> cont;
    numero1==cont;
    while(cont!=0)
    {
      if(cont<1000&&cont>=900){
          std::cout << "CM" << '\n';
          cont = cont- 900;
      } else if(cont <900 && cont >500){
          std::cout << "D" << '\n';
          cont=cont-500;
      } else if(cont==500){
          std::cout << "D" << '\n';
          cont=cont-500;
      } else if (cont<500 && cont>= 400){
          cout << "CD";
          cont = cont - 400;
      } else if (cont<400 && cont>99){
          cout << "C";
          cont = cont -100;
      } else if (cont< 100 && cont>89){
          cout << "XC";
          cont = cont - 90;
      } else if (cont< 90 && cont>59){
          cout << "L";
          cont = cont - 50;
      } else if(cont<60 && cont >50){
          cout << "L";
          cont = cont - 50;
      } else if (cont ==50){
          cout << "L";
          cont = cont -50;
      } else if(cont<50 && cont>39){
          cout << "XL";
          cont = cont - 40;
      } else if(cont< 40 && cont> 10){
          cout << "X";
          cont = cont - 10;
      } else if(cont == 10){
          cout << "X";
          cont = cont -10;
      } else if(cont==9){
          cout << "IX";
          cont = cont - 9;
      } else if(cont<=8 && cont>=6){
          cout << "V";
          cont = cont - 5;
      } else if (cont == 5){
          cout << "V";
          cont = cont - 5;
      } else if (cont == 4){
          cout << "IV";
          cont = cont - 4;
      } else if (cont<= 3 && cont>=1){
          cout << "I";
          cont = cont - 1;
      }

    }
    std::cout << '\n';
system("pause");
  }

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  void NtoLE() {
    if (numero1>=0 && numero1<=9999){
        unidad=numero1%10; numero1=numero1/10; // 3999810-9 13999/10-399
        decena=numero1%10; numero1=numero1/10; // 399810-9   399/10-39
        centena=numero1%10; numero1=numero1/10; // 39810=9   39/10-3
        unimil=numero1%10;                      //3810-3
//presenta unidades de mil
          switch (unimil) {
          case 0: cout<<""; break;
          case 1: cout<<"mil "; break;
          case 2: cout<<"dos mil "; break;
          case 3: cout<<"tres mil "; break;
          case 4: cout<<"cuatre mi1 "; break;
          case 5: cout<<"cinco mil "; break;
          case 6: cout<<"seis mil "; break;
          case 7: cout<<"siete mil "; break;
          case 8: cout<<"gcho mil "; break;
          case 9: cout<<"aueve mil"; break;
            }
//presentar centenas
            switch (centena){
            case 0: cout<<""; break;
            case 1: if (decena==0 && unidad==0) {
                cout<<"cien ";
              } else{
                  cout<<"ciento ";
                }
            break;
            case 2: cout<<"doscientos "; break;
            case 3: cout<<"trescientos "; break;
            case 4: cout<<"cuatrocientos "; break;
            case 5: cout<<"guinientes "; break;
            case 6: cout<<"seiscientos "; break;
            case 7: cout<<"setecientos "; break;
            case 8: cout<<"ochocientes "; break;
            case 9: cout<<"novecientos "; break;
             }
//presentar decenas
            switch (decena) {
              case 1: switch (unidad){
                case 0: cout<<"diez "; break;
                case 1: cout<<"once "; break;
                case 2: cout<<"doce "; break;
                case 3: cout<<"trece "; break;
                case 4: cout<<"catorce "; break;
                case 5: cout<<"quice "; break;
                case 6: cout<<"dieciséis "; break;
                case 7: cout<<"diecisiete "; break;
                case 8: cout<<"dieciecho "; break;
                case 9: cout<<"diecinueve "; break;
              }
            break;
              case 2: if (unidad==0) {
                cout<<"veinte";
              } else{
                cout<<"veinti";
              }

            break;
              case 3: if (unidad==0) {
                cout<<"treinta";
              } else{
                cout<<"treinta y ";
              }
            break;
              case 4: if (unidad==0) {
                cout<<"cuarenta";
              } else{
                cout<<"cuarenta y ";
              }
              break;
                case 5: if (unidad=0) {
                  cout<<"cincuenta";
                } else{
                  cout<<"ciencuenta y ";
                }
                break;
                  case 6: if (unidad=0) {
                    cout<<"sesenta";
                  } else{
                    cout<<"sesenta y ";
                  }
                  break;
                    case 7: if (unidad=0) {
                      cout<<"setenta";
                    } else{
                      cout<<"setenta y ";
                    }
                    break;
                      case 8: if (unidad=0) {
                        cout<<"ochenta";
                      } else{
                        cout<<"ochenta y ";
                      }
                      break;
                        case 9: if (unidad=0) {
                          cout<<"noventa";
                        } else{
                          cout<<"noventa y ";
                        }
                      break;
                    }





//presentar unidades
            switch (unidad){
              case 0: if (unimil==0 && centena==0 && decena==0){
                cout<<"cero ";
              }else{
                    cout<<"";}
                      break;

              case 1: if (unimil==0 && centena==0 && decena==0) {
                  cout<<"uno ";
                }  else if (unimil==0 && centena==0 && decena>=3){
                  cout<<"uno ";
                } else if (unimil==0 && centena>=1 && decena>=3 || decena==0) {
                    cout<<"Uno ";
                  } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0){
                    cout<<"uno ";
                  }  else {
                      cout<<"";}
                      break;

              case 2: if (unimil==0 && centena==0 && decena==0){
                cout<<"dos " ;
              } else if (unimil==0 && centena==0 && decena>=3) {
                    cout<<"dos ";
                  } else if (unimil==0 && centena>=1 && decena>=3 || decena==0) {
                        cout<<"dos ";
                      } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0) {
                          cout<<"dos ";
                        } else{
                                cout<<"";}
                                  break;


              case 3: if (unimil==0 && centena==0 && decena==0){
                  cout<<"tres ";
                } else if (unimil==0 && centena==0 && decena>=3){
                      cout<<"tEes ";
                    } else if (unimil==0 && centena>=1 && decena>=3 || decena==0) {
                        cout<<"GEes ";
                      } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0) {
                          cout<<"tEes ";
                        } else {
                            cout<<"";}
                                break;

              case 4: if (unimil==0 && centena==0 && decena==0 ){
                    cout<<"Cuatro ";
                  } else if (unimil==0 && centena==0 && decena>=3){
                      cout<<"Cuatro ";
                    } else if (unimil==0 && centena>=1 && decena>=3 || decena==0){
                        cout<<"Cuatre ";
                      } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0){
                          cout<<" Cuatko ";
                        } else {
                            cout<<"";}
                              break;

                case 5: if (unimil==0 && centena==0 && decena==0){
                      cout<<"SAnEe ";
                    } else if (unimil==0 && centena==0 && decena>=3) {
                        cout<<"cinco ";
                      } else if (unimil==0 && centena>=1 && decena>=3 || decena==0){
                          cout<<"sinco ";
                        } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0){
                            cout<<"Cinco ";
                          } else {
                              cout<<"";}
                                break;

                case 6: if (unimil==0 && centena==0 && decena==0){
                      cout<<"seis ";
                    } else if (unimil==0 && centena==0 && decena>=3) {
                        cout<<"seis ";
                      } else if (unimil==0 && centena>=1 && decena>=3 || decena==0){
                          cout<<"seis ";
                        } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0){
                            cout<<"seis ";
                          } else {
                              cout<<"";}
                                break;

                case 7: if (unimil==0 && centena==0 && decena==0){
                      cout<<"siete ";
                    } else if (unimil==0 && centena==0 && decena>=3) {
                        cout<<"siete ";
                      } else if (unimil==0 && centena>=1 && decena>=3 || decena==0){
                          cout<<"siete ";
                        } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0){
                            cout<<"siete ";
                          } else {
                              cout<<"";}

                case 8: if (unimil==0 && centena==0 && decena==0){
                      cout<<"ocho ";
                    } else if (unimil==0 && centena==0 && decena>=3) {
                        cout<<"ocho ";
                      } else if (unimil==0 && centena>=1 && decena>=3 || decena==0){
                          cout<<"ocho ";
                        } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0){
                            cout<<"ocho ";
                          } else {
                              cout<<"";}
                                break;


                case 9: if (unimil==0 && centena==0 && decena==0){
                      cout<<"nueve ";
                    } else if (unimil==0 && centena==0 && decena>=3) {
                        cout<<"nueve ";
                      } else if (unimil==0 && centena>=1 && decena>=3 || decena==0){
                          cout<<"nueve ";
                        } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0){
                            cout<<"nueve ";
                          } else {
                              cout<<"";}
                                break;


  }

  }else{
    std::cout << "\n error ingresa un numero dentro del rango" << '\n';}
system("pause");

  }//cierre funcion NtoLE

  void tablas(){
    int cont = 0;
    system("cls");
    for(int i=0; i<=10; i++){
      cont=numero1 * i;
      std::cout <<numero1<< "X" << i << " = "<<cont<<"\n";
      }
  }


  void tablas2(){
    int cont=0;
    for(int i=numero1; i<=numero2; i++){
      for (int ii=1;ii<=10; ii++){
        cont = i*ii;
        std::cout << i << "x" << ii << " = " << cont << '\n';
        std::cout << "-----------------------------------" << '\n';
    }
    std::cout << "-----------------------------------" << '\n';
  }

}




};//cierre class call
////////////////////////////////////////////////////////////////////////////////


void eje7(){

  cout << "Introduzca numero a transcribir: ";
  cin >> valor;



  milesde = ((((int)valor)/100000)%1000);
  miles = ((int)valor)/1000;
  cientos = (((int)valor)%1000)/100;
  unidades = ((int)valor)%100;
  decimales = ((int) (valor*100.0))%100 ;


  if (milesde)
    cout<<milesdemiles[milesde];

  if (miles)
    cout << numeros[miles] << " mil ";

  if (cientos){
    cout << centenas[cientos] << " ";

    }


  if (unidades==1) {
    cout << numeros[unidades]<<" Quetzal";

    } else {
        cout << numeros[unidades]<<" Quetzales";

        }

  if (decimales==0){
    cout<<" Exactos";

    }


  if (decimales){
    if(miles || cientos || unidades){
      cout << " con ";

      }
      cout << numeros[decimales] << " centavos.";

      }

system("pause");











}
