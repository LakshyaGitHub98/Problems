#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        int tr=1;
        for(int i=0;i<x;i++)
        {
            if(tr==0) tr=1;
            else if(tr==1)tr=2;
            else tr=0;
        }
        if(tr==1) cout<<"NORMAL"<<endl;
        else if(tr==2)cout<<"HUGE"<<endl;
        else cout<<"Small"<<endl;
    }    
    return 0;
}
