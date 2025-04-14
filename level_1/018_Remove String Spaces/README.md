# <8 kyu> Remove String Spaces

## Instructions

Write a function that removes the spaces from the string, then return the resultant string.

## solution

```
#include <string>

std::string no_space(const std::string& x)
{
    std::string a;
  for(int i = 0; i < x.size(); i++)
    {
    if(x[i] == ' ')
      continue;
    
    a += x[i];
  }
  return a;
}
```
