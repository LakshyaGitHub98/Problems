#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,s,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>s>>x>>y>>z;
        if(x+y+z>s)
        {
            if(y+z<=s || x+z<=s) cout<<1<<endl;
            else cout<<2<<endl;
            
        }
        else cout<<0<<"\n";
    }
    return 0;
}
