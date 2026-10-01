#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> fin;

    for (int i=0 ; i<a ; i++) {
        int x, y, z;
        cin >> x >> y;
        vector<int> vec;
        while(true) {
            cin >> z;
            if (z==-1) {
                break;
            } else {
                vec.push_back(z);
            }
        }

        int d=x-y, count=0, veces=0;

        for (int j=0 ; j<vec.size() ; j++) {
            count=count+vec[j];
            if (count>d) {
                veces++;
                count=0;
            }
        }

        fin.push_back(veces);
        
    }

    for (int i=0 ; i<a ; i++) {
        cout << fin[i] << endl;
    }
}