#include<bits/stdc++.h>
using namespace  std;

void binaryh(){

    int n , targit ;
    cin >> n >> targit;

    vector<int> v(n);
    for(int &x : v ) cin >> x;

    int l =0 , r = n-1 , mid , ans =-1 ;
    while(l<=r){
            mid = (l+r)/2;
            if (v[mid] == targit){
                ans = mid ;
                break;
            }
            else if (v[mid] > targit)
            {
                r = mid-1;
            }
            else if (v[mid] < targit){
                l = mid+1;
            }   
    }
        cout<< ans << "\n";

}
int main(){
   binaryh();
    return 0 ;
}