#include<bits/stdc++.h>
using namespace  std;

struct rect{
  int x1 , y1 , x2 , y2 , x3 ,y3 , x4 , y4  , id ;
  long long area;
};

bool cmp(rect a , rect b){
    if(a.area < b.area)
    return true;
    else 
    return false;
}

int main()
{
    int n ;
    cin >> n ;
    rect arr[n];
    for(int i=0 ; i<n ; i++){
        arr[i].id = i+1;
    cin >> arr[i].x1 >> arr[i].y1 >> arr[i].x2 >> arr[i].y2 >>
    arr[i].x3 >> arr[i].y3 >> arr[i].x4 >> arr[i].y4;
} 
long long x , y ;
for(int i =0 ; i<n ; i++){
    x =abs(arr[i].x1 - arr[i].x2 ); 
    y =abs( arr[i].y1 - arr[i].y3) ;
    arr[i].area = x*y ;
}

sort(arr , arr+n , cmp);

for(int i =0 ; i<n ; i++){
cout << arr[i].id  <<" " << arr[i].area << endl;
}


 return 0;
}