#include "D:\UNI\3_semestre\programacion\20 programas c++\functions\F2OrMore.cpp"
#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
using namespace std;
float c1,c2;
double h;
long dec;

class tab : tablas {

private : int digix[0];
          int j,i,p,rem;
          long dec;


  public :
    tab(int nu1, int nu2, int nu3, int nu4, int nu5, int nu6, int uni,int dec, int cen, int mill, int dmill, int resu) : tablas(nu1,nu2,nu3,nu4,nu5,nu6,uni,dec,cen,mill,dmill,resu){

  }

  void Showtab(){
    resultados = num1*num2;
		unidad = num2%10; num2 /= 10;
		decena = num2%10; num2 /= 10;
		centena = num2%10; num2 /= 10;
		millar = num2%10; num2 /= 10;
		num2 = num1*unidad;
		num3 = num1*decena;
		cout<<"    "<<num2<<endl;
		cout<<"  "<<num3<<endl;
		cout<<"+________"<<endl;
	   cout<<"  "<<resultados<<endl;

  }//cierreShowtab

  void Showtab2(){
    resultados = num1*num2;
		unidad = num2%10; num2 /= 10;
		decena = num2%10; num2 /= 10;
		centena = num2%10; num2 /= 10;
		millar = num2%10; num2 /= 10;
		num2 = num1*unidad;
		num3 = num1*decena;
		num4 = num1*centena;
		cout<<"    "<<num2<<endl;
		cout<<"   "<<num3<<endl;
		cout<<"  "<<num4<<endl;
	  cout<<"+________"<<endl;
		cout<<"  "<<resultados<<endl;
  }

  void Showtab3(/* arguments */) {
    resultados = num1*num2;
		unidad = num2%10; num2 /= 10;
		decena = num2%10; num2 /= 10;
		centena = num2%10; num2 /= 10;
		millar = num2%10; num2 /= 10;
		num2 = num1*unidad;
		num3 = num1*decena;
		num4 = num1*centena;
		num5 = num1*millar;
		cout<<"     "<<num2<<endl;
		cout<<"    "<<num3<<endl;
		cout<<"   "<<num4<<endl;
		cout<<"  "<<num5<<endl;
		cout<<"+________"<<endl;
		cout<<"  "<<resultados<<endl;

  }

  void Showtab4() {
    resultados = num1*num2;
		unidad = num2%10; num2 /= 10;
		decena = num2%10; num2 /= 10;
		centena = num2%10; num2 /= 10;
		millar = num2%10; num2 /= 10;
    demillar =num2%10; num2 /=10;
		num2 = num1*unidad;
		num3 = num1*decena;
		num4 = num1*centena;
		num5 = num1*millar;
    num6 = num1-demillar;
		cout<<"     "<<num2<<endl;
		cout<<"    "<<num3<<endl;
		cout<<"   "<<num4<<endl;
		cout<<"  "<<num5<<endl;
    cout<<" "<<num6<<endl;
		cout<<"+________"<<endl;
		cout<<"  "<<resultados<<endl;

  }







  void Dectohexa(){
    long dec;
    string s = "";
    std::cout << "introduce el numero a convertir: " << '\n';
    std::cin >> dec;

      while (dec > 0)   // Do this whilst the quotient is greater than 0.
      {
        rem = dec % 16; // Get the remainder.
        if (rem > 9)
        {
          // Map the character given that the remainder is greater than 9.
          switch (rem)
          {
            case 10: s = "A" + s; break;
            case 11: s = "B" + s; break;
            case 12: s = "C" + s; break;
            case 13: s = "D" + s; break;
            case 14: s = "E" + s; break;
            case 15: s = "F" + s; break;
          }
        }
        else
        {
          s = char(rem + 48) + s; // Converts integer (0-9) to ASCII code.
          // x + 48 is the ASCII code for x digit (if 0 <= x <= 9)
        }
        dec = dec/16;
       }
       if (s == "") // if the number was 0, the string will remain empty
         cout << "0";
       else
         cout << s << endl;
  }//ciere void

  void CreateTri(){
    //recibo nu1
    num2=1;
    p=num1+1;
    while(num2<=p){
      for(int i=1; i<=p-num2; i++){
        std::cout << " ";
      }//finforespacios

      for(int j=1; j<num2; j++){
        std::cout << "*";
      }//finfor2
    std::cout <<endl;
    num2++;
  }//finwhile
  system("pause");
  }//finvoid

  void CreateCua(){
    int i = 0, c=0;
    system("cls");
    while( i < 10 ){
        if ( i == 9 ){
                c++; i = 0; std::cout << '\n';
        }//cierreif
        if( c == 3 )
                break;

        std::cout << "*";
        i++;
    }//finwhile
    system("pause");



  }//finvoid

  void CreateCua2(){
    int i = 0, c=0;
    system("cls");
    while( i < 10 ){
        if ( i == 5 ){
                c++; i = 0; std::cout << '\n';
        }//cierreif
        if( c == 3 )
                break;

        std::cout << "*";
        i++;
    }//finwhile
    system("pause");
  }//finvoid






};//cierre class tabla


void hipotenusa(float c1, float c2){
  system("cls");
  h=sqrt(c1*c1+c2*c2);
  std::cout << "la hipotenusa mide: " << h<< '\n';
  std::cout << '\n';
  system("pause");
}
