#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,rev=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    rev=0;
	    cin>>x;
	    while(x>0)
	    {
	        rev=(rev*10)+x%10;;
	        x=x/10;//14
	    }
	    cout<<rev<<endl;
	}
    return 0;
}
