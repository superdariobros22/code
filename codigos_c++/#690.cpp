#include<bits/stdc++.h>
using namespace std;

int main () {
    vector<int> result;
    while(true) {
        int a, b;
        cin >> a >> b;
        if (a==0 && b==0) {
            break;
        }
        char x;
        int contb=0, contp=0;
        for (int i=0 ; i<b ; i++) {
            for (int j=0 ; i<a ; j++) {
                cin >> x;
                if (x =='\\' || x == '/') {
                    contb++;
                } else if (x == '.') {
                    if (contb%2 == 1) {
                        contp++;
                    }
                }
            }
        }

        int u = contb/2 + contp;
        result.push_back(u);
    }

    for (int i=0 ; i< result.size() ; i++) {
        cout << result[i] << endl;
    }
}