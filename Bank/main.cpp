#include "main.h"

int main( void ) {
   
  ContaPoupanca cp( 5000 );

  float valor;
  
  while (true) {
    
    Menu::Menu();

    int op;
    std::cin >> op;

    switch (op) {

      case 1:
        system("clear");
        std::cout << "Valor para deposito: ";
        std::cin >> valor;

        cp.Depositar( valor );
        break;

      case 2:
        system("clear");
        std::cout << "Valor para saque: ";
        std::cin >> valor;

        cp.Sacar( valor );
        break;

      case 3:
        system("clear");
        cp.EmitirExtrato();
        break;

      case 4:
        return -1;
    }
  }
  
  return 0;
} 