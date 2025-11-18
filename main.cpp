#include<iostream>
using namespace std;

#include "stack.h"

int main(int argc, char **argv){
    Stack s;
    s.push(5);//5
      s.push(1);//1 5
      s.push(7);//7 1 5
      s.pop();//1 5
      s.push(6);//6 1 5
      s.pop();//1 5

 /*
  Exercise 1*/
    
    int i;
    for(i=1;i<argc;i++){
        if(argv[i][0] == 'x')  s.pop();
        else s.push(atoi(argv[i]));
    }
     



   return 0;
}
