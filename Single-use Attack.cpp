#include <bits/stdc++.h>
using namespace std;

int main() {
    int  n,t,h,x,y;
    cin>>t;
    while(t--)
    {
        cin>>h>>x>>y;
        if (y >= h)
        {
            cout << "1\n";
        } 
        else
        {
            n = (h - y + x - 1) / x;
            cout << n + 1 << "\n"; 
        }
    }
    return 0;
}
