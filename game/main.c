#include <locale.h>
#include <ncurses.h>
#include <string.h>
#include "game.h"

int title(void)
{
    int w, h;

    erase();
    getmaxyx(stdscr, h, w);

    mvprintw(h/2-4, (w-strlen("Main Menu"))/2, "Main Menu");
    
    refresh();

    timeout(-1);
    return (getch());
}

int main(void)
{

    initscr();
    curs_set(0);
    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_YELLOW, COLOR_BLACK);
    bkgd(COLOR_PAIR(1));
    
    while (1)
    {
        if(title() == 'q') break;
        if(game() == 'q') break;
    }
    endwin();

    return (0);
}
