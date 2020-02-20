
#include "teclado.h"
#include <stdlib.h>

int pega_comando_teclado()
{
    char tecla = getchar();
    switch(tecla){
        case 10: return ENTER;
        case 97: return LEFT;
        case 119: return UP;
        case 100: return RIGHT;
        case 115: return DOWN;
        default: return UNKNOWN;
    }
}
