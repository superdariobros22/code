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

int camino(int p1, int p2, vector<string>&v, int n, int k) {
    bool b=false;
    int x, max=0;
    vector<string> w=v;
    w[p1][p2]='.';
    if (v[p1][p2]=='C') return k;
    if (p1>0&&v[p1-1][p2]!='.') {
        x= camino(p1-1,p2,w,n,k+1);
        if (x>max) max=x;
        b=true;
    } 
    if (p1<n-1&&v[p1+1][p2]!='.') {
        x= camino(p1+1,p2,w,n,k+1);
        if (x>max) max=x;
        b=true;
    }
    if (p2>0&&v[p1][p2-1]!='.') {
        x= camino(p1,p2-1,w,n,k+1);
        if (x>max) max=x;
        b=true;
    }
    if (p2<n-1&&v[p1][p2+1]!='.') {
        x= camino(p1,p2+1,w,n,k+1);
        if (x>max) max=x;
        b=true;
    }
    if(b==false) return -1;
    else return max;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, p1=0, p2=0, k=0;
    cin >> n;
    vector<string> v(n);
    for (int i=0 ; i<n ; i++) {
        string x;
        cin >> x;
        v[i]=x;
        if (x.find("R")!=string::npos) {
            p1=i;
            p2=x.find("R");
        }
    }
    v[p1][p2]='.';
    cout << camino(p1,p2,v,n,k);
    
    return 0;
}