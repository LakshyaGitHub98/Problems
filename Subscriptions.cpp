#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N,x,n,rem,t;
	cin>>N;
	for(int i=0;i<N;i++)
	{
	    cin>>n>>x;
	    if(n<6) cout<<x<<endl;
	    else if(n>6 and n%6==0)
	    {
	        t=n/6;
	        cout<<(t*x)<<endl;
	    }
	    else
	    {
	        t=n/6;
	        rem=n%6;
	        if(rem!=0) t++;
	        cout<<(t*x)<<endl;
	        
	    }
	}
    return 0;
}
