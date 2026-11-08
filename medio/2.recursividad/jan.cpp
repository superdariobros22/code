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

int opera(string &x, int &j) {
    char o=x[j];
    int op1, op2;
    bool ob1=0, ob2=0;
    string sim = "+-*/";
    j+=2;
    for (int i=0 ; i<4 ; i++) {
        if (x[j]==sim[i]) {
            ob1=true;
            op1=opera(x, j);
        }
    }
    if (ob1==false) {
        string si(1,x[j]);
        op1=stoi(si);
    }
    j+=2;
    for (int i=0 ; i<4 ; i++) {
        if (x[j]==sim[i]) {
            ob2=true;
            op2=opera(x, j);
        }
    }
    if (ob2==false) {
        string sd(1,x[j]);
        op2=stoi(sd);
    }
    switch(o) {
            case '+': return op1+op2;
            break;
            case '-': return op1-op2;
            break;
            case '*': return op1*op2;
            break;
            case '/': return op1/op2;
            break;
        }
        return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cin.ignore();
    for (int i=0 ; i<n ; i++) {
        string x;
        int j=0;
        getline(cin, x);
        cout << opera(x, j) << endl;

    }
    
    return 0;
}