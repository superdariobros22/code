#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, max=0, max2=0;
    string maxs, maxs2;
    cin >> n;
    cin.ignore();
    for (int i=0 ; i<n ; i++) {
        vector<string> v;
        string s, w;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> w) {
            v.push_back(w);
        }
        int x = stoi(v[v.size()-1]);
        if (x>max) {
            max=x;
            maxs=s;
        } else if (x==max) {
            max2=x;
            maxs2=s;
        }
    }
    if (max==max2) {
        cout << "Hay que seguir discutiendolo (o echar a alguien del grupo)";
    } else {
        int i=0;
        while(maxs[i]!=':') {
            cout << maxs[i];
            i++;
        }
    }
    
    return 0;
}