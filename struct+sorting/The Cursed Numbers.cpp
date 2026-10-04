#include<bits/stdc++.h>
using namespace  std;
struct dragon{
    int x ,y;
};
bool cmp(dragon a , dragon b){
    return a.x < b.x;
}

const int N = 1e3+10;
int main()
{
    int n ,t ;
    cin >> n >> t ;
    dragon a[N];
        for(int i =0 ; i<t ; i++){
        cin >> a[i].x >> a[i].y;
        }
        sort(a , a+t , cmp);
        for(int i=0;i<t;i++){
            if(a[i].x >= n){
                cout<< "NO" << endl;
                return 0;
            }
            else{
              n += a[i].y;
            }
    }
    cout << "YES" << endl;
   


return 0;
}
