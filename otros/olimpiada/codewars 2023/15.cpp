#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> vec;
    vector<bool> vec2;
    for (int i=0 ; i<n ; i++) {
        vector<int> v1, v2;
        int c=0;
        string nombre;
        cin >> nombre;
        vec.push_back(nombre);
        while(true) {
            string x;
            cin >> x;
            if (x=="#") {
                break;
            }
            c++;
            v1.push_back(stoi(x));
        }
        for (int j=0 ; j<c ; j++) {
            int x;
            cin >> x;
            v2.push_back(x);
        }
        bool b=true;
        for(size_t j=0 ; j<v1.size() ; j++) {
            if (v1[j]!=v2[v2.size()-j-1]) {
                b=false;
            }
        }
        vec2.push_back(b);
    }
    for (size_t i=0 ; i<vec.size() ; i++) {
        cout << vec[i];
        if (vec2[i]==true) {
            cout << " has same number of steps for both faces" << endl;
        } else {
            cout << " has NOT same number of steps for both faces" << endl;
        }
    }
}


