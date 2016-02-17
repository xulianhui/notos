#include "staxc.h"
#include "Menu.h"

using namespace std;


int main () {
    bool Flag_Exit = false;
    while (Flag_Exit == false) {
        Show_MainMenu();
        
        string MainMenu_Cho;
        bool Flag_Cho;
        
        do {
            Flag_Cho = false;  
            MainMenu_Cho = Get_Line();
            
            if (MainMenu_Cho != "0" && 
                MainMenu_Cho != "1" &&
                MainMenu_Cho != "2" ) {
                
                Flag_Cho = true;
            } 
        } while(Flag_Cho);
        
        
        if (MainMenu_Cho == "1") {
            printf ("Load  the game...\n");
        } else if (MainMenu_Cho == "2") {
            printf ("Start new game...\n");
            New_Game();
        } else if (MainMenu_Cho == "0") {
            printf ("Quit  the game...\n");
            Exit(Flag_Exit);
        }
    }
    
    return 0;
}