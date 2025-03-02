# Sum of positive

## Instructions
Output
Past Solutions
Task
You get an array of numbers, return the sum of all of the positives ones.

Example
[1, -4, 7, 12] => 1 + 7 + 12 = 20
Note
If there is nothing to sum, the sum is default to 0.

## solution

```
#include <vector>

int positive_sum (const std::vector<int> arr){
  int x = 0;
  
  for(int i = 0; i < arr.size(); i++){
    if(arr.at(i) > 0) x += arr.at(i);
  }
  
  return x;
}
```
