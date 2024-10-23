//Revathi oc
//23070123105
#include <iostream>
using namespace std;
#define SIZE 5   
#define ERROR -9999

class Stack {
    int top, ar[SIZE];  
public:
    Stack() {
        top = -1;       
    }
    void push(int);
    int pop();
    int peak();
    void disp();
};

void Stack::push(int num) {
    if (top == SIZE - 1) {
        cout << "STACK OVERFLOW: Stack is full" << endl;
        return;
    } else {
        ar[++top] = num;   
        cout << "Pushed " << num << " to stack." << endl;
    }
}

int Stack::pop() {
    if (top == -1) {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return ERROR;
    } else {
        cout << "Popped " << ar[top] << " from stack." << endl;
        return ar[top--];   
    }
}

int Stack::peak() {
    if (top == -1) {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return ERROR;
    } else {
        return ar[top];     
    }
}

void Stack::disp() {
    if (top == -1) {
        cout << "STACK UNDERFLOW: Stack is empty" << endl;
        return;
    } else {
        cout << "Stack contents: ";
        for (int i = 0; i <= top; i++) {
            cout << ar[i] << "  ";   
        }
        cout << endl;
    }
}

int main() {
    Stack s1;
    s1.push(7);      
    s1.push(10);     
    s1.push(4);      

    int val = s1.pop();  
    cout << "Popped value: " << val << endl; 
    int top = s1.peak(); 
    cout << "Current top: " << top << endl;

    s1.disp();       

    return 0;
}
