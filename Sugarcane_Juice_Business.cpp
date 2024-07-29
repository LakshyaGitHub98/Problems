#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,ex,pr;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        n=50*n;
        ex=(0.2*n)+(0.3*n)+(0.2*n);
        pr=n-ex;
        cout<<pr<<endl;
    }
    return 0;
}
