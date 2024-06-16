#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> vec(a);
    for (int i=0 ; i<a ; i++) {
        int b;
        cin >> b;
        int res=b/100;
        vec[i]=res;
    }
    for (int i=0 ; i<a ; i++) {
        cout << vec[i] << endl;
    }
}