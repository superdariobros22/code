#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> vec;
    vector<vector<string>> vec2;

    while (true) {
        int a;
        cin >> a;
        if (a==0) {
            break;
        }
        vector<int> tiempo;
        vector<string> serie;
        for (int i=0 ; i<a ; i++) {
            int x;
            cin >> x;
            tiempo.push_back(x);
            string y;
            cin >> y;
            serie.push_back(y);
        }
        vec.push_back(tiempo);
        vec2.push_back(serie);

    }

    for(int i=0 ; i<vec.size() ; i++) {
        
    }
}