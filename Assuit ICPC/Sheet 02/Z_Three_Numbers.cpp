#include <iostream>
using namespace std;

int main() {
    int K, S, count = 0;
    cin >> K >> S;

    for (int x = 0; x <= K; x++) {
        for (int y = 0; y <= K; y++) {
            int z = S - x - y;
            if (z >= 0 && z <= K) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}