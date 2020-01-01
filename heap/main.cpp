#include "heap.h"

int main( int argc, char** argv ) {

  // std::string directory("instancias-num/");
  // directory += argv[1];

  Heap heap( directory );

  heap.HeapSort();

  heap.Print();

  return 0;
}
