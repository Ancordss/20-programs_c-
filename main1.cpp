#include <string>
#include "D:\UNI\3_semestre\programacion\20 programas c++\functions\f2moreclass.cpp"
#include "D:\UNI\3_semestre\programacion\20 programas c++\functions\op2numfun.cpp"
#include "D:\UNI\3_semestre\programacion\20 programas c++\functions\GOTOXY.cpp"
#include "D:\UNI\3_semestre\programacion\20 programas c++\functions\caj.cpp"
#include "D:\UNI\3_semestre\programacion\20 programas c++\functions\conver2.cpp"
#include "D:\UNI\3_semestre\programacion\20 programas c++\others\systemcall.cpp"
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
using namespace std;
main(){
    while(1==1){
      int n1,n2,x,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,y,z;
      int nu1,nu2,nu3,nu4,nu5,nu6,uni,dec,cen,mill,dmill,resu;
      float no1,no2,c1,c2;
      string letra;
      double valor;
      int milesde,miles,cientos,unidades,decimales;
			int binario[50];
      float no_1, no_2;



 //-----------------------------------------------------------------------------------------------------------------------------
 void reloj();

    system("cls");
      time_t t= time(NULL);
      tm* tPtr =localtime(&t);
      system("Color 0A");
      std::cout <<"________________________ingrese que quiere hacer__________________________________" << '\n';
      std::cout << '\n';
      std::cout << "                              hora: "<< (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) <<""<<'\n';
      std::cout << '\n';
      std::cout << "        para para realizar operaciones sensillas              (1)" << '\n';
      std::cout << "        para calcular si el numero ingresado es par           (2)" << '\n';
      std::cout << "        para ingresar a la calculadora de medidas             (3)" << '\n';
      std::cout << "        para Determinar si una palabra o numeor es palindromo (4)" << '\n';
      std::cout << "        para convertir numero a romanos                       (5)" << '\n';
      std::cout << "        para convertir numero a texto                         (6)" << '\n';
      std::cout << "        para convertir numero con decimales a texto           (7)" << '\n';
      std::cout << "        para generar tabla de multiplicar                     (8)" << '\n';
      std::cout << "        para generar varias tabla de multiplicar              (9)" << '\n';
      std::cout << "        para representar de forma grafica multiplicacion      (10)" << '\n';
      std::cout << "        para Convertir de numero decimal a binario            (11)" << '\n';
      std::cout << "        para Convertir de numero decimal a hexadecimal        (12)" << '\n';
      std::cout << "        para crear figuras geometricas                        (13)" << '\n';
      std::cout << "        para mover un punto en la pantalla                    (14)" << '\n';
      std::cout << "        para simulador de cajero                              (15)" << '\n';
      std::cout << "        para calcular hipotenusa                              (16)" << '\n';
      std::cout << "        para crear archivos                                   (17)" << '\n';
      std::cout << "        para mover archivos                                   (18)" << '\n';
      std::cout << "        acceso directo a paginas web                          (19)" << '\n';
      std::cout << "        para ver el tiempo en tiempo real                     (20)" << '\n';
      std::cout << "        para salir presiona                                   (0)" << '\n';
      std::cout << "________________________________________________________________________________" << '\n';
      std::cin >> y;

    switch (y)
    {
      case 0:
              std::cout << "gracias por tu tiempo" << '\n';
              exit(EXIT_SUCCESS);
      case 1:
            //ejericico 1
              system("cls");
              std::cout << "________este es el ejercicio 1__________" << '\n';
              std::cout  << '\n';
              std::cout << "para realizar una  suma ingresa (1)" << '\n';
              std::cout << "para realizar una  resta ingresa (2)" << '\n';
              std::cout << "para realizar una  multiplicacion ingresa (3)" << '\n';
              std::cout << "para realizar una  division ingresa (4)" << '\n';
              std::cout << "para salir presiona 0" << '\n';
              std::cin >> x;

              if(x==1){
                system("cls");
                std::cout << "esta es una suma" << '\n';
                std::cout << "ingrese el primer numero: ";
                std::cin >> n1;
                std::cout << "ingrese el segundo numero numero: ";
                std::cin >> n2;

                call obj = call(n1,n2);
                obj.sumar();

              } else if(x==2){
                  system("cls");
                  std::cout << "esta es una resta" << '\n';
                  std::cout << "ingrese el primer numero: ";
                  std::cin >> n1;
                  std::cout << "ingrese el segundo numero numero: ";
                  std::cin >> n2;

                  call obj = call(n1,n2);
                  obj.restar();

                }  else if(x==3){
                      system("cls");
                      std::cout << "esta es una multiplicacion" << '\n';
                      std::cout << "ingrese el primer numero: ";
                      std::cin >> n1;
                      std::cout << "ingrese el segundo numero numero: ";
                      std::cin >> n2;

                      call obj = call(n1,n2);
                      obj.multiplica();

                    } else if(x==4){
                            system("cls");
                            std::cout << "esta es una division" << '\n';
                            std::cout << "ingrese el primer numero: ";
                            std::cin >> n1;
                            std::cout << "ingrese el segundo numero numero: ";
                            std::cin >> n2;

                            call obj = call(n1,n2);
                            obj.dividir();
                          } else if(x==0)
                                break;


      case 2:

            //ejericicio 2
              if(y==2){
                system("cls");
                std::cout << "________este es el ejercicio 2__________" << '\n';
                std::cout  << '\n';
                std::cout << "ingresar al programa (1)" << '\n';
                std::cout << "volver al menu (0)" << '\n';
                std::cin >> x1;
                if(x1==1){
                  std::cout << "calcularemos si el numero ingresado es par" << '\n';
                  std::cout << "ingrese el numero: ";
                  std::cin >> n1;

                  call obj = call(n1,n2);
                  obj.numpareimpar();}
                }
                break;


      case 3:

            //ejericico 3
              if(y==3){
                system("cls");
                std::cout << "________este es el ejercicio 3__________" << '\n';
                std::cout  << '\n';
                std::cout << "calculadora de medidas selecciona que deseas calcular" << '\n';
                std::cout << "para calcular kilometros a Millas presiona (1)" << '\n';
                std::cout << "para calcular millas a kilometros presiona (2)" << '\n';
                std::cout << "para calcular metro a pulgadas presiona    (3)" << '\n';
                std::cout << "para calcular pulgadas a metros presiona   (4)" << '\n';
                std::cout << "para calcular libras a kilos presiona      (5)" << '\n';
                std::cout << "para calcular kilos a libras presiona      (6)" << '\n';
                std::cout << "para salir presiona                        (0)" << '\n';
                std::cout << "ingrese el numero: " << '\n';
                std::cin >> x2;
                if(x2==1){
                  std::cout << "ingresa los kilometros: " << '\n';
                  std::cin >> no_1;
                  kmtoml(no_1);

                } else if(x2==2){
                      std::cout << "ingresa las millas: " << '\n';
                      std::cin >> no_1;
                      mltokm(no_1);

                    } else if(x2==3){
                          std::cout << "ingresa los metros: " << '\n';
                          std::cin >> no_1;
                          MtoP(no_1);

                        } else if(x2==4){
                              std::cout << "ingresa las pulgadas: " << '\n';
                              std::cin >> no_1;
                              PtoM(no_1);

                            } else if(x2==5){
                                  std::cout << "ingresa las libras " << '\n';
                                  std::cin >> no_1;
                                  LtoK(no_1);

                                } else if(x2==6){
                                      std::cout << "ingresa los kilos: " << '\n';
                                      std::cin >> no_1;
                                      KtoL(no_1);

                                    }

                                }//cierreif
                                break;


      case 4:

            //ejercicio 4
                if(y==4){
                  system("cls");
                  std::cout << "________este es el ejercicio 4__________" << '\n';
                  std::cout  << '\n';
                  std::cout << "Determinar si una palabra o numeor es palindromo " << '\n';
                  std::cout << "para ingresar al programa presiona (1)" << '\n';
                  std::cout << "para regresar al menu presiona (esc)" << '\n';
                  std::cin >> x3;
                  if(x3==1){
                    std::cout << "ingrese la palabra o numero que decea probar: " << '\n';
                    getline(cin >> ws, letra);
                    //palabra obj = palabra(letra);
                    //obj.Dpalindromos();
                    size_t longitud = letra.length()-1;
                  	size_t i=0;
                  	bool esPalindromo = true;
                  	for(i=0 ; i<letra.length()/2 && esPalindromo ;i++) {
                  		if(letra[i]!=letra[longitud-i]){
                  			esPalindromo = false;
                  		}
                  	}
                      cout<<((true == esPalindromo) ? "es palíndromo" : "no es palíndromo")<<endl;
                      system("pause");
                    }//cierreif
                  }
                  break;




      case 5:

            //ejercicio 5
            if(y==5){
              system("cls");
              std::cout << "________este es el ejercicio 5__________" << '\n';
              std::cout  << '\n';
              std::cout << "convertir numero a romanos" << '\n';
              std::cout << "---------------------------" << '\n';
              std::cout << "para entrar al programa (1)" << '\n';
              std::cout << "para salir presiona   (esc)" << '\n';
              std::cin >> x4;
              if(x4==1){
                  call obj = call(n1,n2);
                  obj.Cromanos();
                }//cierreif
              }
              break;

      case 6:
      //ejercicio 6
      if(y==6){
        system("cls");
        std::cout << "________este es el ejercicio 6__________" << '\n';
        std::cout  << '\n';
        std::cout << "convertir numero a texto" << '\n';
        std::cout << "para entrar al programa (1)" << '\n';
        std::cout << "para salir presiona (0)" << '\n';
        std::cin >> x6;
        if(x6==1){
          std::cout << "digita el numero para convertir a texto: " << '\n';
          std::cin >> n1;
          call obj = call(n1,n2);
          obj.NtoLE();}
        }
        break;

      case 7:
      //ejericio 7
        if(y==7){
            system("cls");
            std::cout << "________este es el ejercicio 7__________" << '\n';
            std::cout  << '\n';
            std::cout << "convertir numero con decimales a texto" << '\n';
            std::cout << "para ingresar al programa (1)" << '\n';
            std::cout << "para salir (esc)" << '\n';
            std::cin >> x7;
            if(x7==1){
                eje7();
                  }
              }
              break;


      case 8:
        if(y==8){
        system("cls");
        std::cout << "________este es el ejercicio 8__________" << '\n';
        std::cout  << '\n';
        std::cout << "tabla de multiplicar" << '\n';
        std::cout << "para ingresar al programa presiona (1)" << '\n';
        std::cout << "para salir presiona                (0)" << '\n';
        std::cin >> x8;
        if(x8==1){
            system("cls");
            std::cout << "introduzca la tabla que quiere ver: " << '\n';
            std::cin >> n1;
            call obj = call(n1,n2);
            obj.tablas();}
            system("pause");}
            break;

      case 9:
        if(y==9){
          system("cls");
          std::cout << "________este es el ejercicio 9__________" << '\n';
          std::cout  << '\n';
          std::cout << "tabla de multiplicar genera " << '\n';
          std::cout << "para ingresar al programa presiona (1)" << '\n';
          std::cout << "para salir presiona (0)" << '\n';
          std::cin >> x9;
          if(x9==1){
              std::cout << "introduzca la tabla con la que comienza: " << '\n';
              std::cin >> n1;
              std::cout << "introduzca la segunda tabla con la que comienza: " << '\n';
              std::cin >> n2;
              call obj = call(n1,n2);
              obj.tablas2();}
              system("pause");}
              break;


      case 10:
        if(y==10){
          system("cls");
          std::cout << "________este es el ejercicio 10__________" << '\n';
          std::cout  << '\n';
          std::cout << "representar de forma grafica multiplicacion " << '\n';
          std::cout << "para hacer graficamete operaciones de 2 presiona  (1)" << '\n';
          std::cerr << "para hacer graficamente operaciones de 3 presiona (2)" << '\n';
          std::cerr << "para hacer graficamente operaciones de 4 presiona (3)" << '\n';
          std::cerr << "para hacer graficamente operaciones de 5 presiona (3)" << '\n';
          std::cout << "para salir presiona (0)" << '\n';
          std::cin >> x10;
          if(x10==1){
            std::cout << "-------------------------" << '\n';
            std::cout << "ingrese el primer numero1" << '\n';
            std::cin >> nu1;
            std::cout << "X    " << '\n';
            std::cin >> nu2;
            std::cout << "________" << '\n';
            tab obj = tab(nu1,nu2,nu3,nu4,nu5,nu6,uni,dec,cen,mill,dmill,resu);
            obj.Showtab();
            system("pause");
              }
          if(x10==2){
            std::cout << "-------------------------" << '\n';
            std::cout << "ingrese el primer numero1" << '\n';
            std::cin >> nu1;
            std::cout << "X    " << '\n';
            std::cin >> nu2;
            std::cout << "___________" << '\n';
            tab obj = tab(nu1,nu2,nu3,nu4,nu5,nu6,uni,dec,cen,mill,dmill,resu);
            obj.Showtab2();
            system("pause");
          }
          if(x10==3){
            std::cout << "--------------------------" << '\n';
            std::cout << "ingrese el primer numero1" << '\n';
            std::cin >> nu1;
            std::cout << "X    " << '\n';
            std::cin >> nu2;
            std::cout << "____________" << '\n';
            tab obj = tab(nu1,nu2,nu3,nu4,nu5,nu6,uni,dec,cen,mill,dmill,resu);
            obj.Showtab3();
            system("pause");
          }
          if(x10==4){
            std::cout << "--------------------------" << '\n';
            std::cout << "ingrese el primer numero1" << '\n';
            std::cin >> nu1;
            std::cout << "X    " << '\n';
            std::cin >> nu2;
            std::cout << "____________" << '\n';
            tab obj = tab(nu1,nu2,nu3,nu4,nu5,nu6,uni,dec,cen,mill,dmill,resu);
            obj.Showtab4();
            system("pause");
          }


        }//cierreif
          break;

      case 11:
        if(y==11){
          system("cls");
          binario[0]=0;
          std::cout << "________este es el ejercicio 11__________" << '\n';
          std::cout  << '\n';
          std::cout << "Convertir de numero decimal a binario " << '\n';
          std::cout << "-------------------------------------------" << '\n';
          std::cout << "para ingresar al programa presiona (1)" << '\n';
          std::cout << "para salir presiona (0)" << '\n';
          std::cin >> x11;
            if(x11=1){
              std::cout << "introduce el numero a convertir" << '\n';
              std::cin >> n1;

              for (x=0; x<50; x++){
      						binario[x]=n1%2;
      						n1=n1/2;
      						if(n1==0)
      						break;
      						}

      						for (z=x; z>=0; z--){
                    std::cout << binario[z]<< " ";
      						}
                }
                  system("pause");
          }//cierreif
          break;

      case 12:
        if(y==12){
          system("cls");
          std::cout << "________este es el ejercicio 12__________" << '\n';
          std::cout  << '\n';
          std::cout << "Convertir de numero decimal a hexadecimal" << '\n';
          std::cout << "-------------------------------------------" << '\n';
          std::cout << "para ingresar al programa presiona (1)" << '\n';
          std::cout << "para salir presiona (0)" << '\n';
          std::cin >> x12;
          if(x12==1){
            tab obj = tab(nu1,nu2,nu3,nu4,nu5,nu6,uni,dec,cen,mill,dmill,resu);
            obj.Dectohexa();}
            system("pause");
        }//ciereif
        break;

      case 13:
        if(y==13){
          system("cls");
          std::cout << "________este es el ejercicio 13__________" << '\n';
          std::cout  << '\n';
          std::cout << "crear figuras geometricas" << '\n';
          std::cout << "ingresa 1 para crear un triangulo: " << '\n';
          std::cout << "ingresa 2 para crear un rectangulo: " << '\n';
          std::cout << "ingresa 3 para crear un cuadrado: " << '\n';
          std::cout << "para salir presiona (0)" << '\n';
          std::cin >> x;

            if(x==1){
              std::cout << "ingrese el tamanio del triangulo" << '\n';
              std::cin >> nu1;
              tab obj = tab(nu1,nu2,nu3,nu4,nu5,nu6,uni,dec,cen,mill,dmill,resu);
              obj.CreateTri();
            }else if(x==2){
              std::cout << "generando el rectangulo" << '\n';
              tab obj = tab(nu1,nu2,nu3,nu4,nu5,nu6,uni,dec,cen,mill,dmill,resu);
              obj.CreateCua();
            }else if(x==3){
              std::cout << "generando el cuadrado" << '\n';
              tab obj = tab(nu1,nu2,nu3,nu4,nu5,nu6,uni,dec,cen,mill,dmill,resu);
              obj.CreateCua2();}
        }//cierreif
        break;

      case 14:
        if(y==14){
          system("cls");
          std::cout << "________este es el ejercicio 14__________" << '\n';
          std::cout  << '\n';
          std::cout << "mover un punto en la pantalla" << '\n';
          std::cout << "-------------------------------------------" << '\n';
          move();

        }break;

      case 15:
      if(y==15){
        system("cls");
        std::cout << "________este es el ejercicio 15__________" << '\n';
        std::cout  << '\n';
        std::cout << "simulador de cajero" << '\n';
        std::cout << "-------------------------------------------" << '\n';
        cajero();



      }break;

      case 16:
        if(y==16){
          system("cls");
          std::cout << "________este es el ejercicio 16__________" << '\n';
          std::cout  << '\n';
          std::cout << "calcular hipotenusa" << '\n';
          std::cout << "-------------------------------------------" << '\n';
          std::cout << "para ingresar al programa presiona (1)" << '\n';
          std::cout << "para salir presiona (0)" << '\n';
          std::cin >> x13;
          if(x13==1){
            std::cout << '\n';
            std::cout << "ingresa cateto 1: " << '\n';
            std::cin >> c1;
            std::cout << "ingresa el cateto 2: " << '\n';
            std::cin >> c2;
            hipotenusa(c1,c2);}

        }break;

      case 17:
        if(y==17){
          system("cls");
          std::cout << "________este es el ejercicio 17__________" << '\n';
          std::cout  << '\n';
          std::cout << "crear archivos" << '\n';
          std::cout << "-------------------------------------------" << '\n';
          std::cout << "para ingresar al programa (1)" << '\n';
          std::cout << "para salir (0)" << '\n';
          std::cin >> x13;
          if(x13==1){
              newDoc();}

        }break;

      case 18:
      if(y==18){
        system("cls");
        std::cout << "________este es el ejercicio 18__________" << '\n';
        std::cout  << '\n';
        std::cout << "mover archivos" << '\n';
        std::cout << "-------------------------------------------" << '\n';
        std::cout << "para entrar al programa (1)" << '\n';
        std::cout << "para salir presiona 0" << '\n';
        std::cin >> x14;
        if(x14==1){
            movearchive();}
      }break;

      case 19:
      if(y==19){
        system("cls");
        std::cout << "________este es el ejercicio 19__________" << '\n';
        std::cout  << '\n';
        std::cout << "acceso directo a paginas web" << '\n';
        std::cout << "-------------------------------------------" << '\n';

        std::cout << "selecciona: ?" << '\n';
        std::cout << "(1) github" << '\n';
        std::cout << "(2) selecciona esta opcion para hacer una busqueda personalisada" << '\n';
        std::cout << "(0) para salir" << '\n';
        std::cin >> x;
        if(x==1){
          git();
        }else if(x==2){
          per();
        }
      }break;

      case 20:
        if(y==20){
          system("cls");
          std::cout << "________este es el ejercicio 20__________" << '\n';
          std::cout  << '\n';
          std::cout << "ver el tiempo en tiempo real" << '\n';
          std::cout << "-------------------------------------------" << '\n';
          time();






        }break;

      default : std::cout << "!ERROR! ingrese un valor del menu" << '\n'; system("pause");





          }}//menu//ciere while
};//main
