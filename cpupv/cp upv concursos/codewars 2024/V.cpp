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
    
    int x, y, z, i, j, X, Y, Z;
    cin >> x >> y >> z;
    i=1; 
    j=z;
    while(i!=j) {
        int mid=(i+j)/2;
        string s;
        cout << "? 1 1 " << i << ' ' << x << ' ' << y << ' ' << mid << endl;
        cin >> s;
        if (s=="SI") j=mid;
        else i=mid+1;
    }
    Z=i;
    i=1;
    j=y;
     while(i!=j) {
        int mid=(i+j)/2;
        string s;
        cout << "? 1 " << i << ' ' << Z << ' ' << x << ' ' << mid << ' ' << Z << endl;
        cin >> s;
        if (s=="SI") j=mid;
        else i=mid+1;
    }
    Y=i;
    i=1;
    j=x;
     while(i!=j) {
        int mid=(i+j)/2;
        string s;
        cout << "? " << i << ' ' << Y << ' ' << Z << ' ' << mid << ' ' << Y << ' ' << Z << endl;
        cin >> s;
        if (s=="SI") j=mid;
        else i=mid+1;
    }
    X=i;
    cout << "! " << X << ' ' << Y << ' ' << Z << endl;
    
    return 0;
}