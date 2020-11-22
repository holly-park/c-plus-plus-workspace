#include <iostream>
#include <curses.h>
using namespace std;

#define PLAYER '*'
#define WALL 'W'
#define OPPONENT 'O'
#define E_TRACE ' '

int is_move_okay(int y, int x){
    int compare_ch;
    compare_ch = mvinch(y,x);
    return !((compare_ch == 'W'));
}

int main(void){
    WINDOW *w;
    w = initscr();
    curs_set(0);
    keypad(stdscr, TRUE);
    int y = LINES - 1, x = COLS - COLS, move_x = 0, move_y = 0;
    int ch = 'y';
    while ((ch != 'q') && (ch != 'Q'))
    {
        mvaddch(++move_y, ++move_x, OPPONENT);
        mvaddch(y, x, PLAYER);
        mvaddch(10, 5, WALL);
        mvaddch(11, 5, OPPONENT);
        ch = getch();
        switch (ch)
        {
        case KEY_UP:
            if (is_move_okay(y-1, x)){y=y-1;}; break;
        case KEY_DOWN:
            if (is_move_okay(y+1, x)){y=y+1;}; break;
        case KEY_LEFT:
            if (is_move_okay(y, x-1)){x=x-1;}; break;
        case KEY_RIGHT:
            if (is_move_okay(y, x+1)){x=x+1;}; break;
        }
       
    }
     endwin();
     return 0;
}