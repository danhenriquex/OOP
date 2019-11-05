#ifndef QUADRADO_H
#define QUADRADO_H

class Quadrado {
 public:
   Quadrado( void );
   Quadrado( const int& lado );

   int Area( void );
   int Perimetro( void );

  private:
    int lado_;
};

#endif
