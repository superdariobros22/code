#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> vec;
    int n, posx=0, posy=0, x, y;
    string s, s2;
    cin >> n;
    
    for (int i=0 ; i<n ; i++) {
        cin >> x >> y;
        if (y!=posy) {
            if (y>posy) {
                s2=to_string(y-posy);
                s="Walk "+s2+" steps north";
                vec.push_back(s);
            } else {
                s2=to_string(posy-y);
                s="Walk "+s2+" steps south";
                vec.push_back(s);
            }
        }
        if (x!=posx) {
            if (x>posx) {
                s2=to_string(x-posx);
                s="Walk "+s2+" steps east";
                vec.push_back(s);
            } else {
                s2=to_string(posx-x);
                s="Walk "+s2+" steps west";
                vec.push_back(s);
            }
        }
        
        posx=x;
        posy=y;
    }
    
    for (size_t i=0 ; i<vec.size() ; i++) {
        cout << vec[i] << endl;
    }
}