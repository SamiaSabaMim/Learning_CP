#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
     while (T--) {
        int N;
        cin >> N;
       vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
          vector<int> result;
        for (int i = 0; i < N; ++i) {
            int current_max = A[i];
            for (int j = i; j < N; ++j) {
                current_max = max(current_max, A[j]);
                result.push_back(current_max);
            }
        }
        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
