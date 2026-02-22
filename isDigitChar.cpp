// In this file, I implemented logic to check whether a character passed as an argument is numeric.
#include "main.hpp"

bool isDigit(char c){
    if (c >= '0' && c <= '9')
        return true;
    return false;
}