#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec (n);

    for (int i=0 ; i<n ; i++) {
        int a;
        cin >> a;
        vector<int> v;
        while(true) {
            int y;
            cin >> y;
            if (y==0) {
                break;
            }
            v.push_back(y);
        }
        int l=0;
        for (int j=0 ; j<v.size() ; j++) {
            if((l+v[j])>=a*8) {
                vec[i]=j+1;
                break;
            } else {
                vec[i]=0;
            }
            l+=v[j];
        }
    }
    for (int i=0 ; i<n ; i++) {
        if (vec[i]==0) {
            cout << "SIGAMOS RECICLANDO" << endl;
        } else {
            cout << vec[i] << endl;
        }
    }
}