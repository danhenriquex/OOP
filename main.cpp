#include <iostream>

class Tocador {
 public:
   void Tocar( void );
   void Pausar( void );
   void parar( void );
   static Tocador* getInstance( const int& tipo ); // método de classe
   int tipo_;

 private:
   Tocador( const int& tipo );
   static Tocador* t; //Variável de classe
};

Tocador* Tocador::t = NULL;

Tocador::Tocador( const int& tipo ) : tipo_(tipo) {

  std::clog << "Construtor chamado." << std::endl;

}

void Tocador::Tocar( void ) {

  std::clog << "Esta tocando." << std::endl;

}

void Tocador::Pausar( void ) {

  std::clog << "Esta pausado." << std::endl;

}

Tocador* Tocador::getInstance( const int& tipo ) { // Método que garante a instância da classe apenas uma vez
  if (t == NULL) 
    t = new Tocador( tipo );

  return t;
}

int main( void ) {

  Tocador* t = Tocador::getInstance( 10 );

  t->Tocar();

  t->Pausar();

  return 0;
}


