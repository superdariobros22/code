#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> W, H, WQ, HQ;
    for (int i=0 ; i<n ; i++) {
        int w, h, q;
        cin >> w >> h >> q;
        for (int j=0 ; j<q ; j++) {
            int t, wq, hq, pw=(w-1)*2, ph=(h-1)*2;
            cin >> t;
            W.push_back(w);
            H.push_back(h);
            if ((t%pw)<w) WQ.push_back(t%pw);
            else WQ.push_back(pw-(t%pw));
            if ((t%ph)<h) HQ.push_back((ph/2)-(t%ph));
            else HQ.push_back((t%ph)-(ph/2));
        }
    }
    for (int i=0 ; i<W.size() ; i++) {
        for (int j=0 ; j<H[i] ; j++) {
            for (int k=0 ; k<W[i] ; k++) {
                if (j==HQ[i]&&k==WQ[i]) cout << '*';
                else cout << '.';
            }
            cout << endl;
        }
    }
    
    return 0;
}