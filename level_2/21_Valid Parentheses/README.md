# <7 kyu> Valid Parentheses

## Instructions

Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. The function should return true if the string is valid, and false if it's invalid.

Examples
"()"              =>  true
")(()))"          =>  false
"("               =>  false
"(())((()())())"  =>  true
Constraints
0 <= length of input <= 100

All inputs will be strings, consisting only of characters ( and ).
Empty strings are considered balanced (and therefore valid), and will be tested.
For languages with mutable strings, the inputs should not be mutated.

## solution

```
#include <string>

bool validParentheses(const std::string& str) {
  int temp = 0;
  
  for(int i = 0; i < str.size(); i++){
    if(str[i] == '(') temp++;
    else temp--;
    
    if(temp < 0) return 0;
  }
  
  return !temp;
}
```
