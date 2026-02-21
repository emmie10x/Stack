#include<iostream>
#include<stack>

using namespace std;

class Stack{
    public:
        int* arr;
        int size;
        int top;

        Stack(int capacity){
            arr = new int[capacity]();
            size = capacity;
            top = -1;
        }

        push(int val){
            if(top == size-1){
                // stack already full h, agar insert kroge to overflow ho jayega
                cout << "Stack Overflow" << endl;
            }
            else{
                // normal case -> stack me khali jagah h
                top++;
                arr[top] = val;
            }
        }

        pop(){
            // stack is empty
            if(top == -1){
                cout << "Stack Underflow" << endl;
            }
            else{
                arr[top] = -1;
                top--;
            }
        }

        int getSize(){
            return top+1;
        }

        bool isEmpty(){
            if(top == -1){
                return true; 
            }
            else{
                return false;
            }
        }

        int getTop(){
            if(top == -1){
                cout << "There is no element at top, as stack is empty";
                return -1;
            }
            else{
                // normal case
                return arr[top];
            }
        }

        void print(){
            cout << "Printing Stack" << endl;
            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }cout << endl;
        }

};

int main(){
    // creating a stack of initial size 5;
    Stack s(5);
    s.print();
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);
    s.print();
    s.push(50);
    s.print();
    s.push(60);
    s.print();

    cout << s.getTop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;

    s.pop();
    s.print();

    return 0;
}

/*
Stack can be implemented using array by maintaining a top pointer. Push increments top, pop decrements top. Overflow occurs when top == size-1 and underflow when top == -1."
Q: Why not use dynamic resizing?
Because this is fixed-size stack. To support dynamic resizing, we can use vector or implement dynamic array manually.
*/