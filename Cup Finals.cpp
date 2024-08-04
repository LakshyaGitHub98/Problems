#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,d,sd;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>d;
        sd=abs(x-y);
        if(sd<=d)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
