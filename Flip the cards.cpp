    #include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x,y;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>x;
	    y=n-x;
	    y=min(x,y);
	    cout<<y<<endl;
	}
	return 0;
}
