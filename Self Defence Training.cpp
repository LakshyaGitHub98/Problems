#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        int women[n];
        for(int i=0;i<n;i++)
        {
            cin>>women[i];
        }
        for(int i=0;i<n;i++)
        {
            if(women[i]>=10 and women[i]<=60)count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
