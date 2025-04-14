# <8 kyu> Remove exclamation marks

## Instructions

Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

## solution

```
#include <string>

std::string removeExclamationMarks(std::string str){
  std::string a = "";
  for(int i = 0; i < str.length(); i++)
    {
    if(str[i] == '!')
      {
      continue;
    }
    a += str[i];
  }
  return a;
}
```
