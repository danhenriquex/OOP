#include "match.h"

bool test = false;
extern bool draw;
extern int d;

Match::Match( void )

{}

Match::Match( Player* x1, Player* x2 )
    : x1(x1), x2(x2)

{}

Match::Match( Player* x1, SmartPlayer* sp )
    : x1(x1), sp(sp)

{}

void Match::StartPVIA( Board* b ){

  std::clog << "===== Aperte enter para comecar o jogo =====" << std::endl;

  getchar();

  while (!test) {

    if (!draw){

      x1->Play();

      if (test == true) {

        b->Draw();

        printf("\n \t ==== Jogador X ganhou ====\n");

        getchar();

        test = false;
        d = 0;
        draw = false;

        break;
    }

    }

    if (draw) {

      sp->Play();

      sleep(1);

        if (test == true) {

          b->Draw();

          printf("\n \t ===== Jogador O ganhou =====\n");

          getchar();

          test = false;
          d = 0;
          draw = false;

          break;
      }

    }

    if (d == 5) {

      std::clog << "\n \t ===== Deu velha =====\n" << std::endl;

      getchar();

      test = false;
      d = 0;
      draw = false;

      break;
    }

  }

}

void Match::StartPVP( Board* b ) {

  std::clog << "===== Aperte enter para comecar o jogo =====" << std::endl;

  getchar();

  while (!test) {

    if (!draw){

      x1->Play();

      if (test == true) {

        b->Draw();

        printf("\n \t ==== Jogador X ganhou ====\n");

	      getchar();

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
		
	      getchar();

        test = false;
        d = 0;
        draw = false;

        break;

      }

    }

    if (d == 9) {

      std::clog << "\n \t ===== Deu velha =====\n" << std::endl;

	    getchar();

      test = false;
      d = 0;
      draw = false;

      break;
    }

  }

}

