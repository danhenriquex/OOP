#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

class Heap {
 public:
   Heap( void );
   Heap( const int& length );
   Heap( const std::string& file );
   ~Heap( void );

   inline int Parent( const int& index );
   inline int LeftChild( const int& index );
   inline int RightChild( const int& index );
   void MaxHeapify( const int& index ); // procedure, which runs in O(lg(n)) time, is the key to maintaining the max-heap property.
   void BuidMaxHeap( void ); // procedure, which runs in linear time, produces a maxheap from an unordered input array.
   void HeapSort( void ); // procedure, which runs in O(nlg(n)) time, sorts an array in place.
   void Print( void );

 private:
   int* heap_;
   int length_;
   int size_;
};

#endif