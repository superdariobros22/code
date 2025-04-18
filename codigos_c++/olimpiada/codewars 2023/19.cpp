#include<bits/stdc++.h>
using namespace std;

int main() {
    double distance, degrees;
    cin >> distance >> degrees;
    degrees=(degrees*3.1416)/180;
    double maxspeed, minspeed, maxtime, mintime, maxdistance, mindistance;
    mindistance=distance-3+(0.0427/2);
    maxdistance=distance+3-(0.0427/2);
    mintime=sqrt((2*mindistance*sin(degrees))/(9.8*cos(degrees)));
    maxtime=sqrt((2*maxdistance*sin(degrees))/(9.8*cos(degrees)));
    minspeed=mindistance/(cos(degrees)*mintime);
    maxspeed=maxdistance/(cos(degrees)*maxtime);
    cout << "The maximum speed is: " << fixed << setprecision(2) << maxspeed << " m/s." << endl;
    cout << "The minimum speed is: " << fixed << setprecision(2) << minspeed << " m/s.";
}