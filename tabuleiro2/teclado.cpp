
#include "teclado.h"

int pega_comando_teclado()
{
    //__fpurge(stdin);
    //initscr();
    char tecla = getchar();
    
    /*switch(tecla){
        case 13: return ENTER;
        case 75: return LEFT;
        case 72: return UP;
        case 77: return RIGHT;
        case 80: return DOWN;
        default: return UNKNOWN;
    }*/

  switch(tecla) {

    case 115: return DOWN;
    case 119: return UP;  
    case 100: return RIGHT;
    case 97: return LEFT;
    case 10: return ENTER;
    default: return UNKNOWN;
  

  }
 
}
