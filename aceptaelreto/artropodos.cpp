#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<long long int> vec(a);
    for (int i=0 ; i<a ; i++) {
        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        long long int res= a1*6+a2*8+a3*10+a4*(a5*2);
        vec[i]=res;
    }
    for (int j=0 ; j<a ; j++) {
        cout << vec[j] << endl;
    }
}