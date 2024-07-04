#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> vec;
    while(true) {
        int a, b;
        cin >> a >> b;
        if (a==0 && b==0) {
            break;
        }
        int x=0;
        for (int i=a ;i<=b ; i++) {
            if(i%3==0) {
                x=x+i;
            }
        }
        vec.push_back(x);
    }
    for (int i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}