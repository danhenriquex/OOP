#include "singleplayer.h"

int d = 0;
bool draw = false;

SinglePlayer::SinglePlayer( class Board* b, const int& type ) 
    : b_(b), type_(type) 

{}

SinglePlayer::SinglePlayer( class Board* b ) : b_(b)

{}

void SinglePlayer::Mark( void ) {

  int comando = pega_comando_teclado();

  switch (comando) {

  case ENTER:

    if (b_->matrix_[b_->coord_x][b_->coord_y] == b_->PX) {

    }else if (b_->matrix_[b_->coord_x][b_->coord_y] == b_->PO) {

    }else if (b_->matrix_[b_->coord_x][b_->coord_y] == b_->vazio) {

       if (type_ == b_->PO) {

         b_->matrix_[b_->coord_x][b_->coord_y] = b_->PO;

         ++d;

         draw = false;
        
       }else if (type_ == b_->PX) {

         b_->matrix_[b_->coord_x][b_->coord_y] = b_->PX;

         ++d;
         
         draw = true;
        
       }

}
    break;

  case UP:
    --b_->coord_x;

    if (b_->coord_x == -1)
      b_->coord_x = 2;

    break;

  case LEFT:
    --b_->coord_y;
    if (b_->coord_y == -1)
      b_->coord_y = 2;

    break;

  case RIGHT:
    ++b_->coord_y;
    if (b_->coord_y == 3)
      b_->coord_y = 0;
    break;

  case DOWN:
    ++b_->coord_x;
    if (b_->coord_x == 3)
      b_->coord_x = 0;
    break;

  default:
    break;
  }

}

bool SinglePlayer::Play( void ) { // pass singleplayer type instead of int x

  b_->Draw();

  if (type_ == b_->PX) {

      std::clog << "Vez do Jogador( X )" << std::endl;

  }else if (type_ == b_->PO) {

    std::clog << "Vez do Jogador( O )" << std::endl;

  }

  Mark();

  if (b_->Winner( this->b_ ) == true)
    return true;
  else
    return false;

}
