#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c,d,sum[4],max;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b>>c>>d;
	    sum[0]=a+d;
	    sum[1]=a+c;
	    sum[2]=b+c;
	    sum[3]=b+d;
	    max=sum[0];
	    for(int j=1;j<4;j++)
	    {
	        if(sum[j]>max)max=sum[j];
	    }
	    cout<<max<<endl;
	}
	return 0;
}
