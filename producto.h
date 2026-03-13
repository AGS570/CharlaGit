#ifndef PRODUCTO
#define PRODUCTO
#include <fstream>
#include <iostream>
#include <string>
#include<iomanip>

class producto {
private:
  int codigo;
  std::string nombre;
  float precio;
  int unidades;

public:
  producto();

  producto(int cod, std::string name, float prize, int uds) {
    codigo = cod;
    nombre = name;
    precio = prize;
    unidades = uds;
  }

  void mostrar();

  int activo();
}

;
#endif
