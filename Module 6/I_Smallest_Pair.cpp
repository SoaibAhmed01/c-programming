#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSmallestSum(vector<int>& arr) {
    int n = arr.size();
    int smallestSum = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j] + j - i;
            smallestSum = min(smallestSum, sum);
        }
    }

    return smallestSum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int smallestSum = findSmallestSum(A);
        cout << smallestSum << endl;
    }

    return 0;
}
