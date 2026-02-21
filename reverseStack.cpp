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

/*
Why printStack takes stack by value?
void printStack(stack<int> s)
Because stack is passed by value
So original stack is not modified
If passed by reference → original stack would become empty.

Reverse Logic Summary
reverseStack:
    pop top
    reverse remaining stack
    insert popped element at bottom
Time Complexity
Let n = number of elements
insertAtBottom → O(n)
reverseStack → calls insertAtBottom n times
Total Time Complexity → O(n²)
Space Complexity → O(n) (recursion stack)

"To reverse a stack without using extra data structures, we use recursion. We remove the top element, recursively reverse the remaining stack, and then insert the removed element at the bottom using another recursive function."
*/