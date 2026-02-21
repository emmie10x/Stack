#include<bits/stdc++.h>

using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    void push1(int val){
        // if stack available, then push
        // else stack overflow
        if(top2-top1 == 1){
            //stack overflow
            cout << "Stack Overflow" << endl;
        }
        else{
            top1++;
            arr[top1] = val;
        }
    }

    void push2(int val){
        if(top2-top1 == 1){
            cout << "Stack Overflow" << endl;
        }
        else{
            top2--;
            arr[top2] = val;
        }
    }

    void pop1(){
        // if element is available then pop
        // if stack is empty then don't pop
        if(top1 == -1){
            // stack1 is empty
            cout << "Stack Underflow" << endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2(){
        if(top2 == size){
            // stack is empty, no element to overflow 
            cout << "Stack Underflow" << endl;
        }
        else{
            arr[top2] = 0;
            top2++;
        }
    }

    void print(){
        cout << "top1:" << top1 << endl;
        cout << "top2:" << top2 << endl;

        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }cout << endl;  
    }
};

int main(){
    Stack s(5);
    s.push1(1);
    s.push1(2);
    s.push2(3);
    s.push2(4);
    s.print();

    s.pop1();
    s.pop2();
    s.print();

    return 0;
}

/*
We use a single array to implement two stacks to optimize space. One stack grows from left to right and the other grows from right to left. Overflow occurs when top1 and top2 become adjacent (top2 - top1 == 1). All operations run in O(1) time complexity. This approach efficiently utilizes the array space, allowing both stacks to grow dynamically without wasting memory.
*/