#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,k,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>k;
        if((k/x)>n)cout<<n<<endl;
        else cout<<(k/x)<<endl;
    }    
    return 0;
}
