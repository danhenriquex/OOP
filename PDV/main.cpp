#include "main.h"

int main( void ) {

  Estoque e;
  Loja j;

  while (!false) {

    Menu::Menu();

    Cliente c;
    Roupa r;

    std::string nome;
    int id, tam, qnt;

    int op;
    std::cin >> op;

    switch (op) {

    case 1:
      system("clear");
      std::clog << "Digite o nome do cliente: ";
      std::cin >> nome;

      c = Cliente( nome );

      j.GuardaCliente( c );

      break;

    case 2:
      system("clear");
      std::clog << "Digite o ID da roupa: ";
      std::cin >> id;
      std::clog << "Digite o tamanho da roupa: ";
      std::cin >> tam;
      std::clog << "Digite a quantidade de roupas: ";
      std::cin >> qnt;

      r = Roupa( id, tam, qnt );

      e.GuardaRoupas( r );

      break;

    case 3: 
      system("clear");
      j.MostraClientes();
      break;

    case 4:
      system("clear");
      e.MostraRoupas();
      break;

    case 5:
      system("clear");
      std::clog << "Digite o Nome do Cliente: ";
      std::cin >> nome;
      std::clog << "Digite o ID: ";
      std::cin >> id;
      std::clog << "Digite a quantidade: ";
      std::cin >> qnt;

      j.CadastraVenda( e, nome, id , qnt );

      break;

    case 6:
      system("clear");
      std::clog << "Digite o nome do cliente: ";
      std::cin >> nome;

      j.ClienteRoupa( nome );

      break;

    case 7:
      system("clear");
      std::clog << "Digite o ID da roupa: ";
      std::cin >> id;

      j.RoupaCliente( id );

      break;
      
    case 8:
      system("clear");
      std::clog << "Digite o ID da roupa: ";
      std::cin >> id;

      e.Exemplares( id );

      break;

    case 9:
      return -1;
    }

  }

  return 0;
}
