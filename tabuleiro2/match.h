#ifndef MATCH_H
#define MATCH_H

#include "board.h"
#include "singleplayer.h"
#include "smartplayer.h"

class Match {
 public:
   Match( void );
   Match( Player* x1, Player* x2 );
   Match( Player* x1, SmartPlayer* ia );

   bool Winner( const Board& b );
   void StartPVP( Board* b );
   void StartPVIA( Board* b );

 private:
   Player* x1;
   Player* x2;
   SmartPlayer* sp;
};

#endif
