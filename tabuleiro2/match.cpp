#include "match.h"

bool test = false;
extern bool draw;
extern int d;

Match::Match( void )

{}

Match::Match( Player* x1, Player* x2 )
    : x1(x1), x2(x2)

{}

Match::Match( Player* x1, SmartPlayer* sp)
    : x1(x1), sp(sp)

{}

Match::Match( SmartPlayer* p1, SmartPlayer* p2 ) 
    : sp(p1), sp1(p2)

{}

void Match::StartPVIA( Board* b ){

std::clog << "Aperte enter para comecar o jogo." << std::endl;

 getch();

 while (!test) {

    if (!draw){

      x1->Play();

      if (test == true) {

        b->Draw();

        printf("\n \t ==== Jogador X ganhou ====\n");

        test = false;
        d = 0;
        draw = false;

        break;
    }

    }

    if (draw) {

        sp->Game( x1 );

         if (test == true) {

            b->Draw();

            printf("\n \t ===== Jogador O ganhou ====\n");

            test = false;
            d = 0;
            draw = true;

            break;
        }

    }

    if (d == 9) {

        std::clog << "\n \t ===== Deu velha =====\n" << std::endl;

        break;
    }


  }

}

void Match::StartPVP( Board* b ) {

 std::clog << "Aperte enter para comecar o jogo." << std::endl;

 getch();

 while (!test) {

    if (!draw){

      x1->Play();

      if (test == true) {

        b->Draw();

        printf("\n \t ==== Jogador X ganhou ====\n");

        test = false;
        d = 0;
        draw = false;

        break;
    }

    }

    if (draw) {

        x2->Play();

         if (test == true) {

            b->Draw();

            printf("\n \t ===== Jogador O ganhou ====\n");

            test = false;
            d = 0;
            draw = true;

            break;
        }

    }

    if (d == 9) {

        std::clog << "\n \t ===== Deu velha =====\n" << std::endl;

        break;
    }


  }

}

