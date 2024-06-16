#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> final;
    vector<string> final2;
    while(true) {
        int a;
        cin >> a;
        if (a==0) {
            break;
        }
        vector<int> vec;

        long long int tot=0;

        for (int i=0 ; i<a ; i++) {
            int x;
            cin >> x;
            tot+=x;
            vec.push_back(x);
        }

        int res;
        string res2;

        for (int j=0 ; j<a-1 ; j++) {
            if(tot-vec[j]==vec[j]) {
                res=j+1;
                res2=="SI";
                break;
            } else {
                res2=="NO";
                tot=tot-vec[j];
            }
        }

        final.push_back(res);
        final2.push_back(res2);
    }

    int k=0;

    for (int i=0 ; i<final2.size() ; i++) {
        cout << final2[i];
        if (final2[i]=="SI") {
            cout << final[i-k];
        } else {
            k++;
        }
    }
}