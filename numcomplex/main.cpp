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
    
    NumeroComplexo c1, c2, c3;
    
    int real, imag;
    
    switch (op) {
    	
      case 1:
      	
      	std::cout << "Digite um numero real: " << std::endl;
      	std::cin >> real;
      	std::cout << "Digite um numero imaginario: " << std::endl;
      	std::cin >> imag;
      	
      	c1 = NumeroComplexo( real, imag );
      	
      	std::cout << "Digite um numero real: " << std::endl;
      	std::cin >> real;
      	std::cout << "Digite um numero imaginario: " << std::endl;
      	std::cin >> imag;
      	
        c2 = NumeroComplexo( real, imag );
        
        c3 = c1 + c2;
        
        //std::cout << " " << c3.getReal() << "+" << c3.getImag() << "i" << std::endl;
        
        std::cout << "Resultado: " << c3;
        
        break;
        
      case 2:
      	
      	std::cout << "Digite um numero real: " << std::endl;
      	std::cin >> real;
      	std::cout << "Digite um numero imaginario: " << std::endl;
      	std::cin >> imag;
      	
      	c1 = NumeroComplexo( real, imag );
      	
      	std::cout << "Digite um numero real: " << std::endl;
      	std::cin >> real;
      	std::cout << "Digite um numero imaginario: " << std::endl;
      	std::cin >> imag;
      	
        c2 = NumeroComplexo( real, imag );
        
        c3 = c1 - c2;
        
        //std::cout << " " << c3.getReal() << "+" << c3.getImag() << "i" << std::endl;
        
        std::cout << "Resultado: " << c3;
        
        break;
        
      case 3:
      	
      	std::cout << "Digite um numero real: " << std::endl;
      	std::cin >> real;
      	std::cout << "Digite um numero imaginario: " << std::endl;
      	std::cin >> imag;
      	
      	c1 = NumeroComplexo( real, imag );
      	
      	std::cout << "Digite um numero real: " << std::endl;
      	std::cin >> real;
      	std::cout << "Digite um numero imaginario: " << std::endl;
      	std::cin >> imag;
      	
        c2 = NumeroComplexo( real, imag );
        
        c3 = c1 * c2;
        
        //std::cout << " " << c3.getReal() << "+" << c3.getImag() << "i" << std::endl;
        
        std::cout << "Resultado: " << c3;
        
      	break;
      	
      case 4:
      	
      	std::cout << "Digite um numero real: " << std::endl;
      	std::cin >> real;
      	std::cout << "Digite um numero imaginario: " << std::endl;
      	std::cin >> imag;
      	
      	c1 = NumeroComplexo( real, imag );
      	
      	std::cout << "Digite um numero real: " << std::endl;
      	std::cin >> real;
      	std::cout << "Digite um numero imaginario: " << std::endl;
      	std::cin >> imag;
      	
        c2 = NumeroComplexo( real, imag );
        
        c3 = c1 / c2;
        
        //std::cout << " " << c3.getReal() << "+" << c3.getImag() << "i" << std::endl;
        
        std::cout << "Resultado: " << c3;
        
      	break;
        
      case 5:
	    return 0;
	    
	}
  	
  }

  return 0;
}
