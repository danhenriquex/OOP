#include "match.h"

extern bool test = false;

Match::Match( void )

{}

Match::Match( Player* x1, Player* x2 )
    : x1(x1), x2(x2)

{}

void Match::Start( Board* b ) {

 while (true) {

    x1->Play( 4 );

    if (test == true) {
        b->Draw();
        printf("Jogador X ganhou.\n");
        break;
    }

    x2->Play( 1 );

    if (test == true) {
        b->Draw();
        printf("Jogador O ganhou.\n");
        break;
    }

  }

}

