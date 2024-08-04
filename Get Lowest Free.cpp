#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a<b)// a<b
        {
            if(a<c)s=a;//a<b<c
            else s=c;
        }
        else 
        {
            if(b<c)s=b;
            else s=c;
        }
        cout<<((a+b+c)-s)<<endl;
    }
    return 0;
}
