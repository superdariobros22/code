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

    int i1=1, i2=1, k=0;
    for (int i=0 ; i<1000 ; i++) {
        cout << (float)i2/i1 << endl;
        k=i2;
        i2+=i1;
        i1=k;
    }
}




