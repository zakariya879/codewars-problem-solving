# <7 kyu> Sum of integers in string

## Instructions

Your task in this kata is to implement a function that calculates the sum of the integers inside a string. For example, in the string "The30quick20brown10f0x1203jumps914ov3r1349the102l4zy dog", the sum of the integers is 3635.

Note: only positive integers will be tested.

## solution

```
#include <string>
 
int sumOfIntegers (const std::string& str) {
  int sum = 0;
  int current_number = 0;
  
  for(int i = 0; i < str.size(); i++){
    if(isdigit(str[i])){
      current_number = current_number * 10 + str[i] - '0';
    }
    
    else{
      sum += current_number;
      current_number = 0;
    }
  }
  sum += current_number;
  
  return sum;
}
```
