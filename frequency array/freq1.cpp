#include<bits/stdc++.h>
using namespace  std;

int main()
{
int arr[] = {-8 , 4, 2 , 0 ,1 ,3};
int freq[13] ={ };
int shift = -1 * (*min_element(arr, arr+6) );
for(int i=0 ; i<6 ; i++){
    freq[arr[i]+shift]++;
}
long long a ; cin >> a;
while(a--){
    int x; cin >>x ;
    cout<< freq[x+shift] << endl;
}
 return 0;
}