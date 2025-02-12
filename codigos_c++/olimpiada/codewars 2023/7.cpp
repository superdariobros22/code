#include<bits/stdc++.h>
using namespace std;

int main() {
    string g;
    float a, b, c, d, e;
    cin >> g >> a >> b >> c >> d >> e;

    cout << "Red blood cells: ";
    if (g=="Male") {
        if (a<=4.3 or a>=5.9) {
            cout << "VISIT THE DOCTOR" << endl;
        } else {
            cout << "NORMAL" << endl;
        }
    } else {
        if (a<=3.5 or a>=5.5) {
            cout << "VISIT THE DOCTOR" << endl;
        } else {
            cout << "NORMAL" << endl;
        }
    }


    cout << "White blood cells: ";
    if (b<=4500 or b>=11000) {
        cout << "VISIT THE DOCTOR" << endl;
    } else {
        cout << "NORMAL" << endl;
    }


    cout << "Platelets: ";
    if (c<=150000 or c>=400000) {
        cout << "VISIT THE DOCTOR" << endl;
    } else {
        cout << "NORMAL" << endl;
    }


    cout << "Hemoglobin: ";
    if (g=="Male") {
        if (d<=13.5 or d>=17.5) {
            cout << "VISIT THE DOCTOR" << endl;
        } else {
            cout << "NORMAL" << endl;
        }
    } else {
        if (d<=12 or d>=16) {
            cout << "VISIT THE DOCTOR" << endl;
        } else {
            cout << "NORMAL" << endl;
        }
    }


    cout << "Hematocrit: ";
    if (g=="Male") {
        if (e<=41 or e>=53) {
            cout << "VISIT THE DOCTOR";
        } else {
            cout << "NORMAL";
        }
    } else {
        if (e<=36 or e>=46) {
            cout << "VISIT THE DOCTOR";
        } else {
            cout << "NORMAL";
        }
    }
}