#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>x;
        if(x%n==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
