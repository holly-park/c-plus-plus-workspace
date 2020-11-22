#include <curses.h>

int main(){
    initscr();
    int max_y, max_x;
    getmaxyx(stdscr, max_y, max_x);
    printw("Hello Ncurse!");
    refresh();
    getch();
    endwin();
    return 0;
}