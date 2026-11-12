#include<bits/stdc++.h>
using namespace std;

int main() {
    string uno ;
    getline(cin, uno);

    string dos ;
    getline(cin, dos);

    for(int i = 0; i < uno.length(); i++){
        for (int j=0 ; j<dos.length() ; j++) {
            if (uno[i]==dos[j]) {
                uno.erase(i,1);
                dos.erase(j,1);
                i--;
                break;
            }
        }
    }
    if (uno==""&&dos=="") cout << "YES";
    else cout << "NO";

}