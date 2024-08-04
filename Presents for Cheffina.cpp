#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=n-(n/5);
        cout<<n<<endl;
    }
    return 0;
}
