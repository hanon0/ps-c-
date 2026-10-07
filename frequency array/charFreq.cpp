#include <bits/stdc++.h>
using namespace std;

int main() {
int n , t;
cin >>n >>t;
int arr[n];
for(int i =0 ; i<n ; i++){
    cin >> arr[i];
}

while(t--){
int l , r , x ;
cin >> l >> r  >>x;
int coun =0;
for(int i = l-1 ; i<r ; i++){
    if(arr[i] == x){
        coun++;
    }
}
cout << coun << endl;
}

    return 0;
}