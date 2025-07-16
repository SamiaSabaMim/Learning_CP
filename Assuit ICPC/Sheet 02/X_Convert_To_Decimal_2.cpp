#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin >> T;

    for (int t = 0; t < T; t++) {
        cin >> N;
        int ones = 0;
        for (int x = N; x > 0; x = x / 2) {
            if (x % 2 == 1)
                ones++;
        }
        int result = 0;
        for (int i = 0; i < ones; i++) {
            result = result * 2 + 1;
        }

        cout << result << endl;
    }

    return 0;
}
