#include<bits/stdc++.h>
using namespace  std;

void pairh(){
int n ; cin >> n ; 
pair <int , int > arr[n];
for(int i =0 ; i<n ; i++){
    cin >> arr[i].first >> arr[i].second ;
}
cout<< endl;
sort(arr , arr+n);
for (int i = 0; i < n; i++) {
cout<< arr[i].first << " "<< arr[i].second << endl;
}


}
int main(){
   pairh();
    return 0 ;
}