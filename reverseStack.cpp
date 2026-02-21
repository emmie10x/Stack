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

void reverseStack(stack<int> &s){
    // base case
    if(s.empty()){
        return;
    }
    // 1 case hm krenge, baki recursion krega
    int topElement = s.top();
    s.pop();

    // recursion
    reverseStack(s);

    // backtrack
    insertAtBottom(s, topElement);
}

void printStack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    } cout << endl;
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Original Stack: ";
    printStack(s);

    reverseStack(s);

    cout << "Reversed Stack: ";
    printStack(s);
}
