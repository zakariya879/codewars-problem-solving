# Square(n) Sum

## Instructions

Complete the square sum function so that it squares each number passed into it and then sums the results together.

## solution

```
#include <vector>

int square_sum(const std::vector<int>& numbers)
{
  int a = 0;
    for(int i = 0; i < numbers.size(); i++)
      {
      a += numbers[i] * numbers[i];
    }
  return a;
}
```
