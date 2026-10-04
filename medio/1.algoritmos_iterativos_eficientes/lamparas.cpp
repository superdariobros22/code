#include "bits/stdc++.h"

using namespace std;

#define all(a) a.begin(), a.end()
#define ll long long
#define db double
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define pii pair<int, int>

const ll MOD = 1e9 + 7;
const ll MAX = 1e9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int h, n;
    while(true) {
        cin >> h >> n;
        if (h==0&&n==0) break;
        vector<int> v(n);

        for (int i=0 ; i<n ; i++) {
            cin >> v[i];
        }
        int alt=0, i=0, j=n-1;
        sort(all(v));
        while(i!=j) {
            if (v[i]+v[j]>=h) {
                if (v[i]+v[j]<alt||alt==0) alt=v[i]+v[j];
                j--;
            } else {
                i++;
            }
        }
        cout << alt << endl;
    }
    

    return 0;
}