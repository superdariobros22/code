#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    vector<string> vec;
    while(cin >> a) {
        cin >> b >> c >> d >> e >> f;
        float r, h;
        r=(a-b)*f/a;
        h=d*e/c;
        if ((h/(h+r))>0.1) {
            vec.push_back("SUSPENDE");
        } else {
            vec.push_back("APRUEBA");
        }
    }
    for (size_t i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}