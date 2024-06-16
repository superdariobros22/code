#include<bits/stdc++.h>
using namespace std;
bool primo(int a) {
    int s=0;
    for (int i=2 ; i<a ; i++) {
        if (a%i==0) {
            s++;
        }
    }
    if (s==0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int a;
    cin >> a;
    vector<int> vec;
    vector<vector<int>>vecnum;
    vector<string> vecletra;
    for (int i=0 ; i<a ; i++) {
        int x, y;
        cin >> x >> y;
        vec.push_back(y);
        if (y==0) {
            vector<int> primos={1};
            bool bol=primo(x);
            if (bol==true) {
                vecletra.push_back("SI");
                vecnum.push_back(primos);
            } else {
                vecletra.push_back("NO");
                vecnum.push_back(primos);
            }
        } else {
            vector<int> primos;
            int d=0, h=x+1;
            while (true) {
                if (d==y) {
                    break;
                }
                bool bol2=primo(h);
                if (bol2==true) {
                    primos.push_back(h);
                    d++;
                }
                h++;
            }
            vecnum.push_back(primos);
            vecletra.push_back("NO");
        }
    }
    for (int i=0 ; i<a ; i++) {
        if (vec[i]==0) {
            cout << vecletra[i] << endl;
        } else {
            for (int j=0 ; j<vecnum[i].size()-1 ; j++) {
                cout << vecnum[i][j] << ' ' ;
            } cout << vecnum[i][vecnum[i].size()-1] << endl;
        }
    }
}