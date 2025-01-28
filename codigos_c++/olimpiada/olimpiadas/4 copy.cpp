#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    vector<int> veca;
    vector<int> vecb;
    for (int i=0 ; i<a ; i++) {
        int x;
        cin >> x;
        veca.push_back(x);
    }
    for (int i=0 ; i<b ; i++) {
        int x;
        cin >> x;
        vecb.push_back(x);
    }
    sort(veca.begin(), veca.end());
    sort(vecb.begin(), vecb.end());
    for(int i=0 ; i<a ; i++) {
        for (int j=0 ; j<b ; j++) {
            if (veca[i]==vecb[j] || veca[i]+1==vecb[j]) {
                veca.erase(veca.begin()+i);
                vecb.erase(veca.begin()+j);
            }
        }
    }
    cout << veca.size();

}