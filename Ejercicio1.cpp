#include <bits/stdc++.h>
#include "stock.h"

using namespace std;

int main(){
    stock st = stock();
    st.cargaLista();
    st.mostrarLista();
    st.activoTotal();
    st.ordenar();
    st.mostrarLista();
    return 0;
}