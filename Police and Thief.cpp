#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,count=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        cout<<abs(y-x)<<endl;
    }
    return 0;
}
