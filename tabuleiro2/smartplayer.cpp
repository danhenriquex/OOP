#include "smartplayer.h"

extern bool draw;
bool first_play = true;
bool first_ia = true;
bool seconde_ia = true;

SmartPlayer::SmartPlayer( class Board* b, const int& type )
    : b_(b), type_(type)

{}

bool SmartPlayer::Play( void ) {

  b_->Draw();

  if (IAvictory( b_ ) == true) {

    b_->Winner( b_ );

    return true;

  }else {

    Mark( b_->mark_x, b_->mark_y, type_ );

    b_->Winner( b_ );

  }

}

bool SmartPlayer::getMove( Board* b ) {

  int centro = 0;
  int canto = 0;

  if (b_->matrix_[0][0] == 0) {

    ++canto;

  }
  
  if (b_->matrix_[0][2] == 0) {

    ++canto;

  }
  
  if (b_->matrix_[2][0] == 0) {

    ++canto;

  }
  
  if (b_->matrix_[2][2] == 0) {

    ++canto;

  }

  if (b_->matrix_[0][1] == 0) {

    centro = centro + 2;;

  }
  
  if (b_->matrix_[1][1] == 0) {

    centro = centro + 2;

  }
  
  if (b_->matrix_[1][0] == 0) {

    centro = centro + 2;

  }
  
  if (b_->matrix_[1][2] == 0) {

    centro = centro + 2;

  }
  
  if (b_->matrix_[2][1] == 0) {

    centro = centro + 2;

  }

  if (canto > centro) {

    if (b_->matrix_[0][0] == 0) {

      b_->matrix_[0][0] = 1;
      
      draw = false;
      return true;

    }else if (b_->matrix_[0][2] == 0) {

      b_->matrix_[0][2] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][0] == 0) {

      b_->matrix_[2][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][2] == 0) {

      b_->matrix_[2][2];

      draw = false;
      return true;  

    }

  }

  if (centro > canto) {

    if (b_->matrix_[1][1] == 0) {

      b_->matrix_[1][1] = 1;

      draw = false;
      return true;

    }

  }

}

