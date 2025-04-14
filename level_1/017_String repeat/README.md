# <8 kyu> String repeat

## Instructions

Write a function that accepts an integer n and a string s as parameters, and returns a string of s repeated exactly n times.

## solution

```
#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string a;
  for(int i = 1; i <= repeat; i++)
    {
    a += str;
  }
  return a;
}
```
