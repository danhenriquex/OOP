#include "singleplayer.h"

int d = 0;
bool draw = false;

SinglePlayer::SinglePlayer( class Board* b, const int& type ) 
    : b_(b), type_(type) 

{}

SinglePlayer::SinglePlayer( class Board* b ) : b_(b)

{}

void SinglePlayer::Mark( const int& mark_x, const int& mark_y, const int& type ) {

  int comando = pega_comando_teclado();

  switch (comando) {

  case ENTER:

    if (b_->matrix_[mark_x][mark_y] == 4) {

    }else if (b_->matrix_[mark_x][mark_y] == 1) {

    }else if (b_->matrix_[mark_x][mark_y] == 0) {

       if (type_ == 1) {

         b_->matrix_[mark_x][mark_y] = 1;

         ++d;

         draw = false;
        
       }else if (type_ == 4) {

         b_->matrix_[mark_x][mark_y] = 4;

         ++d;
         
         draw = true;
        
       }

}
    break;

  case UP:
    --b_->mark_x;

    if (b_->mark_x == -1)
      b_->mark_x = 2;

    break;

  case LEFT:
    --b_->mark_y;
    if (b_->mark_y == -1)
      b_->mark_y = 2;

    break;

  case RIGHT:
    ++b_->mark_y;
    if (b_->mark_y == 3)
      b_->mark_y = 0;
    break;

  case DOWN:
    ++b_->mark_x;
    if (b_->mark_x == 3)
      b_->mark_x = 0;
    break;

  default:
    break;
  }

}

bool SinglePlayer::Play( void ) { // pass singleplayer type instead of int x

  b_->Draw();

  if (type_ == 4) {

      std::clog << "Vez do Jogador( X )" << std::endl;

  }else if (type_ == 1) {

    std::clog << "Vez do Jogador( O )" << std::endl;

  }

  Mark( b_->mark_x, b_->mark_y, type_ );

  b_->Winner( this->b_ );

}
