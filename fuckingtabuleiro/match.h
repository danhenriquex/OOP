#ifndef MATCH_H
#define MATCH_H

#include "board.h"
#include "singleplayer.h"

class Match {
 public:
  Match( void );
  Match( Player* x1, Player* x2 );

   bool Winner( const Board& b );
   void Start( Board* b );

   void addPlayer1( Player* x ) {this->x1 = x;}
   void addPlayer2( Player* y ) {this->x2 = y;}

   friend class Board;

  //  Board* getBoard( void ) {return this->b;}

 private:
   Player* x1;
   Player* x2;

   int mark_x;
   int mark_y;
};

#endif
