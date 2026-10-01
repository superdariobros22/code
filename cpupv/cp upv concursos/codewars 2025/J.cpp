#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v1,v2;
    int a, b, c1=0, c2=0;
    cin >> a;
    for (int i=0 ; i<a ; i++) {
        string x;
        cin >> x;
        v1.push_back(x);
    }
    cin >> b;
    for (int i=0 ; i<b ; i++) {
        string x;
        cin >> x;
        v2.push_back(x);
    }
    string x;
    while(cin >> x) {
        if (find(v1.begin(), v1.end(), x)!=v1.end()) {
            c1++;
        }
        if (find(v2.begin(), v2.end(), x)!=v2.end()) {
            c2++;
        }
    }
    if (c1>c2) cout << "Certified Gangster, by the way";
    else cout << "Invierte en memeCoin420";
}