#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,n,y;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>x>>y;
	    for(int j=0;j<=n;j++)
	    {
	        if((x*j)==y)
	        {
	            cout<<"YES"<<endl;
	            break;
	        }
	        if(j==n and (x*j)!=y)
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	    
	}
	return 0;
}
