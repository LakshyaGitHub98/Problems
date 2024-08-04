#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y,ma,mb;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int scoreAB = (500 - (x * 2)) + (1000 - ((x + y) * 4));
        int scoreBA = (1000 - (y * 4)) + (500 - ((x + y) * 2));
        int answer = max(scoreAB, scoreBA);
        cout << answer << endl;

    }
    return 0;
}
