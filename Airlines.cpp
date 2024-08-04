#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,n;
    cin>>t;
    while(t--)
    {
        cin>>x>>n;
        if((x*100)<n)
        {
            if(n%100==0) cout<<((n-(x*100))/100)<<endl;
            else cout<<((n-(x*100))/100)+1<<endl;
        }
        else cout<<0<<endl;
    }
    return 0;
}
