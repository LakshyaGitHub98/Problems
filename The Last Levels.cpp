#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,z,tt(0);
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        int completeSets = x / 3;
        int remainingLevels = x % 3;
        tt = (completeSets * (3 * y + z)) + (remainingLevels * y);
        cout<< tt<< endl;
    }
    return 0;
}
