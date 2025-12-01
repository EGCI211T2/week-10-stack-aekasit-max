#include<iostream>
using namespace std;
#include "stack.h"
#include <cstdlib>

int main(int argc, char **argv){
    Stack s;

    for(int i=1; i<argc; i++){
        if(argv[i][0] == 'x')
            s.pop();
        else
            s.push( atoi(argv[i]) );
    }

    return 0;
}
