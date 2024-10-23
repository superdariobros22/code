#include<bits/stdc++.h>
using namespace std;

int main() {

    

    vector<string> sol;

    

    while (true) {

        int a;
        cin >> a;

        if (a==0) {
            break;
        }

        vector <string> paises;
        vector <int> resultados;

        for (int i=0 ; i<a ; i++) {
            string pais;
            cin >> pais;
            paises.push_back(pais);
        }

        int b=0, c=a*2;

        for (int i=0 ; i<log2(a); i++) {
            c=c/2;
            b=b+c; 
        }

        for (int i=0 ; i<b ; i++) {
            int resultado;
            cin >> resultado;
            resultados.push_back(resultado);
        }

        int x=resultados.size()-1, des=0, resta=0;
        vector<int> error = {0, 0, 0, 0, 0, 0};
        vector<int> tabla = {2, 2, 4, 8, 16, 32};

        for (int i=0 ; i<log2(a)-1 ; i++) {
            if (resultados[x]>resultados[x-1]) {
                for (int j=0 ; j<i+1 ; j++) {
                    if (error[j]==1) {
                        resta=resta+tabla[i+1-(j+1)];
                    } 
                }
                des=pow(2, (i+1))+resta;
            } else {
                error[i]=1;
                for (int j=0 ; j<i+1 ; j++) {
                    if (error[j]==1) {
                        resta=resta+tabla[i+1-(j+1)];
                    } 
                }
                des=pow(2, (i+1))+resta;
            }
            x=x-des;
            resta=0;
        }

        if (a==2) {
            if (resultados[0]>resultados[1]) {
                x=0;
            } else {
                x=1;
            }
        }

        sol.push_back(paises[x]);
    }

    for (int i=0 ; i<sol.size() ; i++) {
        cout << sol[i] << endl;
    }
}