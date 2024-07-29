#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,odd=0,ev=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n%2==0)ev++;
        else odd++;
    }
    if(odd>=ev) cout<<"NOT READY"<<endl;
    else cout<<"READY FOR BATTLE"<<endl;
    return 0;
}
