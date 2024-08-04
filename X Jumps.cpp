#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x%y==0)cout<<(x/y)<<endl;
        else
        {
            if(x>y)cout<<((x/y)+(x%y))<<endl;
            else cout<<x<<endl;
        }
    }
    return 0;
}
