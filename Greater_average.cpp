#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    float  n,a,c,b,av;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        av=(a+b)/2;
        if(av>c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
