#include "match.h"

extern bool test = false;
extern bool draw;
extern int d;

Match::Match( void )

{}

Match::Match( Player* x1, Player* x2 )
    : x1(x1), x2(x2)

{}

void Match::Start( Board* b ) {

 std::clog << "Aperte enter para comecar o jogo." << std::endl;

 getch();

 while (!test) {

    if (!draw){

      x1->Play( 4 );

      if (test == true) {
        b->Draw();
        printf("Jogador X ganhou.\n");
        break;

    }


    }

    if (draw) {

        x2->Play( 1 );

         if (test == true) {
            b->Draw();
            printf("Jogador O ganhou.\n");
            break;
        }

    }

    if (d == 9) {
        std::clog << "Deu velha" << std::endl;
        break;
    }


  }

}

