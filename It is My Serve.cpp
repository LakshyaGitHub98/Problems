#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,p,q;
    cin>>t;
    while(t--)
    {
        cin>>p>>q;
        int sum=abs(p+q)/2;
        if(sum%2==0)cout<<"ALICE"<<endl;
        else cout<<"BOB"<<endl;
    }
    return 0;
}
