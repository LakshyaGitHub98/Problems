#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    if(n>=1 and n<=10 )cout<<"LOWER DOUBLE"<<endl;
	    else if(n>=11 and n<=15)cout<<"LOWER SINGLE"<<endl;
	    else if(n>=16 and n<=25)cout<<"UPPER DOUBLE"<<endl;
	    else if(n>=26 and n<=30) cout<<"UPPER SINGLE"<<endl;
	    else cout<<"WRONG CHOICE"<<endl;
	    
	}
	return 0;
}
