#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int main() {
    vector<vector<int>> vec;
    while(true) {
        int superh;
        cin >> superh;
        if (superh==0) {
            break;
        }
        vector<int> potencia;
        vector<int> rival;
        vector<char> signo;

        for (int i=0 ; i<superh ; i++) {
            int a;
            cin >> a;
            potencia.push_back(a);
        } for (int i=0 ; i<superh ; i++) {
            string str;
            cin >> str;
            signo.push_back(str[0]);
            rival.push_back(str[1] - '0');
        }

        while(potencia.size()>1) {
            vector<int> vec2;
            for(int i=0 ; i<potencia.size() ; i++) {
                for (int j=1 ; j<potencia.size() ; j++) {
                    if (signo[i]== '<') {
                        if (potencia[j] < rival[i]) {
                            if (signo[j] == '<') {
                                if (potencia[i] < rival[j]) {
                                    vec2.push_back(i);
                                    vec2.push_back(j);
                                    potencia.erase(potencia.begin()+i);
                                    potencia.erase(potencia.begin()+j);
                                    rival.erase(rival.begin()+i);
                                    rival.erase(rival.begin()+j);
                                    signo.erase(signo.begin()+i);
                                    signo.erase(signo.begin()+j);
                                    break;
                                }
                            }
                            if (signo[j] == '>') {
                                if (potencia[i] > rival[j]) {
                                    vec2.push_back(i);
                                    vec2.push_back(j);
                                    potencia.erase(potencia.begin()+i);
                                    potencia.erase(potencia.begin()+j);
                                    rival.erase(rival.begin()+i);
                                    rival.erase(rival.begin()+j);
                                    signo.erase(signo.begin()+i);
                                    signo.erase(signo.begin()+j);
                                    break;
                                }
                            }
                            if (signo[j] == '=') {
                                if (potencia[i] = rival[j]) {
                                    vec2.push_back(i);
                                    vec2.push_back(j);
                                    potencia.erase(potencia.begin()+i);
                                    potencia.erase(potencia.begin()+j);
                                    rival.erase(rival.begin()+i);
                                    rival.erase(rival.begin()+j);
                                    signo.erase(signo.begin()+i);
                                    signo.erase(signo.begin()+j);
                                    break;
                                }
                            }
                        }
                    }
                    if (j==potencia.size()-1) {
                        potencia.erase(potencia.begin()+i);
                        rival.erase(rival.begin()+i);
                        signo.erase(signo.begin()+i);
                    } 
                } 
            }
        }

    }
}
