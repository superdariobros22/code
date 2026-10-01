#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> vec = {"Admiral", "Captain", "Commander", "Lieutenant", "Officer"};
    vector<string> vec2;
    string sender, receiver, srank, rrank, message, time, text, part="";
    char type;
    int ranks, rankr;
    
    cin >> type;

    if (type!='S' && type!='R') {
        cout << "Invalid input.";
    } else {
        if (type=='S') {
            cin.ignore();
            getline(cin, sender);
            getline(cin, srank);
            getline(cin, receiver);
            getline(cin, rrank);
            getline(cin, message);
            getline(cin, time);
            auto its=find(vec.begin(), vec.end(), srank);
            auto itr=find(vec.begin(), vec.end(), rrank);
            if (its==vec.end() || itr==vec.end()) {
                cout << "Invalid input.";
            } else {
                ranks=distance(vec.begin(), its);
                rankr=distance(vec.begin(), itr);
                if (ranks<rankr) {
                    cout << "URGENT,";
                }
                cout << sender << ',' << srank << ',' << receiver << ',' << rrank << ',' << message << ',' << time;
            }
        } else {
            bool b=false;
            cin.ignore();
            getline(cin, text);
            if (text[0]=='U' && text[1]=='R') {
                b=true;
            }
            for (size_t i=0 ; i<text.length() ; i++) {
                if (b==true) {
                    i=7;
                    b=false;
                }
                
                if (text[i]==',') {
                    vec2.push_back(part);
                    part="";
                } else {
                    part.push_back(text[i]);
                }
            }vec2.push_back(part);
            auto its=find(vec.begin(), vec.end(), vec2[1]);
            auto itr=find(vec.begin(), vec.end(), vec2[3]);
            if (its==vec.end() || itr==vec.end()) {
                cout << "Invalid input.";
            } else {
                ranks=distance(vec.begin(), its);
                rankr=distance(vec.begin(), itr);
                if (ranks<rankr) {
                    cout << "<<< URGENT >>>" << endl;
                }
                cout << "From: " << vec2[0] << endl << "From rank: " << vec2[1] << endl << "To: " << vec2[2]
                << endl << "To rank: " << vec2[3]<< endl << "Content: " << vec2[4]<< endl << "Timestamp: " << vec2[5];
            }    
        }
    }
}