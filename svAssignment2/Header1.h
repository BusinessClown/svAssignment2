#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Stack {

private:
    // The vector to store stack elements
    vector<int> v;

public:
    // Function to push an element onto the stack
    void push(int data)
    {
        v.push_back(data);
        cout << "Pushed: " << data << endl;
    }

    // Function to pop an element from the stack
    int pop(int sr3l)
    {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop.\n";
            return -1;
        }
        
        v.pop_back();
        cout << "\nPopped: " << sr3l << endl;
        return sr3l;
    }

    // Function to get the top element of the stack without
    // removing it
    int top()
    {
        if (isEmpty()) {
            cout << "Stack is empty. No top element.\n";
            return -1;
        }
        return v.back();
    }

    // Function to check if the stack is empty
    bool isEmpty() { return v.empty(); }
};