#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x1,y1,x2,y2,p;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        p=max(abs(x1-x2),abs(y1-y2));
        cout<<p<<endl;
    }
    return 0;
}
