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

void merge(vector<int> &v, int i, int m, int j) {
    vector<int> v1, v2;
    for (int k=i ; k<=m ; k++) {
        v1.pb(v[k]);
    }
    for (int k=m+1 ; k<=j ; k++) {
        v2.pb(v[k]);
    }
    int i1=0, i2=0;
    for (int k=i ; k<=j ; k++) {
        if (i1<=m-i&&i2<=j-m-1) {
            if (v1[i1]<=v2[i2]) {
                v[k]=v1[i1];
                i1++;
            } 
            else {
                v[k]=v2[i2];
                i2++;
            }
        } else if (i1<=m-i) {
            v[k]=v1[i1];
                i1++;
        } else {
            v[k]=v2[i2];
                i2++;
        }
    }
}

void mergesort(vector<int> &v, int i, int j) {
    if (i>=j) return;
    int m=(i+j)/2;
    mergesort(v,i,m);
    mergesort(v,m+1,j);
    merge(v,i,m,j);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    int n, x;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        cin >> x;
        v.pb(x);
    }
    mergesort(v, 0, n-1);
    for (int i=0 ; i<n ; i++) {
        cout << v[i] << ' ';
    }
    
    return 0;
}