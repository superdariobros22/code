#include<bits/stdc++.h>
using namespace std;

int main() {
    
        vector<int> re (0);
        while(true) {
            string s;
            getline(cin, s);
            if (s=="#") {
                break;
            }
            stringstream ss(s);
            int x, y, z;
            ss >> x >> y >> z;
            int res=0;
            
            for (int i=7 ; i>=0 ; i--) {
                int c=0;
                if (x/pow(2,i)>=1) {
                    c++;
                    x=x-pow(2,i);
                }
                if (y/pow(2,i)>=1) {
                    c++;
                    y=y-pow(2,i);
                }
                if (z/pow(2,i)>=1) {
                    c++;
                    z=z-pow(2,i);
                }
                if (c>1) {
                    res+=pow(2,i);
                }
            }
            
            re.push_back(res);
            
        }
        
        for (int i=0 ; i<re.size() ; i++) {
            cout << re[i] << endl;
        }
}