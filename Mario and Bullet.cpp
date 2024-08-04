#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        int min_time;
        min_time=y/x;
        if(min_time <= z)cout<<(z-min_time)<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
