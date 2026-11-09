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

bool prime(int n){
    //true = prime
    //false = otro
    for(int i = 2; i <= (n+1)/2; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        int x, imp=0, suma=0;
        cin >> x;
        bool b=true;
        if (x%2!=0 && x%3!=0 && x%5!=0) b=false;
        vector<int> v;
        while(x!=0) {
            v.pb(x%10);
            suma+=x%10;
            if ((x%10)%2!=0) imp++;
            x/=10;
        }
        if (imp!=3) b=false;
        if (prime(suma)==false) b=false;
        int reverse=0;
        for (int j=v.size()-1 ; j>=0 ; j--) {
            reverse+=pow(10,j)*v[v.size()-j-1];
        }
        if (reverse%7==0) b=false;
        if (b==true) cout << "Si :)" << endl;
        else cout << "No :(" << endl;

    }
    
    return 0;
}