# <8 kyu> Sort and Star

## Instructions

You will be given a list of strings. You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) and then return the first value.

The returned value must be a string, and have "***" between each of its letters.

You should not remove or add elements from/to the array.

## solution

```
#include <vector>
#include <string>
#include <algorithm>

std::string twoSort(std::vector<std::string> s)
{
  sort(s.begin(), s.end());
  std::string x = s.at(0);
  
  for(int i = 1; i < x.size(); i += 4){
    x.insert(i, "***");
  }
  
  return x;
}
```
