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
    cin >> n;
    for (int i=1 ; i<=n ; i++) {
        if (i%3==0&&i%5==0) cout << "FizzBuzz" << endl;
        else if (i%3==0) cout << "Fizz" << endl;
        else if (i%5==0) cout << "Buzz" << endl;
        else cout << i << endl;
    }
    
    return 0;
}