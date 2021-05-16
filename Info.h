#ifndef INFO_H
#define INFO_H
#include "Intro.h"


using namespace std;

class Info : public Intro

{
	
	protected:
		int solution_value;
		int num_neighborhood;
		int neighberhood;
		double f_ofx1;
		double f_ofx2;
		static const int MAX_NEIGHBERHOOD = 4;
		double better_solution;
		
	
	public:
		Info();
		
		Info(int sv, int n);
		
		// setters functions
		void set_solution_value(int sv);
		
		void set_neighberhood(int n);
		
		void set_f_ofx1(double f1);
		
		void set_f_ofx2(double f2);
	    // info functions
		int language_choose();
		
        void french_condition();
        
		int french_menu_Display();
		
		void English_condition();
        
		int English_menu_Display();
		
		void Default_language_condition();
		
		void switch_french();
		
		void switch_English();
		// the first vnd example
		double Vnd_algorithm1();
		// the second vnd example
		double Vnd_algorithm2();
		// the third vnd example
		double Vnd_algorithm3();
		
		int English_choix();
		
	
		
		
		 ~Info();
};

#endif
