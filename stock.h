#ifndef STOCK
#define STOCK
#include "producto.h"
#include <fstream>
#include <iostream>
#include <string>
#define MAX 100

typedef struct {
  producto product[MAX];
  int contador;
} tLista;
class stock {
private:
  tLista list;

public:
  stock() {
    list.contador = 0; 
  }

  void cargaLista();
  void mostrarLista();
  int activoTotal();
  void ordenar();
}


;
#endif
