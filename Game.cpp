#include "staxc.h"

#include "Game.h"

void sleepcp(int milliseconds) {
    clock_t time_end;
    time_end = clock() + milliseconds * CLOCKS_PER_SEC/1000;
    while (clock() < time_end) { }
}

void Run_Game (int Line) {
    char buf[100], tmp[10], choa[100], chob[100];
    int a, b, loop = 0;
    
    ifstream in;
    in.open("scr.txt");
    
    if (! in.is_open()) {
        cout << "Failed to find scr.txt" << endl;
        
    } else {
        
        while (!in.eof()) {
            in.getline (buf, 100);
            loop ++;
            
            if (buf[0] != '#' && buf[0] != '$') cout << buf << endl << endl;
            else if (buf[0] == '#') {
                sscanf (buf, "# %s %d %s %d", choa, &a, chob, &b);
                
                cout << "0: " << choa << endl;
                cout << "1: " << chob << endl;
                
                bool chosflag;
                do {
                    cout << "_> ";
                    chosflag = false;
                    cin >> tmp;
                    if (strcmp(tmp, "1") == 0 || strcmp(tmp, "0") == 0) chosflag = true;
                } while (chosflag == false);
                
                if (strcmp(tmp, "0") == 0) {
                    while (!in.eof() && loop++ < a-1) in.getline (buf, 100);
                }
                if (strcmp(tmp, "1") == 0) {  
                    while (!in.eof() && loop++ < b-1) in.getline (buf, 100);
                }
                continue;
            } else if (buf[0] == '$') {
                sscanf (buf, "$ %d", &a);
                while (!in.eof() && loop++ < a-1) in.getline (buf, 100);
                continue;
            }
            
            sleepcp(1000);
        }
    }
    
    cout << "\n=================" << endl;
    cout << "Game Over" << endl;
    cout << "=================" << endl;
} 