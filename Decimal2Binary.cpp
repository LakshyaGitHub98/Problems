#include <bits/stdc++.h>
using namespace std;
vector<int> decToBinary(int n) {
    vector<int>decimal;
    if(n==0){
        decimal.push_back(0);
        return decimal;
    }
    if(n==1){
        decimal.push_back(1);
        return decimal;
    }
    while(n>0){
        if(n%2==0)decimal.push_back(0);
        else decimal.push_back(1);
        n=n/2;
    }
    reverse(decimal.begin(),decimal.end());
    return decimal;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    vector<int>dec=decToBinary(n);
    for(int i:dec){
        cout<<i<<" ";
    }
    return 0;
}
