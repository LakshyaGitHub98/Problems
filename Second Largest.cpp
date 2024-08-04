#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c,max;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b)
        {
            if(a>c)
            {
                if(b>c)   max=b;//b is 2---a>b>c
                else max=c;//a>c>b
            }    
            else max=a;//a is 2 
        }
        else //b is > a---b>a
        {
            if(b>c)//---b is
            {
                if(a>c) max=a;//b is
                else max=c;
            }    
            else max=b;//c is
        }
        cout<<max<<endl;
    }
    return 0;
}
