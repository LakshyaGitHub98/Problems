#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x>y)cout<<"CAR"<<endl;
        else if(y>x)cout<<"BIKE"<<endl;
        else cout<<"SAME"<<endl;
    }
    return 0;
}
