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

    int n;
    
    while(cin >> n) {
        double a, r, h, l, pi;
        a=n*280;
        pi=acos(-1);
        r=sqrt(a/pi);
        l=2*r*cos(pi/6);
        h=r+r*sin(pi/6);
        cout << setprecision(5) << fixed << l*h/2 << endl;
        cout << setprecision(5) << fixed <<  3*l << endl << endl;

    }
    
    return 0;
}