bool SmartPlayer::IAvictory( Board* b ) {

  int soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // Primeira linha

    soma = soma + b_->matrix_[0][i];

  }

  if (soma == 2) {

    if (b_->matrix_[0][0] == 0) {

      b_->matrix_[0][0] = 1;
      
      draw = false;
      return true;

    }else if (b_->matrix_[0][1] == 0) {

      b_->matrix_[0][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[0][2] == 0) {

      b_->matrix_[0][2] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // Segunda linha

    soma = soma + b_->matrix_[1][i];

  }

  if (soma == 2) {

    if (b_->matrix_[1][0] == 0) {

      b_->matrix_[1][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][1] == 0) {

      b_->matrix_[1][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][2] == 0) {

      b_->matrix_[1][2] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // terceira linha

    soma = soma + b_->matrix_[2][i];

  }

  if (soma == 2) {

    if (b_->matrix_[2][0] == 0) {

      b_->matrix_[2][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][1] == 0) {

      b_->matrix_[2][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][2] == 0) {

      b_->matrix_[2][2] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // Primeira coluna

    soma = soma + b_->matrix_[i][0];

  }

  if (soma == 2) {

    if (b_->matrix_[0][0] == 0) {

      b_->matrix_[0][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][0] == 0) {

      b_->matrix_[1][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][0] == 0) {

      b_->matrix_[2][0] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // segunda coluna

    soma = soma + b_->matrix_[i][1];

  }

  if (soma == 2) {

    if (b_->matrix_[0][1] == 0) {

      b_->matrix_[0][1] = 1;

      draw = false;
      return true;

    }

    if (b_->matrix_[1][1] == 0) {

      b_->matrix_[1][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][1] == 0) {

      b_->matrix_[2][1] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // Terceira coluna

    soma = soma + b_->matrix_[i][2];

  }

  if (soma == 2) {

    if (b_->matrix_[0][2] == 0) {

      b_->matrix_[0][2] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][2] == 0) {

      b_->matrix_[1][2] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][2] == 0) {

      b_->matrix_[2][2] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // diagonal principal

    soma = soma + b_->matrix_[i][i];

  }

  if (soma == 2) {

    if (b_->matrix_[0][0] == 0) {

      b_->matrix_[0][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][1] == 0) {

      b_->matrix_[1][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][2] == 0) {

      b_->matrix_[2][2] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  int k = 2;

  for (int i = 0; i < b_->size_; ++i) { // diagonal secundaria

    soma = soma + b_->matrix_[i][k];

    --k;

  }

  if (soma == 2) {

    if (b_->matrix_[0][2] == 0) {

      b_->matrix_[0][2] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][1] == 0) {

      b_->matrix_[1][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][0] == 0) {

      b_->matrix_[2][0] = 1;

      draw = false;
      return true;

    }

  }

  return false;

}

bool SmartPlayer::Mark( const int& x, const int& y , const int& type ) {

  int soma = 0;

  if (first_play == true) {

    if (b_->matrix_[1][1] == 4) { //

      b_->matrix_[0][1] = 1;
      b_->mark_x = 0;
      b_->mark_y = 1;

      draw = false;
      first_play = false;
      return true;

    }else if (b_->matrix_[0][0] == 4) {

      b_->matrix_[1][2] = 1;
      draw = false;
      first_play = false;
      return true;

    }else if (b_->matrix_[2][0] == 4) {

      b_->matrix_[1][2] = 1;
      b_->mark_x = 1;
      b_->mark_y = 2;

      draw = false;
      first_play = false;
      return true;

    }else if (b_->matrix_[2][2] == 4) {

      b_->matrix_[1][0] = 1;
      b_->mark_x = 1;
      b_->mark_y = 0;

      draw = false;
      first_play = false;
      return true;

    }else if (b_->matrix_[0][1] == 4) {

      b_->matrix_[2][0] = 1;
      b_->mark_x = 1;
      b_->mark_y = 0;

      draw = false;
      first_play = false;
      return true;

    }else if (b_->matrix_[2][1] == 4) {

      b_->matrix_[0][0] = 1;
      b_->mark_x = 0;
      b_->mark_y = 0;

      draw = false;
      first_play = false;
      return true;

    }else if (b_->matrix_[0][2] == 4) {

      b_->matrix_[2][1] = 1;
      b_->mark_x = 2;
      b_->mark_y = 1;

      draw = false;
      first_play = false;
      return true;

    }else if (b_->matrix_[1][2] == 4) {

      b_->matrix_[0][0] = 1;
      b_->mark_x = 0;
      b_->mark_y = 0;

      draw = false;
      first_play = false;
      return true;

    }else if (b_->matrix_[1][0] == 4) {

      b_->matrix_[0][2] = 1;
      b_->mark_x = 0;
      b_->mark_y = 2;

      draw = false;
      first_play = false;
      return true;

    }

  }

  for (int i = 0; i < b_->size_; ++i) { // Primeira linha

    soma = soma + b_->matrix_[0][i];

  }

  if (soma == 8) {

    if (b_->matrix_[0][0] == 0) {

      b_->matrix_[0][0] = 1;
      
      draw = false;
      return true;

    }else if (b_->matrix_[0][1] == 0) {

      b_->matrix_[0][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[0][2] == 0) {

      b_->matrix_[0][2] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // Segunda linha

    soma = soma + b_->matrix_[1][i];

  }

  if (soma == 8) {

    if (b_->matrix_[1][0] == 0) {

      b_->matrix_[1][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][1] == 0) {

      b_->matrix_[1][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][2] == 0) {

      b_->matrix_[1][2] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // terceira linha

    soma = soma + b_->matrix_[2][i];

  }

  if (soma == 8) {

    if (b_->matrix_[2][0] == 0) {

      b_->matrix_[2][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][1] == 0) {

      b_->matrix_[2][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][2] == 0) {

      b_->matrix_[2][2] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // Primeira coluna

    soma = soma + b_->matrix_[i][0];

  }

  if (soma == 8) {

    if (b_->matrix_[0][0] == 0) {

      b_->matrix_[0][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][0] == 0) {

      b_->matrix_[1][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][0] == 0) {

      b_->matrix_[2][0] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // segunda coluna

    soma = soma + b_->matrix_[i][1];

  }

  if (soma == 8) {

    if (b_->matrix_[0][1] == 0) {

      b_->matrix_[0][1] = 1;

      draw = false;
      return true;

    }

    if (b_->matrix_[1][1] == 0) {

      b_->matrix_[1][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][1] == 0) {

      b_->matrix_[2][1] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // Terceira coluna

    soma = soma + b_->matrix_[i][2];

  }

  if (soma == 8) {

    if (b_->matrix_[0][2] == 0) {

      b_->matrix_[0][2] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][2] == 0) {

      b_->matrix_[1][2] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][2] == 0) {

      b_->matrix_[2][2] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  for (int i = 0; i < b_->size_; ++i) { // diagonal principal

    soma = soma + b_->matrix_[i][i];

  }

  if (soma == 8) {

    if (b_->matrix_[0][0] == 0) {

      b_->matrix_[0][0] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][1] == 0) {

      b_->matrix_[1][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][2] == 0) {

      b_->matrix_[2][2] = 1;

      draw = false;
      return true;

    }

  }

  soma = 0;

  int k = 2;

  for (int i = 0; i < b_->size_; ++i) { // diagonal secundaria

    soma = soma + b_->matrix_[i][k];

    --k;

  }

  if (soma == 8) {

    if (b_->matrix_[0][2] == 0) {

      b_->matrix_[0][2] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[1][1] == 0) {

      b_->matrix_[1][1] = 1;

      draw = false;
      return true;

    }else if (b_->matrix_[2][0] == 0) {

      b_->matrix_[2][0] = 1;

      draw = false;
      return true;

    }

  }

  getMove( b_ );

}
