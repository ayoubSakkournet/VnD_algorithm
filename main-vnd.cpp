
#include "Info.h" // info bibliotheque






main() //main function;
{

Info i1; // the object of Info Class 

// french language side;


while(i1.get_v()!=1 && i1.get_v()!=2) // stop the screen temprorly until an other choise
{
	

i1.language_choose(); // choose the language betwwen (french and English)
if(i1.get_v()==1)
{
	
	i1.french_condition();// funtion of french condition 
	while(i1.get_m() != 1 && i1.get_m() != 2 && i1.get_m() != 3)// stop the screen temprorly until an other choise
	{
		i1.french_menu_Display();// menu display
        i1.switch_french();// vnd function also the nested switch statement
    
	}
	
    
    
    
    
}


//English language side
if(i1.get_v()==2)
{
    i1.English_condition();//funtion of English condition
    	while(i1.get_m() != 1 && i1.get_m() != 2 && i1.get_m() != 3)// stop the screen temprorly until an other choise
    	{
    		
		
    i1.English_menu_Display();// menu display
    i1.switch_English();// vnd function also the nested switch statement
    
    
    
}
}


if(i1.get_v() > 2 || i1.get_v() < 1)
{
   i1.Default_language_condition();// the default condition of languages 
   
}
}
getch();// stop the program
}

