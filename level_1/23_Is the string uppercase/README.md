# Is the string uppercase?

## Instructions

Is the string uppercase?
Create a method to see whether the string is ALL CAPS.

## solution

```
#include <string>

bool is_uppercase(const std::string &s) {
  int a = 0;
 for(int i = 0; i < s.size(); i++)
   {
   if(islower(s[i]))
    return false;
    }  
   return true;
}
```
