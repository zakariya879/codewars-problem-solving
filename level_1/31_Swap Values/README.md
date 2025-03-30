# <8 kyu> Swap Values

## Instructions

I would like to be able to pass an array with two elements to my swapValues function to swap the values. However it appears that the values aren't changing.

Can you figure out what's wrong here?

## solution

```
#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
  std::swap( values.first, values.second);
  return values;
}
```

## another solution

```
#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
  int x = values.first;
  values.first = values.second;
  values.second = x;
  
  return values;
}
```
