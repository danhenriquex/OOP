#include "main.h"

int main( void ) {

  while (true) {

    Menu::Menu();

    int op;
    std::cin >> op;
    
    Board b;
    Player* x1;
    Player* x2;
    SmartPlayer* sp;
    SmartPlayer* sp1;
    Match m;

    int tipo, tipo1;

    switch (op) {

      case 1:

        x1 = new SinglePlayer( &b, 4 );
        x2 = new SinglePlayer( &b, 1 );

        m = Match( x1, x2 );

        m.StartPVP( &b );

        free( x1 );
        free( x2 );

        break;
      
      case 2:

        x1 = new SinglePlayer( &b, 4 );
        sp = new SmartPlayer( &b, 1 );

        m = Match( x1, sp );

        m.StartPVIA( &b );

        free( x1 );
        free( sp );

        break;

      case 3:
        return 0;

    }
  }

  return 0;
}
