#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,arr[3],fs;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>arr[0]>>arr[1]>>arr[2];
	    fs=arr[0];
	    for(int j=1;j<3;j++)
	    {
	        if(arr[j]>fs)fs =arr[j];
	    }
	    cout<<fs<<endl;
	}
	return 0;
}
