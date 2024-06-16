#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<string> final;

    for (int i=0 ; i<a ; i++) {
        vector<int> v1 (6);
        vector<int> v2 (6);
        for (int j=0 ; j<6 ; j++) {
            int h;
            cin >> h;
            v1[j]=h;
        } for (int g=0 ; g<6 ; g++) {
            int h;
            cin >> h;
            v2[g]=h;
        }
        int c=0;
        c=v1[0]+v2[0];
        string m;
        for (int k=1 ; k<6 ; k++) {
            if((v1[k]+v2[k])!=c) {
                m="NO";
                break;
            } else {
                m="SI";
            }

            c=v1[k]+v2[k];

        }
        final.push_back(m);
    }

    for (int i=0 ; i<a ; i++) {
        cout << final[i] << endl;
    }
}