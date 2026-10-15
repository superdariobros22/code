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
    
    int n, maxc;
    while(true) {
        cin >> n;
        if (n==0) break;
        vector<int> calorias(n), vitaminas(n);
        for (int i=0 ; i<n ; i++) {
            cin >> calorias[i];
        }
        for (int i=0 ; i<n ; i++) {
            cin >> vitaminas[i];
        }
        cin >> maxc;
        int i=0, j=0, sumac=calorias[0], sumav=vitaminas[0], maxv=0;
        while(true) {
            if(sumac<=maxc) {
                if (sumav>maxv) maxv=sumav;
                j++;
                if (j==n) break;
                sumac+=calorias[j];
                sumav+=vitaminas[j];
            } else {
                i++;
                if (i==n) break;
                sumac-=calorias[i-1];
                sumav-=vitaminas[i-1];
                if (i>j) {
                    j++;
                    sumac+=calorias[j];
                    sumav+=vitaminas[j];
                }
            }
        }
        cout << maxv << endl;


    }
    
    return 0;
}