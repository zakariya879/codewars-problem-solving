# <7 kyu> Alternate capitalization

## Instructions

Given a string, capitalize the letters that occupy even indexes and odd indexes separately, and return as shown below. Index 0 will be considered even.

For example, capitalize("abcdef") = ['AbCdEf', 'aBcDeF']. See test cases for more examples.

The input will be a lowercase string with no spaces.

## solution

```
#include <string>
#include <utility>

std::pair<std::string, std::string> capitalize(const std::string &s){
  std::string c1;
  std::string c2;
  
  for(int i = 0; i < s.size(); i++){
    if(i % 2 == 0){
      c1 += toupper(s[i]);
      c2 += s[i];
    }
    
    else{
      c1 += s[i];
      c2 += toupper(s[i]);
    }
  }
  
  return {c1, c2};
}
```
