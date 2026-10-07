#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    vector<int> freq(x + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 1; i <=x; i++) {
        cout << freq[i] << endl;
    }

    return 0;
}