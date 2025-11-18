#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v;
    for (int i=0 ; i<n ; i++) {
        int a, b;
        char c;
        cin >> a >> c >> b;
        if (a>=b) v.push_back("BIEN");
        else v.push_back("MAL");
    }
    for (int i=0 ; i<n ; i++) {
        cout << v[i] << endl;
    }
}