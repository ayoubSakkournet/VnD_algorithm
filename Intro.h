#include<iostream>
#include<conio.h>
#include<windows.h>
#include<cmath>

using namespace std;

#ifndef INTRO_H
#define INTRO_H
class Intro 
{
	protected:
		
		int m,v,x;
		
	public:
		
		// constructor
		Intro();
		
		// Gotoxy function 
    void gotoxy(int x, int y);
    
        // Loading function
    void Loading();
    
        // Language_choose function
     int language_choose();
     
        // frensh_condition function
     void frensh_condition();
     
       // getters functions
       
       int get_x();
       int get_v();
       int get_m();

     
     
	    // destructor
		~Intro();
		
		
		
};

#endif
