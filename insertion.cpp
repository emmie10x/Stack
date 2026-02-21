#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int val){
    // Base case
    if(s.empty()){
        s.push(val);
        return;
    }

    // Store top element
    int topElement = s.top();
    s.pop();

    // Recursive call
    insertAtBottom(s, val);

    // Backtracking step
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

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

/*
Since stack does not allow direct bottom insertion, we use recursion. We pop all elements until stack becomes empty, insert the value, then push all elements back using backtracking
*/