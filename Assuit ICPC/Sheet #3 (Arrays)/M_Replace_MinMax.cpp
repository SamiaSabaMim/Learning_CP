#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < a[minIndex]) minIndex = i;
        if (a[i] > a[maxIndex]) maxIndex = i;
    }
    swap(a[minIndex], a[maxIndex]);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}
