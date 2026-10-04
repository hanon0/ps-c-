#include<bits/stdc++.h>
using namespace  std;

int main()
{
int n ,m ;
cin >> n >> m ;
int a[102];
for(int i=0 ; i<n ; i++){
    cin >> a[i];
    a[i] = ceil(a[i]/(double)m);
}
int res = n;
int nm = INT_MIN;
for(int i=0 ; i<n ; i++){
if(nm <= a[i] ) nm = a[i], res = i+1;
}
cout<< res << endl;

return 0;
}
