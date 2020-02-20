#include "board.h"
#include "match.h"
#include "teclado.h"
#include <string.h>
#include "singleplayer.h"


int main( void ) {

  Board b;
  Player* x1 = new SinglePlayer( &b, 4 );
  Player* x2 = new SinglePlayer( &b, 1 );

  Match m( x1, x2 );

  m.Start( &b );

  return 0;
}
