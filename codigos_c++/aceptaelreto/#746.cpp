#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    while(true) {
        int n, d;
        cin >> n >> d;
        if (n==0 && d==0) {
            break;
        }
        vector<int> gnd;
        for (int i=0 ; i<n ; i++) {
            int g;
            cin >> g;
            gnd.push_back(g);
        }

        vector<int> gnd2 = gnd;
        int parejas=0;

        while(true) {
            for (int j=1 ; j<gnd2.size() ; j++) {
                if (d-gnd2[0]==gnd2[j]) {
                    parejas++;
                    gnd2.erase(gnd2.begin());
                    gnd2.erase(gnd2.begin()+(j-1));
                    break;
                }
                if (j==gnd2.size()-1) {
                    gnd2.erase(gnd2.begin());
                }
            }
            if (gnd2.size()<2) {
                break;
            }
        }
        vec.push_back(parejas);
    }

    for (int i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}