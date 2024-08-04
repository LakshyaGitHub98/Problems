#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int A, X, B, Y;
        cin >> A >> X >> B >> Y;

        // Calculate the speeds (speed = distance / time)
        double speedAlice = static_cast<double>(A) / X;
        double speedBob = static_cast<double>(B) / Y;

        if (speedAlice > speedBob) {
            cout << "Alice\n";
        } else if (speedBob > speedAlice) {
            cout << "Bob\n";
        } else {
            cout << "Equal\n";
        }
    }

    return 0;
}
