#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,r1,r2,r3,r4;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>r1>>r2>>r3>>r4;
        if((r1+r2+r3+r4)==0) cout<<"IN"<<endl;
        else cout<<"OUT"<<endl;
    }
    return 0;
}
