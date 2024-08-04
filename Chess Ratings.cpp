#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,rdiff;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        rdiff=y-x;
        if(rdiff==0)cout<<0<<endl;
        else if(rdiff<8)cout<<1<<endl;
        else
        {
            if(rdiff%8==0)cout<<(rdiff/8)<<endl;
            else cout<<((rdiff/8)+1)<<endl;
        }
    }    
    return 0;
}
