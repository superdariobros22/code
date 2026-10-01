#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, a=0, b=0, c=0;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        int x;
        cin >> x;
        if (x>=3&&x<=6) a++;
        else if (x>=7&&x<=17) b++;
        else if (x>=18) c++;
    }
    cout << "PARQUE BOLAS: " << a << endl << "PARQUE ATRACCIONES: " << b << endl << "EXPERIENCIA CULINARIA: " << c;
    
    return 0;
}