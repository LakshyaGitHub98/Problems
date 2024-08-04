#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,count;
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if((arr[i]+k)%7==0)count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
