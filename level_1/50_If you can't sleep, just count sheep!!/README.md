# If you can't sleep, just count sheep!!

## Instructions

If you can't sleep, just count sheeps!!

Task:
Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". Input will always be valid, i.e. no negative integers.

## solution

```
#include <string>

std::string countSheep(int number) {
  std::string x = "";
  
  for(int i = 1; i <= number; i++){
    x += std::to_string(i) + " sheep..."; 
  }
  
  return x;
}
```
