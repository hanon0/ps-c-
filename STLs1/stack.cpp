#include <bits/stdc++.h>
using namespace std;

void pairh() {
    // stack<int> s;
    // s.push(5);
    // s.push(9);
    // s.push(2);
    
    // while(!s.empty()){
    //     cout<< s.top() <<endl;
    //     s.pop();
    // }

    stack<int> s1;
    string s; cin>> s;
    int n = s.length();
    for(int i=0 ; i<n ; i++){
        if(s[i] == '('){
            s1.push('(');
        }
        else {
        if(!s1.empty()){
            s1.pop();
        }
        else {
            cout<<"No" ;
            return ;
        }
    }


    }
    if(!s1.empty()){
        cout<<"No";
    }
    else cout<<"Yes";
}

int main() {
    pairh();
    return 0;
}