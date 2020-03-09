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
    Match m;

    switch (op) {

      case 1:

        x1 = new SinglePlayer( &b, 4 );
        x2 = new SinglePlayer( &b, 1 );

        m = Match( x1, x2 );

        m.StartPVP( &b );

        break;
      
      case 2:

        x1 = new SinglePlayer( &b, 4 );
        sp = new SmartPlayer( &b, 1 );

        m = Match( x1, sp );

        m.StartPVIA( &b );

        break;

      case 3:
        return 0;

      default:
        std::clog << "Opcao errada. Tente novamente." << std::endl;
        break;

    }
  }

  return 0;
}
