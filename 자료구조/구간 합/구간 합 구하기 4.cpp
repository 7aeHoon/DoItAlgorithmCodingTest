#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, M, first, second;
    cin >> N >> M;

    vector<long long> arr(N+1, 0), pSum(N+1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        pSum[i] = pSum[i-1] + arr[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> first >> second;
        cout << pSum[second] - pSum[first-1] << '\n';
    }

    return 0;
}
