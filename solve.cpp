// In this file, I implemented the main logic of the program.
// This serves as the core, where all functions are called to solve the task.
// The logic is as follows:
// 1. Take a valid input string, which may contain parentheses and various operators.
// 2. Convert that string into a simplified form containing only '+', '-' operators and numeric characters.
// 3. Evaluate the simplified string to compute the final result.
#include "main.hpp"

long long solve(const string &s){
    string bracketRemovedSTR;
    for(size_t i = 0; i < s.size() ; i++){
        if(s[i] == '('){
            cout << "here\n";
            long long res = solve(createSubSTR_bracket(&s[i]));
            cout << createSubSTR_bracket(&s[i]) << endl;
            int bracket_count = 1;
            while(bracket_count != 0){
                i++;
                if (s[i] == '(')    bracket_count++;
                if (s[i] == ')')    bracket_count--;
            }
            string str_res = toString(res);
            bracketRemovedSTR += str_res;
        }else{
            bracketRemovedSTR.push_back(s[i]);
        }
    }
    cout << bracketRemovedSTR << endl;
    create_simpleSTR(bracketRemovedSTR);
    return calculate_simpleSTR(bracketRemovedSTR);
}