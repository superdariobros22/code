#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> vec;
    for (int i=0 ; i<n; i++) {
        bool b=true;
        vector<vector<int>> v1(9, vector<int>(9,1));
        vector<vector<int>> v2(9, vector<int>(9,1));
        vector<vector<int>> v3(9, vector<int>(9,1));
        for (int i=0 ; i<9 ; i++) {
            for (int j=0 ; j<9 ; j++) {
                int a;
                cin >> a;
                v1[i][a-1]--;
                v2[3*(i/3)+j/3][a-1]--;
                v3[j][a-1]--;
            }
        }
        for (int i=0 ; i<9 ; i++) {
            for (int j=0 ; j<9 ; j++) {
                if (v1[i][j]!=0 || v2[i][j]!=0 || v3[i][j]!=0) {
                    b=false;
                }
            }
        }
        if (b==true) {
            vec.push_back("SI");
        } else {
            vec.push_back("NO");
        }
    }
    for (size_t i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}