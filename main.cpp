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