#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int minValue = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < minValue) {
            minValue = A[i];
        }
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == minValue) {
            count++;
        }
    }
    if (count % 2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}
