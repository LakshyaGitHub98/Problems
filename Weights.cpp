#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;
        if (W == X || W == Y || W == Z) {
            cout << "YES\n";
        }
        else if (W == X + Y || W == X + Z || W == Y + Z) {
            cout << "YES\n";
        } 
        else if(W== X+Y+Z) cout<<"YES\n";
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
