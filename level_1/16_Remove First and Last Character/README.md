# Remove First and Last Character

## Instructions

It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string. You're given one parameter, the original string. You don't have to worry about strings with less than two characters.

## solution

```
#include <string>

using namespace std; 

string sliceString (string str )
{
 string a;
  for(int i = 1; i < str.size() - 1; i++)
    {
    a += str[i];
  }
  return a;
}
```
