#include "stock.h"
using namespace std;

void stock::cargaLista() {
  int c, u, count = 0;
  string n;
  float p;
  ifstream file("stock.txt");

  if (!file.is_open()) {

  } else {
    c = 0;
    while (c != -1) {
      file >> c;
      if (c != -1 && list.contador < MAX) {
        file >> n;
        file >> p;
        file >> u;
        list.product[count] = producto(c, n, p, u);
        count++;
        list.contador++;
      }
    }
  }

  file.close();
}

void mostrarLista() {

  for (producto p : list.product){
    p.mostrar();
  }
}

