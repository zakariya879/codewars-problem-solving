# <7 kyu> Even numbers in an array

## Instructions

Given an array of numbers, return a new array of length number containing the last even numbers from the original array (in the same order). The original array will be not empty and will contain at least "number" even numbers.

For example:

([1, 2, 3, 4, 5, 6, 7, 8, 9], 3) => [4, 6, 8]
([-22, 5, 3, 11, 26, -6, -7, -8, -9, -8, 26], 2) => [-8, 26]
([6, -25, 3, 7, 5, 5, 7, -3, 23], 1) => [6]

## solution

```
#include <vector>
#include <algorithm>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
  std::vector<int> sum;
  
  for(int i = arr.size() - 1; i >= 0; i--){
    if(arr[i] % 2 == 0) sum.push_back(arr[i]);
    
    if(sum.size() == n) break;
  }
  reverse(sum.begin(), sum.end());
  
  return sum;
}
```
