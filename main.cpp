#include <iostream>

class Tocador {
 public:
   void Tocar( void );
   void Pausar( void );
   void Parar( void );
   static Tocador* getInstance( const int& tipo ); // método de classe
   int tipo_;

 private:
   Tocador( const int& tipo );
   static Tocador* t_; //Variável de classe
};

Tocador* Tocador::t_ = NULL;

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
  
 if (t_ == NULL) 
    t_ = new Tocador( tipo );

  return t_;
}

int main( void ) {

  Tocador* t = Tocador::getInstance( 10 );

  t->Tocar();

  t->Pausar();

  return 0;
}


