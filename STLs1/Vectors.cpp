#include<bits/stdc++.h>
using namespace  std;



// void vectorf(){
// int arr[] ={ 1 , 4 , 9 };
// vector<int> v1={1 , 2, 3 ,4};
// vector<int> v2 = {1 , 3 , 3};
// if(v1>v2){
// for (int i = 0; i < v2.size() ; i++)
// {
//     cout << v2[i] << " ";
// }
// }
// else 
// cout<< "v2 > v1" ;

// }

//////// 2D array with vector////////
// void vectorf(){
//     vector <vector <int>> v(2, vector<int> (3));
// }

///////sort///////

// void vectorf(){
//     vector<int> v= {1 , 4 ,3, 1 , 0, 9, 6} ;
//     sort(v.begin() +2 , v.begin()+ 4);
//     for(int i =0 ; i<v.size() ; i++){
//         cout << v[i] <<" ";
//     }

// }

/// add /////
// void vectorf(){
//     vector<int> v= {1 , 4 ,3, 1 , 0, 9, 6} ;
//     v.push_back(2);

//     for(int i =0 ; i<v.size() ; i++){
//         cout << v[i] <<" ";
//     }

// }

///remove /////

void vectorf(){
    vector<int> v= {1 , 4 ,3, 1 , 0, 9, 6} ;
    // if(!v.empty()){
    // v.pop_back();
    // }
    v.erase(v.begin()+2 , v.begin()+4);
    sort(v.rbegin(), v.rend());
    for(int i =0 ; i<v.size() ; i++){
        cout << v[i] <<" ";
    }

}
/// rezise() بتضيف على حيب الى جه القوس,  assign (x , y) بتكريت vector جديد , clear() 

int main(){
   vectorf();
    return 0 ;
}