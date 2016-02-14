#include "staxc.h"

#include "Game.h"

void Run_Game (int Line) {
    char buf[100];
    
    ifstream in;
    in.open("scr.txt");
    
    if (! in.is_open()) {
        cout << "Failed to find scr.txt" << endl;
        
    } else {
        
        while (!in.eof()) {
            in.getline (buf, 100);
            cout << buf << endl;
        }
    }
    
    cout << "\n=================" << endl;
    cout << "Game Over" << endl;
    cout << "=================" << endl;
}