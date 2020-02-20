#ifndef MATCH_H
#define MATCH_H

#include "board.h"

class Match {
 public:
  //  Match( void );
  //  Match()

   bool Winner( const Board& b );
   void Start( void );

   void addPlayer1( Player* x ) {this->x1 = x;}
   void addPlayer2( Player* y ) {this->x2 = y;}

   friend class Board;

  //  Board* getBoard( void ) {return this->b;}

 private:
   Player* x1;
   Player* x2;
   
 
   int mark_x = 1;
   int mark_y = 1;
};

#endif