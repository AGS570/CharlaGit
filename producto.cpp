#include"producto.h"
using namespace std;

void producto::mostrar(){
    cout <<right<<setw(6)<< codigo <<left<< setw(30) << nombre << setw(8) << precio <<right<< setw(3) << unidades << endl;
}

int producto::activo(){
    int res=0;

    res =  precio * unidades;
    return res;
}
