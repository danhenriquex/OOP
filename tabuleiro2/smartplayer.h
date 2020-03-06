#ifndef IA_H
#define IA_H

#include <unistd.h>

#include "player.h"
#include "board.h"

class SmartPlayer : public Player {
 public:
   SmartPlayer( class Board* b, const int& type );

   bool IAvictory( Board* b );
   bool getMove( Board* b );
   bool Play( void );
   bool Mark( void );

   friend class Board;

  private:

    Board* b_;
    int type_;

};

#endif // IA_H
