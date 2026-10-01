#include<bits/stdc++.h>
using namespace  std;
struct star {
    int x , y , z ;
};
bool cmp(star a , star b){
    if(a.x>b.x)
    return true ;
    else 
    return false;
}
int main()
{

int n ;
cin >>n;
star arr[n];
for(int i =0 ; i<n ; i++){
    cin>> arr[i].x >> arr[i].y >> arr[i].z ;
}
for(int i =0 ; i<n ; i++){
    int cx =0 , cy=0, cz=0 ;
    for(int j =0 ; j<n ; j++){
    if (i==j)
    continue;
    if(arr[i].x == arr[j].x)
    cx++;
    if(arr[i].y == arr[j].y)
    cy++;
    if(arr[i].z == arr[j].z)
    cz++;
    
}
    cout << cx << " "<< cy << " " << cz <<endl;
}
cout << "---------------------\n" ;

sort (arr, arr+n , cmp);

for(int i =0 ; i<n ; i++){
    cout<< arr[i].x <<" " << arr[i].y<<" " << arr[i].z<<" " <<endl ;
}
 
 return 0;
}