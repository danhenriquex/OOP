#ifndef IA_H
#define IA_H

#include <unistd.h>

#include "player.h"
#include "board.h"

class SmartPlayer : public Player {
 public:
   SmartPlayer( class Board* b, const int& type );

   bool IAvictory( void );
   bool getMove( void );
   bool Play( void );
   bool Mark( void );

  private:

    Board* b_;
    int type_;
};

#endif // IA_H
