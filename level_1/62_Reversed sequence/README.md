# Reversed sequence

## Instructions

Build a function that returns an array of integers from n to 1 where n>0.

Example : n=5 --> [5,4,3,2,1]

## solution

```
#include <vector>

std::vector<int> reverseSeq(int n) {  
    std::vector<int> x;
  
  for(int i = n; i >= 1; i--) x.push_back(i);
  
  return x;
}
```
