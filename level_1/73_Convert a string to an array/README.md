# Convert a string to an array

## Instructions

Write a function to split a string and convert it into an array of words.

Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]

## solution

```
#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
  std::vector<std::string> x;
  std::string y = "";
  
  for(auto ch : s){
    if(ch != ' ') y += ch;
    
    else{
      x.push_back(y);
      y.clear();
    }
  }
  x.push_back(y);
  
  return x;
}
```
