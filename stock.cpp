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

void stock::mostrarLista() {

  for (int i =0; i < list.contador;i++){
    list.product[i].mostrar();
  }
}

int stock::activoTotal(){
  int total =0;
  for (int i =0; i < list.contador;i++){
    total += list.product[i].activo();
  }
  return total;
}

void stock::ordenar(){
  bool done = false;
  producto aux;
  for(int i =1; i <  list.contador ;i++){
    while(!done){
      if(list.product[i].getCodigo() < list.product[i-1].getCodigo()){
        aux = list.product[i-1];
        list.product[i-1 ] = list.product[i];
        list.product[i] = aux;
      }else if(list.product[i].getCodigo() > list.product[i-1].getCodigo()){
        done = true;
      }
    }
    done = false;
  }
}
