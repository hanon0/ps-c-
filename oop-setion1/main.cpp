#include<bits/stdc++.h>
 using namespace  std;
 
 class rect{
     public:
     int lenth;
     int width;
     int perimeter_clac(){
         return (lenth + width)*2 ;
     }
    //  defulled constractor
     rect (){
         cout<< "i'm called" ;
     }
     //prametrize
     rect (int l , int w){
         lenth =l ;
         width = w ;
     }
 };

int main(){

//   int x ; 
//   cin>> x;
//   rect arr[x] ;
//   for(int i =0 ; i<x ; i++){
//       cin>> arr[i].lenth >> arr[i].width ;
//   }
//   for(int i =0 ; i<x ; i++){
//       cout<< arr[i].perimeter_clac() <<endl;
//   }

rect hana ;
rect hana2(5,6);
cout<<endl<< hana2.lenth <<" " << hana2.width ;



 return 0;
}