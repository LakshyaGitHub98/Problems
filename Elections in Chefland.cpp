#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>x;
	    int arr[n],count=0;
	    for(int j=0;j<n;j++)
	    {   cin>>arr[j];
	        if(arr[j]>=x)count++;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
