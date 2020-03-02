#include "smartplayer.h"

extern bool draw;
bool first_play = true;

SmartPlayer::SmartPlayer( class Board* b, const int& type )
    : b_(b), type_(type)

{}

void SmartPlayer::Play( void ) {

  printf("teste\n");

}

void SmartPlayer::Game( Player* sp ) {

  b_->Draw();

  Mark( b_->mark_x, b_->mark_y, sp );

  b_->Winner( b_ );
  
}

bool SmartPlayer::Mark( const int& x, const int& y , Player* sp ) {

if (first_play == true) {

    if (b_->matrix_[0][0] == type_) {

      b_->matrix_[0][1] == 1;
      first_play = false;
      draw = false;
      return true;

    }else if (b_->matrix_[0][2] == 4) {

      b_->matrix_[1][0] = type_;
      first_play = false;
      draw = false;
      return true;

    }else if (b_->matrix_[2][0] == 4) { // Lembrar de fazer o first_play = false para n entrar mais nos if

      b_->matrix_[1][2] = 1;
      first_play = false;
      draw = false;
      return true;

    }else if (b_->matrix_[2][2] == 4) {

      b_->matrix_[0][1] = 1;
      first_play = false;
      draw = false;
      return true;

    }

    if (b_->matrix_[1][1] == 4) {

      b_->matrix_[0][1] = 1;
      first_play = false;
      draw = false;

    }else if (b_->matrix_[0][1] == 4) {

      b_->matrix_[1][2] = 1;
      first_play = false;
      draw = false;

    }else if (b_->matrix_[2][1] == 4) {

      b_->matrix_[0][0] = 1;
      first_play = false;
      draw = false;

    }else if (b_->matrix_[1][0] == 4) {

      b_->matrix_[0][2] = 1;
      first_play = false;
      draw = false;

    }else if (b_->matrix_[1][2] == 4) {

      b_->matrix_[2][1] = 1;
      first_play = false;
      draw = false;

    }

    //b_->matrix_[1][1] = 1;

  }

}
