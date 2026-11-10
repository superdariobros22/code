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

bool primo(int n){
    for(int i = 2; i <= (n+1)/2; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, r;
    cin >> n;
    vector<int> frutas(n);
    for (int i=0 ; i<n ; i++) {
        cin >> frutas[i];
    }
    cin >> r;
    map<int, bool> primos;
    for (int i=0 ; i<r ; i++) {
        int pr, fi, suma=0;
        cin >> pr >> fi;
        for (int j=pr ; j<=fi ; j++) {
            auto it=primos.find(frutas[j-1]);
            if (it!=primos.end()) {
                if (primos[frutas[j-1]]==true) {
                    suma+=frutas[j-1];
                }
            } else {
                if (primo(frutas[j-1])==true) {
                    suma+=frutas[j-1];
                    primos[frutas[j-1]]=true;
                } else {
                    primos[frutas[j-1]]=false;
                }
            }
        }
        cout << suma << endl;

    }

    
    return 0;
}