
#include "teclado.h"

int pega_comando_teclado()
{
    char tecla = getch();
    switch(tecla){
        case 13: return ENTER;
        case 75: return LEFT;
        case 72: return UP;
        case 77: return RIGHT;
        case 80: return DOWN;
        default: return UNKNOWN;
    }
}
