#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;


#define entf          cout << endl
#define ent           cout << "\n"
#define REP(i, a, b)  for (int i = a; i < b; ++i)
#define REPV(i, a, b) for (int i = a; i >= b; --i)
#define MOD           1000000007

#define TESTCASES false



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    double a;
    string x, b, c, y;
    cin >> a >> x;
    cin.ignore();
    getline(cin,b);
    cin >> c;
    cin.ignore();
    getline(cin,y);
    
    cout << b << ": " << setprecision(3) << fixed << a << endl << c;

    return 0;
}