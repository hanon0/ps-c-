#include<bits/stdc++.h>
using namespace  std;

void pairh(){
   pair <int , int> p1={1,5};
   pair p2 = {5 ,6};
   pair p3 (p2);
   pair p4 = make_pair(1, 10);

cout<< p1.first <<" "<< p1.second <<endl;
cout<< p2.first<< " " << p2.second <<endl ;
cout<< p3.first<< " " << p3.second <<endl;
cout<< p4.first<< " " << p4.second <<endl;

}
int main(){
   pairh();
    return 0 ;
}