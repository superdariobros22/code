#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> final;

    for (int i=0 ; i<a ; i++) {
        int x;
        cin >> x;
        vector<int> vec;
        for (int j=0 ; j<x ; j++) {
            int y;
            cin >> y;
            vec.push_back(y);
        }
        sort(vec.begin(), vec.end());

        int z=(vec[x-1])-(vec[0])-1-(x-2);
        final.push_back(z);

    }

    for (int i=0 ; i<a ; i++) {
        cout << final[i] << endl;
    }
}