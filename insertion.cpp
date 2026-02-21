#include<bits/stdc++.h>

using namespace std;

void insertAtBottom(stack<int> &s, int val){
    // base case
    if(s.empty()){
        // insert
        s.push(val);
        return;
    }
    // 1 case hm krenge, baki recursion krega
    int topElement = s.top();
    s.pop();

    // recursion
    insertAtBottom(s, val);

    // backtrack
    s.push(topElement);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int val = 30;

    insertAtBottom(s, val);

    // traverse
    while(!s.empty){
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
}