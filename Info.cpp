#include "Info.h"


Info::Info():Intro::Intro()
{
	
}

int Info::language_choose()
{
	 gotoxy(50,13);
     cout <<" choose the language  ";
     gotoxy(50,14);
     cout <<" 1 french";
     gotoxy(50,15);
     cout <<" 2 english"<< endl;
     cin >> v ;
     
     
        return v;
}

void Info::french_condition()
{
     

     system("cls");
     gotoxy(44,14);

     cout <<" salut ,Vous avez choisi le francais ";
     gotoxy(54,15);
     Intro::Loading();
     gotoxy(44,10);
     system("cls");



}
int Info::french_menu_Display()
{
	
	 gotoxy(50,9);
     cout << "***************";
     gotoxy(50,10);
     cout << "|   1 Aide    | ";
     gotoxy(50,11);
     cout <<"***************";
     gotoxy(50,14);
     cout <<"***************";
     gotoxy(50,15);
     cout << "|   2 VND     | ";
     gotoxy(50,16);
     cout <<"***************";
     gotoxy(50,19);
     cout <<"***************";
     gotoxy(50,20);
     cout <<"|  3 Quitter  |";
     gotoxy(50,21);
     cout <<"***************" << endl;;
     cout <<" Vous avez choisi : \t";
     cin >> m ;
     system("cls");
        return m;	
}

		void Info::English_condition()
		{
			system("cls");
            gotoxy(44,14);
            cout <<" Welcome , you have chosen english";
            gotoxy(54,15);
            Loading();
            system("cls");
		}
        
		int Info::English_menu_Display()
		{
			gotoxy(50,9);
            cout <<"***************";
            gotoxy(50,10);
            cout <<"|   1 Help    | ";
            gotoxy(50,11);
            cout <<"***************";
            gotoxy(50,14);
            cout <<"***************";
            gotoxy(50,15);
            cout <<"|   2 VND    | ";
            gotoxy(50,16);
            cout <<"***************";
            gotoxy(50,19);
            cout <<"***************";
            gotoxy(50,20);
            cout <<"|   3 Exit    |";
            gotoxy(50,21);
            cout << "***************\n";
            cout <<"you have chosen :\t";
            cin >> m;
            system("cls");
               return m;

		}
		
		void Info::Default_language_condition()
		{
			system("cls");
            gotoxy(57,13);
            printf("fault!");
            gotoxy(40,14);
            cout <<"Please Choose the previously mentioned languages ";
            gotoxy(40,15);
            cout <<"The game currently has no other languages :(";
            Sleep(3000); // sleep the program until the display of the error
            system("cls");
		}
		
		void Info::switch_french()
		{
			int q;
			switch (get_m()){
            case 1:
              system("cls");
              gotoxy(50,6);
              cout <<"Algorithme 3: - changement de voisinage";
              gotoxy(50,7);
              cout << "-------------------------------------";
              gotoxy(0,9);
              cout << "Lorsque VNS ne fournit pas une bonne solution, il y a plusieurs etapes qui pourraient etre aidees dans le processus, telles que la comparaison des premieres et des meilleures strategies d'amelioration dans la recherche locale, la reduction du voisinage, l'intensification des tremblements, l'adoption de VND, l'adoption du FSS et l'experimentation des reglages de parametres." ;
              gotoxy(0,13);
              cout << endl;
              cout << "Aide : A propos de l'application et les noms des développeurs. ";
              gotoxy(0,15);
              cout << endl;
              cout << "Algorithme VND (simulation) : Application console de simulation de l'algorithme Variant neighberhood descent. ";
              gotoxy(0,17);
              cout << endl;
              cout << "quitter : Quittez complètement l'application. " ;
              gotoxy(50,19);
              cout <<"\n********************************************************************************************************************";
              gotoxy(40,21);
              printf("sous la supervision du : Monsieur . Baddi youssef \n ");
              gotoxy(50,22);
              cout <<"\n********************************************************************************************************************" << endl;
              gotoxy(50,24);
              cout <<"-Ayoub sakkour" << endl;
              gotoxy(50,25);
              cout <<"-Mouad mounaji" << endl;
              gotoxy(50,26);
              cout <<"-Rajaa hilmi" << endl;
              gotoxy(50,27);
              cout <<"-Meryem soufyane" << endl;
              break;

              
              case 2:
              			switch(English_choix())
				{
					case 1:
		         system("cls");
    	         int sv;
    	         int n;
    	         double f1,f2;
    	         cout << "veuillez entrer la valeur" << endl;
    	         cin >> sv;
    	         set_solution_value(sv);
    	         cout << "veuillez entrer l'indice de neighberhood" << endl;
    	         cin >> n;
    	         set_neighberhood(n);
    	         cout << "la fonction est x->2x " << endl;
    	         cout << "veuillez entrer la premiere fonction" << endl;
    	         cin >> f1;
    	         set_f_ofx1(f1);
    	         cout << "veuillez entrer la deusieme fonction" << endl;
    	         cin >> f2;
    	         set_f_ofx2(f2);
    	
    	         Info::Vnd_algorithm1();
    	         break;
    	         case 2:
    	         system("cls");
    	         cout << "veuillez entrer la valeur" << endl;
    	         cin >> sv;
    	         set_solution_value(sv);
    	         cout << "veuillez entrer l'indice de neighberhood" << endl;
    	         cin >> n;
    	         set_neighberhood(n);
    	         cout << "la fonction est x->sqrt(x) " << endl;
    	         cout << "veuillez entrer la premiere fonction" << endl;
    	         cin >> f1;
    	         set_f_ofx1(f1);
    	         cout << "veuillez entrer la deusieme fonction" << endl;
    	         cin >> f2;
    	         set_f_ofx2(f2);
    	
    	         Info::Vnd_algorithm2();
    	         	break;
    	         case 3:
    	         system("cls");
    	         cout << "veuillez entrer la valeur" << endl;
    	         cin >> sv;
    	         set_solution_value(sv);
    	         cout << "veuillez entrer l'indice de neighberhood" << endl;
    	         cin >> n;
    	         set_neighberhood(n);
    	         cout << "la fonction est x->x^2 " << endl;
    	         cout << "veuillez entrer la premiere fonction" << endl;
    	         cin >> f1;
    	         set_f_ofx1(f1);
    	         cout << "veuillez entrer la deusieme fonction" << endl;
    	         cin >> f2;
    	         set_f_ofx2(f2);
    	
    	         Info::Vnd_algorithm3();
    	         break;
                  default:
                  	system("cls");
                  	gotoxy(44,14);
				     cout << "verifier votre choix" << endl;
				     Sleep(1800);
			  	    system("cls");
			  	    break;
				   	          
				}
                   
              break;
              
              case 3:
              	
              	gotoxy(50,26);
              	cout << "Vous avez quitter";
              	break;
              	
              default:
			  
			  	gotoxy(44,14);
			  	cout << "veuillez choisir un choix entre 1 et 3" ;
                Sleep(1800);
			  	system("cls");
			  	break;
          }
          
		  }
		  
		  void Info::switch_English()
		  {
		  	switch (get_m()){
            case 1:
              system("cls");
              gotoxy(50,6);
              cout <<"Algorithm 3: Neighborhood change ";
              gotoxy(50,7);
              cout << "-------------------------------------";
              gotoxy(0,9);
              cout << "When VNS does not render a good solution, there are several steps which could be helped in process, such as comparing first and best improvement strategies in local search, reducing neighborhood, intensifying shaking, adopting VND, adopting FSS, and experimenting with parameter settings." ;
              gotoxy(0,13);
              cout << endl;
              cout << "Help : About the application and the names of the developers.";
              gotoxy(0,15);
              cout << endl;
              cout << "VND algorithm (simulation): Console application for simulating the Variant neighborhood descent algorithm.";
              gotoxy(0,17);
              cout << endl;
              cout << "exit: Exit the application completely. " ;
              gotoxy(50,19);
              cout <<"\n********************************************************************************************************************";
              gotoxy(40,21);
              printf("under the supervision of : Sir. Baddi youssef \n ");
              gotoxy(50,22);
              cout <<"\n********************************************************************************************************************" << endl;
              gotoxy(50,24);
              cout <<"-Ayoub sakkour" << endl;
              gotoxy(50,25);
              cout <<"-Mouad mounaji" << endl;
              gotoxy(50,26);
              cout <<"-Rajaa hilmi" << endl;
              gotoxy(50,27);
              cout <<"-Meryem soufyane" << endl;
              break;
                        
              case 2:
              	  
				
				switch (English_choix())
				{
					case 1:
		         system("cls");
    	          int sv;
     	          int n;
    	         double f1,f2;
    	         cout << "Enter the value" << endl;
    	         cin >> sv;
    	         set_solution_value(sv);
    	         cout << "Enter the index of the neighberhood" << endl;
                 cin >> n;
    	         set_neighberhood(n);
    	         cout << "the function is : x->2x " << endl;
    	         cout << "Enter the first function" << endl;
    	         cin >> f1;
    	         set_f_ofx1(f1);
             	 cout << "Enter the second function" << endl;
    	         cin >> f2;
    	         set_f_ofx2(f2);
    	
    	         Info::Vnd_algorithm1();
    	         break;
    	         case 2:
    	         	
    	            system("cls");
    	         cout << "Enter the value" << endl;
    	         cin >> sv;
    	         set_solution_value(sv);
    	         cout << "Enter the index of the neighberhood" << endl;
                 cin >> n;
    	         set_neighberhood(n);
    	         cout << "the function is : x->sqrt(x) " << endl;
    	         cout << "Enter the first function" << endl;
    	         cin >> f1;
    	         set_f_ofx1(f1);
             	 cout << "Enter the second function" << endl;
    	         cin >> f2;
    	         set_f_ofx2(f2);
    	
    	         Info::Vnd_algorithm2();
    	         break;
    	         	
    	         	
    	         case 3:
				 	
    	          system("cls");
    	         cout << "Enter the value" << endl;
    	         cin >> sv;
    	         set_solution_value(sv);
    	         cout << "Enter the index of the neighberhood" << endl;
                 cin >> n;
    	         set_neighberhood(n);
    	         cout << "the function is : x->x^2 " << endl;
    	         cout << "Enter the first function" << endl;
    	         cin >> f1;
    	         set_f_ofx1(f1);
             	 cout << "Enter the second function" << endl;
    	         cin >> f2;
    	         set_f_ofx2(f2);
    	
    	         Info::Vnd_algorithm2();
    	         break;
    	         
    	         default:
                  	system("cls");
                  	gotoxy(44,14);
				     cout << "verify your choise" << endl;
				     Sleep(1800);
			  	    system("cls");
			  	    break;
				}
				
				
              	 
              break;
              
              case 3:
              	
              	gotoxy(50,26);
              	cout << "You left";
              	break;
              	
              default:
			
			  	gotoxy(44,14);
			  	cout << "please choose a choice between 1 and 3" ;
			  	Sleep(1800);
			  	system("cls");
			  	break;
              
		  }
		  
	}
	    void Info::set_solution_value(int sv)
	    {
	    	solution_value = sv;
		}
		
		void Info::set_neighberhood(int n)
		{
			neighberhood = n;
		}
		
		void Info::set_f_ofx1(double f1)
		{
			f_ofx1 = f1;
		}
		
		void Info::set_f_ofx2(double f2)
		{
			f_ofx2 = f2;

		}
	
	 double Info::Vnd_algorithm1()
                  {
                  	
                  	int final_solution;
                  	f_ofx1 = 2*f_ofx1 ;
                  	f_ofx2 = 2*f_ofx2 ;
                  	
                  		if (f_ofx1 <= f_ofx2)
                  		{
                  			better_solution = f_ofx1;
                  			cout << "the best solution from the Variant neughberhood decsent is :" << better_solution <<endl;
                  	        return better_solution;
						  }
						  
                  		
						if(f_ofx1 > f_ofx2)
                  		  {
                  		  	
                  		  	neighberhood++;
                  			 better_solution = f_ofx2;
                  		    cout << "the best solution from the Variant neughberhood decsent is :" << better_solution <<endl;
                            return better_solution;
						  }
                  		   
					  }
					  int Info::English_choix()
               {
              	    gotoxy(50,9);
            cout <<"***************";
            gotoxy(50,10);
            cout <<"|   1 x->2x   | ";
            gotoxy(50,11);
            cout <<"***************";
            gotoxy(50,14);
            cout <<"***************";
            gotoxy(50,15);
            cout <<"| 2 x-> x^1/2 |";
            gotoxy(50,16);
            cout <<"***************";
            gotoxy(50,19);
            cout <<"***************";
            gotoxy(50,20);
            cout <<"|   3 x->x^2  |";
            gotoxy(50,21);
            cout << "***************\n";
            cout <<"choix/choise:\t";
            cin >> m;
            return m;
        }
         double Info::Vnd_algorithm2()
		    {
			     	double final_solution;
                  	f_ofx1 = sqrt(f_ofx1) ;
                  	f_ofx2 = sqrt(f_ofx2) ;
                  	
                  		if (f_ofx1 <= f_ofx2)
                  		{
                  			better_solution = f_ofx1;
                  			cout << "the best solution from the Variant neughberhood decsent is :" << better_solution <<endl;
                  	        return better_solution;
						  }
						  
                  		
						if(f_ofx1 > f_ofx2)
                  		  {
                  		  	
                  		  	neighberhood++;
                  			 better_solution = f_ofx2;
                  		    cout << "the best solution from the Variant neughberhood decsent is :" << better_solution <<endl;
                            return better_solution;
						  }
                  		      
		    }
		
		 double Info::Vnd_algorithm3()
		    {
			        	int final_solution;
                  	f_ofx1 = pow(f_ofx1,2) ;
                  	f_ofx2 = pow(f_ofx2,2) ;
                  	
                  		if (f_ofx1 <= f_ofx2)
                  		{
                  			better_solution = f_ofx1;
                  			cout << "the best solution from the Variant neughberhood decsent is :" << better_solution <<endl;
                  	        return better_solution;
						  }
						  
                  		
						if(f_ofx1 > f_ofx2)
                  		  {
                  		  	
                  		  	neighberhood++;
                  			 better_solution = f_ofx2;
                  		    cout << "the best solution from the Variant neughberhood decsent is :" << better_solution <<endl;
                            return better_solution;
						  }
                  		   
		    }        	
                  	
                  	
				
				  
				  Info::~Info()
				  {
				  	
				  }
				  

	

		  



			 


    


