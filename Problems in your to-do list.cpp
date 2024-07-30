#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t,n,count;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    int arr[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	        if(arr[j]>=1000)count++;
	    }
	    cout<<count<<endl;
	    count=0;
	}
	return 0;
}
