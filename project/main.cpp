#include "numerocomplexo.h"

int main( void ) {
	
  while (true) {
  	
    std::cout << "1. Soma de numeros complexos." << std::endl;
    std::cout << "2. Subtracao de numeros complexos." << std::endl;
    std::cout << "3. Multiplicacao de numeros complexos." << std::endl;
    std::cout << "4. Divisao de numeros complexos." << std::endl; 
    std::cout << "5. Exit." << std::endl;
    
    int op;
    std::cin >> op;
    
    NumeroComplexo cs;
    
    int real, imag;
    
    switch (op) {
    	
      case 1:
      	
      	std::cout << "Digite um numero real: " << std::endl;
      	std::cin >> real;
      	std::cout << "Digite um numero imaginario: " << std::endl;
      	std::cin >> imag;
      	
        cs = NumeroComplexo( real, imag );
        break;
        
      case 5:
	    return -1;
	    
	}
  	
  }

  return 0;
}
