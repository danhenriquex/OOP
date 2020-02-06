#ifndef TEMPLATE_H
#define TEMPLATE_H

template<class T>
class Queue {
  public:
    Queue( const int& size );
    ~Queue( void ) {delete elem;}
    
    void Push( const T& e );
    T Pop( void );
    int Circular( const int& i );

  protected:
    T* elem;
    
  private:
  	int size_;
  	int ini_, fim_;
};

template<class T> void Push( const T& e ) {

  if ()	

}

#endif
