#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,x,d;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>x;
        if(x>=n)cout<<0<<endl;
        else 
        {
            d=n-x;
            if(d%4==0)cout<<(d/4)<<endl;
            else cout<<((d/4)+1)<<endl;
            
        }
    }
    return 0;
}
