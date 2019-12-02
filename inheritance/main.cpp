#include "paintbrush.h"

int main(void) {

  PaintBrush pb;

  while (!false) {

    printf("1. Criar Quadrado.\n");
    printf("2. Criar Circulo.\n");
    printf("3. Criar Retangulo.\n");
    printf("4. Fornecer as somas das areas.\n");
    printf("5. Fornecer a soma dos perimetros.\n");
    printf("6. Exit.\n");

    int op;
    std::cin >> op;

    float lado;
    float raio;
    float base, altura;

    Circulo* c;
    Quadrado* q;
    Retangulo* r;

    switch (op) {

    case 1:
    
        std::clog << "Insira o lado do Quadrado: ";
        std::cin >> lado;

        q = new Quadrado(lado);

        pb.adiciona(q);
        break;

    case 2:

        std::clog << "Qual o raio do Circulo: ";
        std::cin >> raio;

        c = new Circulo(raio);

        pb.adiciona(c);

        break;

    case 3:

        std::clog << "Insira a altura do retangulo: ";
        std::cin >> altura;

        std::clog << "Insira a base do retangulo: ";
        std::cin >> base;

        r = new Retangulo(altura, base);

        pb.adiciona(r);

        break;

    case 4:

        std::cout << "A area dos poligonos eh: " << pb.CalculaAreaPoligonos() << std::endl;

        break;

    case 5:

        std::cout << "O perimetro dos poligonos eh: " << pb.CalculaPerimetro() << std::endl;

        break;

    case 6:
        return -1;

    default:
        std::clog << "Wrong option. Try again." << std::endl;
        break;
    }

  }

  return 0;
}