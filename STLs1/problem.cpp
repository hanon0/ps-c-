#include <bits/stdc++.h>
using namespace std;

void pairh() {
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end());

    for (int i = n-1 ; i >=0; i--) {
        cout << v[i].second << " " << v[i].first << "\n";
    }
}

int main() {
    pairh();
    return 0;
}