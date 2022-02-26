#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <cstdio>
#include <cstring>
#include <cerrno>
#include <windows.h>
#include <shellapi.h>
#include<cmath>
#include <ctime>
//#include <winbase.h>
using namespace std;

char *tex;
char filename[100];
char url[1000] = "https://github.com/Ancordss";
char url1[1000];
void newDoc(){
  std::cout << "ingresa el arcchivo que deseas crear: " << '\n';
  std::cin >> filename;


  fstream *fs =new fstream(filename,ios::out|ios::binary);
  delete fs;
  std::cout << "archivo creado exitosamente" << '\n';
  system("pause");
}

void movearchive(){

  /* para mover un archivo hacia otro tienes que colocar la ruta en los lugars donde dice from - to from es desde donde esta ubicado y to hacia donde lo quieres
  mover

  ## ejemplo de las rutas:
  from = "C:\\Users\\user1\\Desktop\\example\\text.txt"
  tp = "C:\\Users\\user1\\Desktop\\example1\\text.txt"

   */

  std::cout << "para ingresar las rutas abre la carpeta others y modifica el archivo. "<< endl;

  if(std::rename("from.txt", "to.txt") < 0) {
  std::cout << strerror(errno) << '\n';
}
  std::remove("from.txt");

  std::cout << "los archivos han sido movidos" << '\n';
  system("pause");
}


void git(){
ShellExecute(0, 0, url, 0, 0 , SW_SHOW );

}

void per(){
  std::cout << "ingresa la pagina web: " << '\n';
  std::cin >> url1;
ShellExecute(0, 0, url1, 0, 0 , SW_SHOW );

}

void time(){
  system("cls");
  time_t t = time(NULL);
 tm* tPtr = localtime(&t);
 cout << "\n\n mostrando el tiempo y fecha de hoy :\n";
 cout << "----------------------------------------\n";
 cout << " segundos = " << (tPtr->tm_sec) << endl;
 cout << " minutos = " << (tPtr->tm_min) << endl;
 cout << " horas = " << (tPtr->tm_hour) << endl;
 cout << " dia del mes = " << (tPtr->tm_mday) << endl;
 cout << " mes del anio = " << (tPtr->tm_mon)+1 << endl;
 cout << " anio = " << (tPtr->tm_year)+1900 << endl;
 cout << " semana = " << (tPtr->tm_wday )<< endl;
 cout << " dia del anio = " << (tPtr->tm_yday )<< endl;
        cout << endl;
        cout << endl;


        cout << " fecha actual: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
        cout << " hora actual: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;
           cout << endl;
           system("pause");

}

void reloj(){
  time_t t= time(NULL);
  tm* tPtr =localtime(&t);
std::cout <<"hora: "<< (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;

}
