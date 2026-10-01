#include<bits/stdc++.h>
 using namespace  std;
 
 class reactangle {
     public:
     int width ;
     int length ;
     
     
 };
int main(){

reactangle* obj = new reactangle ;
cin >> obj->length >> obj->width ;
cout<< obj->length <<" "<< obj->width;
delete obj ;


 return 0;
}