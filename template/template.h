#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>
#include <string>

template <class T> class Queue {
 public:
   Queue( void ) {}
   Queue( const int& size );

   void Push( const T& elem );
   T Pop( void );

 protected:
   T* vec_;

 private:
   int size_;
   int begin_;
   int end_;
};

template <class T> Queue<T>::Queue( const int& size ) : begin_(0), end_(0), size_(size) {

  this->vec_ = new T[this->size_];

}

template <class T> void Queue<T>::Push( const T& elem ) {

  if ((this->end_ + 1) == this->begin_ || 
      (this->end_ + 1) % this->size_ == this->begin_) {

    std::clog << "Queue is full." << std::endl;

  }else {

    this->vec_[this->end_] = elem;
    this->end_ = (this->end_ + 1) % this->size_;

  }

}

template <class T> T Queue<T>::Pop( void ) {

  if (this->begin_ == this->end_) {

    std::clog << "Queue is empty." << std::endl;

  }else {

    T aux = this->vec_[this->begin_];

    this->begin_ = (this->begin_ + 1) % this->size_;

    return aux;
  }

}

#endif