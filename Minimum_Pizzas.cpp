#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,x,d,rem;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>x;
        d=(n*x)/4;
        rem=(n*x)%4;
        if(rem==0)cout<<d<<endl;
        else cout<<(d+1)<<endl;
        
    }
    return 0;
}
