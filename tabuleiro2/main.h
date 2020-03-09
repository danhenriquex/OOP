#include "match.h"

namespace Menu {

void Menu( void ) {

  std::clog << "\n \t ====== Aperte Enter para jogar ======\n" << std::endl;

  getchar();

  system("clear");

  std::clog << "\n====== Escolha o modo de jogo ======\n" << std::endl;

  std::clog << "\t 1. P VS P" << std::endl;
  std::clog << "\t 2. P VS IA" << std::endl;
  std::clog << "\t 3. Sair" << std::endl;

  std::clog << "\n====================================\n" << std::endl;

}

}
