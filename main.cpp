#include<iostream>
#include<stack>

using namespace std;

int main(){
    // insertion
    stack<int> st;
    
    //creation
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    // size
    cout << st.size() << endl;

    // check empty or not
    cout << st.empty() << endl;

    // peak
    cout << st.top() << endl;

    // removal
    st.pop();
    cout << st.top() << endl;

    return 0;
}

/*
Stack is a linear data structure that follows LIFO principle. In C++, STL stack provides push, pop, top, size, and empty operations, all in constant time. The stack is implemented using a container (like vector or deque) and does not allow direct access to elements other than the top. It is commonly used for function call management, expression evaluation, and backtracking algorithms.
*/