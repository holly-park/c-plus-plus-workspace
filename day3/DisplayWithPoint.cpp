#include <iostream>
#include <string>
#include <curses.h>

using namespace std;

int main(){
    using namespace std;
    WINDOW*w;
    w = initscr();
    curs_set(0);
    int max_y = LINES-1, max_x = COLS-COLS;
    printw("Start Hello Ncurse!");
    move(3,4);
    addch('3');
    mvaddch(5,4,'5');
    string str_var = "max_y, max_x: " + to_string(int(LINES)) + "," + to_string(int(COLS));
    mvaddstr(6, 4, str_var.c_str());
    mvprintw(max_y/2, max_x/2, "Middle Hello Ncurse!");
    mvaddch(max_y - 1, max_x - 1, 'E');
    getch();
    endwin();
    return 0;
}