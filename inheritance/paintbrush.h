#ifndef _PAINTBRUSH_H_
#define _PAINTBRUSH_H_

#include "quadrado.h"
#include "circulo.h"
#include "retangulo.h"
#include "poligono.h"

class PaintBrush {
 public:
   float CalculaAreaPoligonos();
   float CalculaPerimetro();
   void adiciona(Poligono* p);

 private:
   std::vector<Poligono*> poligonos_;
};

#endif // _PAINTBRUSH_H_
