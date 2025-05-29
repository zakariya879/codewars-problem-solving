# <7 kyu> Digitize

## Instructions

Given a non-negative integer, return an array / a list of the individual digits in order.

Examples:

123 => {1,2,3}

1 => {1}

8675309 => {8,6,7,5,3,0,9}

## solution

```
#include <vector>

std::vector<int> digitize(int n) {
  std::string str = std::to_string(n);
  std::vector<int> output;
  
  for(int digit : str){
    output.push_back(digit - '0');
  }
  
  return output;
}
```
