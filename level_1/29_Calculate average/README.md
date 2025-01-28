# Calculate average

## Instructions
Write a function which calculates the average of the numbers in a given array.

Note: Empty arrays should return 0.

## solution

```
#include <vector>

double calcAverage(const std::vector<int>& values){
  double r = 0;
  
  for(int i = 0; i < values.size(); i++){
    r += values[i];
  }
  
  return r / values.size();
}
```
