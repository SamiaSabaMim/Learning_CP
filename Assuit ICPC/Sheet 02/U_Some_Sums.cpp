#include <iostream>
using namespace std;

int main() {
    int N, A, B, total = 0;
    cin >> N >> A >> B;

    for (int i = 1; i <= N; i++) {
        int sum = 0, x = i;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        if (sum >= A && sum <= B) {
            total += i;
        }
    }

    cout << total << endl;
    return 0;
}
