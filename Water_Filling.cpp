#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>z;
        x=x+y+z;
        if(x>=2)cout<<"Not now"<<endl;
        else  cout<<"Water filling time"<<endl;
    }
    return 0;
}