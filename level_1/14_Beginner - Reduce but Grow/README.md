# Beginner - Reduce but Grow

## Instructions

Given a non-empty array of integers, return the result of multiplying the values together in order. 

## solution

```
#include <vector>
int grow(std::vector<int> nums) {
  int a = 1;
  for(int i = 0; i < nums.size(); i++)
    {
    a *= nums[i];
  }
  return a;
}
```
