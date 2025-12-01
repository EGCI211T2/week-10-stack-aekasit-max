#include<iostream>
#include<cstring>
using namespace std;

#include "stack.h"

int main(int argc, char **argv){

    for(int i=1; i<argc; i++){
        Stack s;
        int ok = 1;
        char* str = argv[i];

        for(int j=0; j<strlen(str); j++){
            char c = str[j];

            if(c=='[' || c=='{'){
                s.push(c);
            }
            else if(c==']'){
                if(s.empty() || s.pop() != '[')
                    ok = 0;
            }
            else if(c=='}'){
                if(s.empty() || s.pop() != '{')
                    ok = 0;
            }
        }

        if(!s.empty())
            ok = 0;

        cout << str << " => ";
        if(ok == 1)
            cout << "Correct\n";
        else
            cout << "Incorrect\n";
    }

    return 0;
}
