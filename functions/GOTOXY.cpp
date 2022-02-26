#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int x=10, y=10;

void gotoxy(int x,int y){
     HANDLE hcon;
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y= y;
     SetConsoleCursorPosition(hcon,dwPos);
}


void move(){
  char cursor;
  std::cout << "para moverte usas 'w', 'a', 's', 'd' " << '\n';
  std::cout << "para salir presiona 'esc' o 'x' en cualquier momento" << '\n';
  std::cout <<'\n';
  std::cout <<'\n';
  system("pause");
  system("cls");
  gotoxy(x,y);
  while (cursor!=27) {
    cursor=getch();
      if(cursor=='a'){
        x--;
        system("cls");
        gotoxy(x,y);
        std::cout << "x";
      }else if(cursor=='d'){
        x++;
        system("cls");
        gotoxy(x,y);
        std::cout << "x";
      }else if(cursor=='w'){
        y--;
        system("cls");
        gotoxy(x,y);
        std::cout << "x";
      }else if(cursor=='s'){
        y++;
        system("cls");
        gotoxy(x,y);
        std::cout << "x";
      }else if(cursor=='x')
      break;
  }//cierrewhile
}//cierevoid
