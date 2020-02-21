
#include "singleplayer.h"

SinglePlayer::SinglePlayer( Board* b, const int& type ) {

  this->b_ = b;
  this->type_ = type;

}

bool SinglePlayer::Play( const int& x ) { // pass singleplayer type instead of int x

  b_->Draw();

  if (x == 4) {

    std::clog << "Vez do Jogador( X )" << std::endl;

  }else {

    std::clog << "Vez do Jogador( O )" << std::endl;

  }


  b_->Mark( x );

  b_->Winner( this->b_ );

}
