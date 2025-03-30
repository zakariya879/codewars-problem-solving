# <8 kyu> MakeUpperCase

## Instructions

Write a function which converts the input string to uppercase.

## solution

```
#include <string>

std::string makeUpperCase (const std::string& input_str)
{
  std::string x;
  
  for(int i; i < input_str.size(); i++){
    x += toupper(input_str[i]);
  }
  
  return x;
}
```
