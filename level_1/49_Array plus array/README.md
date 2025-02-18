# Array plus array

## Instructions

I'm new to coding and now I want to get the sum of two arrays... Actually the sum of all their elements. I'll appreciate for your help.

P.S. Each array includes only integer numbers. Output is a number too.

## solution

```
#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int x = 0;
  
  for(int i = 0; i < a.size(); i++) x += a[i];
  for(int i = 0; i < b.size(); i++) x += b[i];
  
  return x;
}
```
