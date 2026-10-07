#include<bits/stdc++.h>
using namespace  std;

int main()
{
int arr[] = {-8 , 4, 2 , 5 ,1 ,5, -5, 4};
int freq[20] ={ };
int shift = -1 * (*min_element(arr, arr+8) );
for(int i=0 ; i<8 ; i++){
    freq[arr[i]+shift]++;
}
long long a ; cin >> a;
while(a--){
    int x; cin >>x ;
    cout<< freq[x+shift] << endl;
}
 return 0;
}