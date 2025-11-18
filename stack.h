
#ifndef stack_h
#define stack_h
#include "node.h"
#include <iostream>

using namespace std;
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
            // Left missing for exercises…
            new_node -> set_next(top);
            top = new_node;
            size++;
   }
 
         // Left missing for exercises…
    
}

int Stack::pop(){
        NodePtr t=top;
        int value;
        value=t->get_value();
    // Left missing part for exercises
        --size;
        delete t;
        return value;
	//be careful of the empty stack!!!
    

    cout<<"Empty stack"<<endl;
    return 0;
}
Stack::Stack(){
    //initialize stack
    top = NULL;
    size = 0;
    
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    cout<<"Clear the stack"<<endl;
    int n = size;
    while(n>0)
    pop();
    n--;
    
}


#endif
