#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> final;

    for (int i=0 ; i<n ; i++) {
        int M, A, C;
        cin >> M >> A >> C;
        string x;
        cin >> x;

        for (int j=0 ; j<x.length() ; j++) {
            switch(x[j]) {
                case 'M': M--;
                break;
                case 'A': A--;
                break;
                case 'C': C--;
                break;
                case 'R': M-- && A--;
                break;
                case 'L': M-- && C--;
                break;
                case 'V': A-- && C--;
                break;
                case 'N': M-- && A-- && C--;
                break;
                
            }
        }
        final.push_back(M);
        final.push_back(A);
        final.push_back(C);
    }

    for (int i=0 ; i<final.size() ; i+=3) {
        if (final[i]<0 || final[i+1]<0 || final[i+2]<0) {
            cout << "NO" << endl;
        } else {
            cout << "SI" << ' ' << final[i] << ' ' << final[i+1] << ' ' << final[i+2] << endl;
        }
    }

    
}