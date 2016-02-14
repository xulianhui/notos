#include "staxc.h"
#include "Menu.h"
#include "Game.h"

void Show_MainMenu () {
    printf ("=================\n");
    printf ("1: Load  the game\n");
    printf ("2: Start new game\n");
    printf ("0: Quit  the game\n");
    printf ("=================\n");
}

string Get_Line () {
    printf ("_> ");
    string buf;
    cin >> buf;
    return buf;
}

void Exit (bool& Flag_Exit) {
    printf ("=================\n");
    string tmp;
    
    do {
        printf ("Save Game('yes / no'):\n");
        printf ("_> ");
        cin >> tmp;
    } while (tmp != "yes" && 
             tmp != "no");
     
    if (tmp == "no") {
        Flag_Exit = true;
        return;
    }
    printf ("Input File Name:\n");
    printf ("_> ");
    cin >> tmp;
    // Save(tmp);
    printf ("Game saved successfully\n");
    printf ("=================\n");
    
    Flag_Exit = true;
}

void New_Game () {
    Run_Game (0);
}