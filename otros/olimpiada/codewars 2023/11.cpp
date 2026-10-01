#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
    string s;
    int n;
    cin >> s >> n;
    for (int i=0 ; i<n ; i++) {
        string x;
        cin >> x;
        int g=x.length(), gg=s.length(), c=0;
        for (int i=0 ; i<g ; i++) {
            for (int j=0 ; j<gg ; j++) {
                if (x[i]==s[j] || tolower(x[i])==s[j]) {
                    c++;
                    break;
                }
            }
        }
        if (c==g) {
            v.push_back("Yes");
        } else {
            v.push_back("No");
        }
    }

    for (int i=0 ; i<n-1 ; i++) {
        cout << v[i] << endl;
    }
    cout << v[n-1];

}