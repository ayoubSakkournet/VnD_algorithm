#include "Intro.h"

Intro::Intro()
{
	// the Intro of the program
system(" color e0");
gotoxy(50,15);
cout << "V";
Sleep(150);
gotoxy(50,15);
cout <<"VN";
Sleep(150);
gotoxy(50,15);
cout << "VND";
Sleep(150);
gotoxy(50,15);
cout << "VND ";
Sleep(150);
gotoxy(50,15);
cout <<"VND A";
Sleep(150);
gotoxy(50,15);
cout <<"VND AL";
Sleep(150);
gotoxy(50,15);
cout <<"VND ALG";
Sleep(150);
gotoxy(50,15);
cout <<"VND ALGO";
Sleep(150);
gotoxy(50,15);
cout <<"VND ALGOR";
Sleep(150);
gotoxy(50,15);
cout <<"VND ALGORI";
Sleep(130);
gotoxy(50,15);
cout <<"VND ALGORIT";
Sleep(130);
gotoxy(50,15);
cout <<"VND ALGORITH";
Sleep(130);
gotoxy(50,15);
cout <<"VND ALGORITHM";
Sleep(130);
gotoxy(50,15);
cout <<"VND ALGORITHM ";
Sleep(750);
system("cls");
// -----------------------------------------------------------------
}
// the Loading function
void Intro::Loading()
{
	 cout << "Loading" ; 
     Sleep(700);
     cout << ".";
     Sleep(700);
     cout <<".";
     Sleep(700);
     cout <<".";
     Sleep(700);
     cout <<".";
     Sleep(700);
     cout <<".";
     Sleep(700);
     system("cls");
}

//gotoxy function
void Intro::gotoxy(int x, int y)
{
	 COORD coord;
     coord.X=x;
     coord.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
       // getters functions
       int Intro::get_x()
       {
       	     return x;
	   }
       int Intro::get_v()
       {
       	     return v;
	   }
       int Intro::get_m()
       {
       	     return m;
	   }

Intro::~Intro()
{
}
