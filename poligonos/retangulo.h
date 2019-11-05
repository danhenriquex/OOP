#ifndef RETANGULO_H
#define RETANGULO_

class Retangulo {
  public:
    Retangulo( void );
    Retangulo( const int& altura, const int& largura );

    int Area( void );
    int Perimetro( void );

 private:
   int altura_;
   int largura_;
};

#endif