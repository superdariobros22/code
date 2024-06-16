#include<bits/stdc++.h>
using namespace std;

int main() {
    vector <int> final;
    while(true) {
        int a;
        cin >> a;
        
        if (a>0) {
            vector<int> vec;
            for (int i=0 ; i<a ; i++) {
                int x;
                cin >> x;
                vec.push_back(x);
            }
            map<int, int> calcetines;
            int s=0, valormax=0;
            for (int i=0 ; i<a ; i++) {
                if (calcetines [vec[i]] == 0) {
                    calcetines [vec[i]] = 1;
                } else {
                    calcetines [vec[i]] = calcetines [vec[i]] +1;
                }
                if (calcetines[vec[i]] % 2 == 0) {
                    s--;
                } else if (calcetines[vec[i]] % 2 == 1) {
                    s++;
                }

                if (s > valormax) {
                    valormax = s;
                }
            }

            final.push_back(valormax);
        }else {
        
        for (int i=0 ; i<final.size() ; i++) {
            cout << final[i] << endl;
        }
        break;

        }
        

    }
}