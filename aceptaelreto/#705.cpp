#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> vec;
    for (int i=0 ; i<a ; i++) {
        int x;
        cin >> x;
        vector<int> vec2;
        for (int j=0 ; j<x ; j++) {
            int y;
            cin >> y;
            vec2.push_back(y);
        }

        vec2.insert(vec2.begin(), 0);

        int s=0;

        for (int j=0 ; j<vec2.size() ; j++) {
            if(vec2[j+1]-vec2[j]>s) {
                s=vec2[j+1]-vec2[j];
            }
        }
        int t=0;
        for (int j=0 ; j<vec2.size() ; j++) {
            if (vec2[j+1]-vec2[j]==s) {
                t++;
            }
        }

        int pot= s+t-1;
        vec.push_back(pot);
    }
    for ( int i=0 ; i<a ; i++) {
        cout << vec[i] << endl;
    }
}