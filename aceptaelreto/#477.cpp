#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> vec;
    while (true) {
        vector<int> resultados;
        int a;
        cin >> a;
        if (a==0) {
            break;
        }
        int b;
        cin >> b;
        vector<int> inocentes (b);
        vector<int> villanos (b);
        for (int i=0 ; i<b ; i++) {
            int x;
            cin >> x;
            inocentes[i]=x;
            int y;
            cin >> y;
            villanos[i]=y;
        }
        int dano=0;
        while (true) {
            int ino=10001, vil=0 , it=0;
            for (int i=0 ; i<b ; i++) {
                if (inocentes[i]=ino) {
                    if (villanos[i]>vil) {
                        ino=inocentes[i];
                        vil=villanos[i];
                        it=i;
                    }
                } else if (inocentes[i]<ino) {
                    ino=inocentes[i];
                    vil=villanos[i];
                    it=i;
                }
            
            }

            resultados.push_back(it+1);
            inocentes[it]=10001;
            villanos[it]=10001;
            dano+=villanos[it];

            if (dano >= a) {
                break;
            } else if (resultados.size()==b) {
                resultados.resize(resultados.size()-(resultados.size()-1));
                resultados[0]=-1;
                break;
            }
        }
                                                                                                                                                                                              
        if (dano<a) {
            resultados.resize(resultados.size()-(resultados.size()-1));
            resultados[0]=-1;
        }
        vec.push_back(resultados);
    }
    for (int i=0 ; i<vec.size(); i++) {
        for (int j=0 ; j<vec[i].size() ; j++) {
            if (vec[i][j]==0) {
                cout << "MUERTE ESCAPA";
            } else {
                cout << vec[i][j] << ' ';
            }
        }
    }
}