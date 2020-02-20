#include "board.h"
#include "match.h"
#include "teclado.h"
#include <string.h>
#include "singleplayer.h"

int main( void ) {

  Board b;
  Match m;
  Player* x1 = new SinglePlayer( &b, 4 );
  Player* x2 = new SinglePlayer( &b, 1 );

  m.addPlayer1( x1 );
  m.addPlayer2( x2 );

  int plays = 0;
  bool player;

  while (true) {

    x1->Play( 4 ); // se retornar true
    
    getchar();

    x2->Play( 1 );

    getchar();

    // b.Winner( &b );

  }

  return 0;
}
