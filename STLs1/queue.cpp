#include <bits/stdc++.h>
using namespace std;

void pairh() {
 queue<int> q;
 q.push(5);
 q.push(10);
 q.push(1);

 while(!q.empty()){
    cout<< q.front() <<endl;
    q.pop();
 }
}

int main() {
    pairh();
    return 0;
}