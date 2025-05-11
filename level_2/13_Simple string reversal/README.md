# <7 kyu> Simple string reversal

## Instructions

In this Kata, we are going to reverse a string while maintaining the spaces (if any) in their original place.

For example:

"our code" => "edo cruo"
-- Normal reversal without spaces is "edocruo". 
-- However, there is a space at index 3, so the string becomes "edo cruo"

"your code rocks" => "skco redo cruoy". 
"codewars" => "srawedoc"
More examples in the test cases. All input will be lower case letters and in some cases spaces.

## solution

```
#include <string>
#include <algorithm>
#include <vector>

std::string solve(std::string s){
    std::vector<int> space_positions;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            space_positions.push_back(i);
        }
    }
  
  s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
  std::reverse(s.begin(), s.end());
  
  for(auto position : space_positions){
    s.insert(s.begin() + position, ' ');
  }
  
  return s;
}
```
