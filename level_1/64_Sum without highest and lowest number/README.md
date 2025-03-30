# <8 kyu> Sum without highest and lowest number

## Instructions
Output
Past Solutions
Task
Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation.

Example
{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6
Input validation
If an empty value ( null, None, Nothing, nil etc. ) is given instead of an array, or the given array is an empty list or a list with only 1 element, return 0.

## solution

```
#include<vector>
using namespace std;

int sum(vector<int> numbers)
{
  int x = 0;
  sort(numbers.begin(), numbers.end());
  
  if(numbers.size() == 0) return 0;
  for(int i = 1; i < numbers.size() - 1; i++){
    x += numbers.at(i);
  }
  
  return x;
}
```
