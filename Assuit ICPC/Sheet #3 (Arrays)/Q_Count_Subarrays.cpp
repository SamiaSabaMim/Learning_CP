#include <iostream>
#include <vector>
using namespace std;

int countNonDecreasing(vector<int>& a) {
    int n = a.size();
    int count = 1;
    int total = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            count++;
        } else {
            total += count * (count + 1) / 2;
            count = 1;
        }
    }

    total += count * (count + 1) / 2;
    return total;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << countNonDecreasing(a) << endl;
    }
    return 0;
}
