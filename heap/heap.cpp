#include "heap.h"

Heap::Heap( void )

{}

Heap::Heap( const int& length ) : length_(length), size_(0) {

  this->heap_ = new int[this->length_];

  for(int i = this->length_; i > 0; --i)
    this->heap_[this->length_ - i] = i;

}

Heap::Heap( const std::string& file ) : size_(0) {

  std::string lines;

  std::ifstream myfile( file );

  if (myfile.is_open()) {

    myfile >> this->length_;

    this->heap_ = new int[this->length_];

    for (int i = 0; i < this->length_; ++i) {

      myfile >> this->heap_[i];

    }

  }
 
}

Heap::~Heap( void ) {

  if ( heap_ ) 
    delete [] heap_;

}


inline int Heap::Parent( const int& index ) {

  return floor(index/2);
}

inline int Heap::LeftChild( const int& index ) {

  return (2*index + 1);
}

inline int Heap::RightChild( const int& index ) {

  return (2*index + 2);
}

void Heap::MaxHeapify( const int& index ) {

  int largest = 0;
  int left = LeftChild( index );
  int right = RightChild( index );

  if ((left <= this->size_ - 1) && 
       heap_[left] > heap_[index]) {

    largest = left;

  }else {

    largest = index;

  }

  if ((right <= this->size_ - 1) &&
       heap_[right] > heap_[largest]) {

    largest = right;

  }

  if (largest != index) {

    std::swap( heap_[index], heap_[largest] );

    MaxHeapify( largest );

  }

}

void Heap::BuildMaxHeap( void ) {

  this->size_ = this->length_;

  for (int i = floor(this->length_/2)-1; i > 0; --i)
    MaxHeapify( i );

}

void Heap::HeapSort( void ) {

  BuildMaxHeap();

  for (int i = (this->length_-1); i > 0; --i) {

    std::swap( heap_[0], heap_[i] );
    --this->size_;
    MaxHeapify( 0 );

  }

}

void Heap::Print( void ) {

  for (int i = 0; i < this->length_-1; ++i) {

    std::clog << " " << this->heap_[i];

  }

  printf("\n");
}
