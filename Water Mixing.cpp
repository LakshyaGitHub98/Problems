#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,x,y,delta_T;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y;
        delta_T= b - a;
        if (delta_T > 0)
        {
            if(x>= delta_T)cout << "YES\n";
            else cout<<"NO\n";
        } 
        else if(delta_T<0)
        {
            delta_T=abs(delta_T);
            if(y>=delta_T) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else 
        {
            cout << "YES\n";
        }

        
        
    }
    return 0;
}
