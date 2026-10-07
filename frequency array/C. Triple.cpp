#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        
        vector<int> arr(n);
        // Using vector instead of raw fixed array for frequency to handle elements up to n securely
        vector<int> freq(n + 1, 0); 
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        
        bool found = false;
        for(int i = 0; i < n; i++) {
            if(freq[arr[i]] >= 3) {
                cout << arr[i] << "\n";
                found = true;
                break;
            }
        }
        
        if(!found) {
            cout << -1 << "\n";
        }
    }
    return 0;
}