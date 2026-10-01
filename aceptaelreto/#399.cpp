#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> final;
    vector<vector<int>> final2;
    while(true) {
        vector<int> perlas;
        while(true) {
            int y;
            cin >> y;
            if (y==0) {
                break;
            }
            perlas.push_back(y);
        }
        if (perlas.size()==1) {
            
        } else {
            sort(perlas.begin(), perlas.end());
            for (int i=0 ; i<perlas.size() ; i+=2) {
                if (perlas[i]!=perlas[i+1]) {
                    final.push_back("NO");
                }
            }
        }    
    }
}