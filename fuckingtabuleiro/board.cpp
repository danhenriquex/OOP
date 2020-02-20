#include "board.h"

extern bool test;

Board::Board( void ) {

  this->matrix_ = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };

}

bool Board::Winner( Board* b ) {

  int soma_dg1 = 0;
  int soma_dg2 = 0;
  int k = 0;
  int l = 0;
  int aux = 0;
  int aux1 = 0;

  for (int i = 0; i < b->size_; ++i) { // diag principal

    soma_dg1 = soma_dg1 + b->matrix_[i][i];

  }

  if (soma_dg1 == 3) {

    //std::clog << "Player 2(O) won." << std::endl;

    test = true;

    return true;

  }else if (soma_dg1 == 12) {

    //std::clog << "Player 1(X) Won." << std::endl;

    test = true;

    return true;

  }

  int j = 2;

  for (int i = 0; i < b->size_; ++i) { // diag secundaria

    soma_dg2 = soma_dg2 + b->matrix_[i][j--];

  }

  if (soma_dg2 == 3) {

    //std::clog << "Player 2(O) won." << std::endl;

    test = true;

    return true;

  }else if (soma_dg2 == 12) {

    //std::clog << "Player 1(X) Won." << std::endl;

    test = true;

    return true;

  }

  while (k != 3) {

    aux = 0;

    for (int j = 0; j < b->size_; ++j) {

      aux = aux + b->matrix_[j][k];

    }

    if (aux == 3) {

      //std::clog << "Player 2(O) Won." << std::endl;

      test = true;

      return true;

    }else if (aux == 12) {

      //std::clog << "Player 1(X) Won." << std::endl;

      test = true;

      return true;

    }

    ++k;

  }

  while (l != 3) {

    aux1 = 0;

    for (int j = 0; j < b->size_; ++j) {

      aux1 = aux1 + b->matrix_[l][j];

    }

    if (aux1 == 3) {

      //std::clog << "Player 2(O) Won." << std::endl;

      test  = true;

      return true;

    }else if (aux1 == 12) {

      //std::clog << "Player 1(X) Won." << std::endl;

      test = true;

      return true;

    }

    ++l;

  }

  // return false;
}

void Board::Draw( void ) {

  system( "cls" );

  for (int i = 0; i < this->size_; ++i) {

    for (int j = 0; j < this->size_; ++j) {

      switch (this->matrix_[i][j]) {

        case 0:

          if (this->mark_x == i && this->mark_y == j) {
            std::clog << "[ ]";
          }else {
            std::clog << "   ";
          }
          break;

        case 1:
          if (this->mark_x == i && this->mark_y == j) {
            std::clog << "[0]";
          }else {
            std::clog << " 0 ";
          }
          break;

        case 4:
          if (this->mark_x == i && this->mark_y == j) {
            std::clog << "[X]";
          }else {
            std::clog << " X ";
          }
          break;

      }

      if (j < this->size_ - 1) {

        std::clog << "|";

      }

    }

    printf("\n");

    if (i < this->size_ - 1) {

      std::clog << "---+---+---" << std::endl;

    }

  }

}

bool Board::Logic( const int& x ) {

  if (this->matrix_[mark_x][mark_y] == 4) {

        return false;

    }else if (this->matrix_[mark_x][mark_y] == 1) {

        return false;

    }else if (this->matrix_[mark_x][mark_y] == 0) {

       if (x == 1) {
         this->matrix_[mark_x][mark_y] = 1;
         return true;
       }else if (x == 4) {
         this->matrix_[mark_x][mark_y] = 4;
         return true;
       }

}
}

void Board::Mark( const int& x ) {

  int comando = pega_comando_teclado();

  switch (comando) {

  case ENTER:
    if (this->matrix_[mark_x][mark_y] == 4) {

        return Mark( x );

    }else if (this->matrix_[mark_x][mark_y] == 1) {

        return Mark( x );

    }else if (this->matrix_[mark_x][mark_y] == 0) {

       if (x == 1) {
         this->matrix_[mark_x][mark_y] = 1;
         //return true;
       }else if (x == 4) {
         this->matrix_[mark_x][mark_y] = 4;
         //return true;
       }

}
    //return true;
    break;

  case UP:
    --mark_x;

    if (mark_x == -1)
      mark_x = 2;

    break;

  case LEFT:
    --mark_y;
    if (mark_y == -1)
      mark_y = 2;

    break;

  case RIGHT:
    ++mark_y;
    if (mark_y == 3)
      mark_y = 0;
    break;

  case DOWN:
    ++mark_x;
    if (mark_x == 3)
      mark_x = 0;
    break;

  default:
    break;
  }

}

