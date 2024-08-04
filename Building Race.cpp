#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    double a,b,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y;
        a=a/x;
        b=b/y;
        if(a<b)cout<<"CHEF\n";
        else if(a>b)cout<<"CHEFINA\n";
        else cout<<"BOTH\n";
    }
    return 0;
}
