#include "paint.h"

int main( void ) {

  Paint pb;

  while (!false) {

    std::clog << "1. Cria Quadrado." << std::endl;
    std::clog << "2. Criar Retangulo." << std::endl;
    std::clog << "3. Imprime Area." << std::endl;
    std::clog << "4. Imprime Perimetro." << std::endl;
    std::clog << "5. Exit." << std::endl;

    int op;
    std::cin >> op;

    Quadrado q;
    Retangulo r;
    int lado, base, altura;

    switch (op) {

      case 1:
        std::clog << "Digite o lado do quadrado: ";
        std::cin >> lado;

        q = Quadrado( lado );

        pb.adiciona( q ); 

        break;
      
      case 2:
        std::clog << "Digite a base do retangulo: ";
        std::cin >> base;
        std::clog << "Digite a altura do retangulo: ";
        std::cin >> altura;

        r = Retangulo( base, altura );

        pb.adiciona( r );

        break;
    
      case 3:
        std::clog << "A area dos poligonos: " << pb.AreaTotal() << std::endl;
        break;
    
      case 4:
        std::clog << "O perimetro dos poligonos eh: " << pb.PerimetroTotal() << std::endl;
        break;

      case 5:
        return -1;
    }

  }

  return 0;
}
