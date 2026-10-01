#include<bits/stdc++.h>
using namespace std;

int main() {

    int a;
    cin >> a;

    while (a!=0) {

        vector <string> paises;
        vector <int> resultados, posiciones;

        for (int i=0 ; i<a ; i++) {
            string pais;
            cin >> pais;
            paises.push_back(pais);
        }

        for (int i=0 ; i<a ; i++) {
            int resultado;
            cin >> resultado;
            resultados.push_back(resultado);
            posiciones.push_back(i+1);
        }

        while (posiciones.size()>1) {

            for (int i=0 ; i<posiciones.size() ; i+=2) {
                if (resultados[i]<resultados[i+1]) {
                    resultados[i]=0;
                    posiciones[i]=0;
                } else {
                    resultados[i+1]=0;
                    posiciones[i+1]=0;
                }
            }

            for (int i=0 ; i<posiciones.size() ; i++) {
                if (posiciones[i]==0) {
                    
                }
            }
        }
    }
}