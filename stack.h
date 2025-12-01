#ifndef stack_h
#define stack_h

#include "node.h"
#include <iostream>
using namespace std;

class Stack {
    NodePtr top;
    int size;

public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    int empty();
};

Stack::Stack(){
    top = NULL;
    size = 0;
}

int Stack::empty(){
    return top == NULL;
}

void Stack::push(int x){
    NodePtr new_node = new NODE(x);
    new_node->set_next(top);
    top = new_node;
    size++;
}

int Stack::pop(){
    if(empty()){
        cout << "Empty stack\n";
        return 0;
    }
    NodePtr t = top;
    int value = t->get_value();

    top = top->get_next();
    delete t;
    size--;
    return value;
}

Stack::~Stack(){
    while(!empty()){
        pop();
    }
    cout << "Clear the stack\n";
}

#endif
