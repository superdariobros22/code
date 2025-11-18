#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    vector<string> vec;
    cin >> a;
    for (int i=0 ; i<a ; i++) {
        int n, h=0, m=0, hm=0;
        cin >> n;
        for (int j=0 ; j<n ; j++) {
            string s;
            cin >> s;
            if (s=="HH") {
                h++;
            } else if (s=="MM") {
                m++;
            } else {
                hm++;
            }
        }
        if (h!=m) {
            vec.push_back("IMPOSIBLE");
        } else {
            vec.push_back("POSIBLE");

        }
        
    }
    for (size_t i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}