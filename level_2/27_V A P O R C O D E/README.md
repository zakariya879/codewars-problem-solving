# <7 kyu> V A P O R C O D E

## Instructions

ASC Week 1 Challenge 4 (Medium #1)

Write a function that converts any sentence into a V A P O R W A V E sentence. a V A P O R W A V E sentence converts all the letters into uppercase, and adds 2 spaces between each letter (or special character) to create this V A P O R W A V E effect.

Note that spaces should be ignored in this case.

Examples
"Lets go to the movies"       -->  "L  E  T  S  G  O  T  O  T  H  E  M  O  V  I  E  S"
"Why isn't my code working?"  -->  "W  H  Y  I  S  N  '  T  M  Y  C  O  D  E  W  O  R  K  I  N  G  ?"

## solution

```
#include<string>

std::string vaporcode(const std::string &str) {
  std::string output;
  
  for(auto c : str){
    if(c == ' ') continue;
    
    output += std::toupper(c);
    output += "  ";
  }
  
  return output.substr(0, output.size() - 2);
}
```
