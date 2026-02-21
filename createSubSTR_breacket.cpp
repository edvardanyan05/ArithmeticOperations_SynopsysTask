// In this file, I implemented logic that takes a pointer to an opening parenthesis
// in the source string and returns the substring contained inside the parentheses.
#include "main.hpp"

string createSubSTR_bracket(const char *p){
    string substr;
    int bracket_count = 1;
    for(size_t i = 1 ; !bracket_count == 0 ; i++){
        substr.push_back(p[i]);
        if(p[i + 1] == '(')
            bracket_count++;
        if(p[i + 1] == ')')
            bracket_count--;
    }
    return substr;
}