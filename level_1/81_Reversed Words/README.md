# <8 kyu> Reversed Words

## Instructions

Complete the solution so that it reverses all of the words within the string passed in.

Words are separated by exactly one space and there are no leading or trailing spaces.

Example(Input --> Output):
"The greatest victory is that which requires no battle" --> "battle no requires which that is victory greatest The"

## solution

```
#include <string>

std::string reverse_words(const std::string& str) {
  std::string str2 = "";
  std::string temp = "";
  
  for(int i = 0; i < str.size(); i++){
    if(str[i] == ' '){
      str2 = temp + " " + str2;
      temp = "";
    }
      
    else{
     temp += str[i];
    }
  }
  
  str2 = temp + " " + str2;
  str2.pop_back();
  
  return str2;
}
```
