# <8 kyu> Reversed Strings

## Instructions

Complete the solution so that it reverses the string passed into it.

## solution

```
#include <string>
using namespace std ; 

string reverseString (string str )
{
  string r = "";
  
  for(int i = str.length() - 1; i >= 0; i--) 
    {
    r += str[i];
  }
  return r ;
}
```
