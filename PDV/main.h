#include <iostream>

namespace Menu {

void Menu () {
  std::clog << "1. Cadastrar Cliente." << std::endl;
  std::clog << "2. Cadastrar roupa." << std::endl;
  std::clog << "3. Clientes cadastrados." << std::endl;
  std::clog << "4. Roupas no Estoque." << std::endl;
  std::clog << "5. Cadastrar venda." << std::endl;
  std::clog << "6. Roupas comprados por um cliente." << std::endl;
  std::clog << "7. Clientes que ja compraram uma roupa." << std::endl;
  std::clog << "8. Exemplares de uma roupa: " << std::endl;
  std::clog << "9. Exit." << std::endl;
}

}