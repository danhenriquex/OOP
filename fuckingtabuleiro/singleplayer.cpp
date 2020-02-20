
#include "singleplayer.h"

SinglePlayer::SinglePlayer( Board* b, const int& type ) {

  this->b_ = b;
  this->type_ = type;

}

bool SinglePlayer::Play( const int& x ) { // pass singleplayer type instead of int x

  b_->Draw();

  b_->Mark( x );

  b_->Winner( this->b_ );

}
