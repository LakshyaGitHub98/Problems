#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A') s[i]='T';
            else if(s[i]=='T') s[i]='A';
            else if(s[i]=='C') s[i]='G';
            else s[i]='C';
            
        }
        for(int i=0;i<n;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
        
    }    
    return 0;
}