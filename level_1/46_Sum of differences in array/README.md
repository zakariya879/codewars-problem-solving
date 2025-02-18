# Sum of differences in array

## Instructions

Your task is to sum the differences between consecutive pairs in the array in descending order.

Example
[2, 1, 10]  -->  9
In descending order: [10, 2, 1]

Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

## solution

```
#include <vector>
#include <algorithm>

using namespace std;

int sumOfDifferences(const std::vector<int>& arr){
  vector<int> v = arr;
  int result = 0;

  sort(v.rbegin(), v.rend());
  if (v.size() <= 1) {
    return 0;
  }
  
  for (int i=0; i < (int) v.size()-1; i++) {
    result += v[i] - v[i+1];
  }
  
  return result;
}
```
