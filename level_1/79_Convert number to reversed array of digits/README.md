# Convert number to reversed array of digits

## Instructions

Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example (Input => Output):
35231 => [1,3,2,5,3]
0     => [0]

## solution

```
#include <vector>
#include <algorithm>

std::vector<int> digitize(unsigned long n){        
  std::vector<int> res;
  std::string st = std::to_string(n);
  reverse(st.begin(), st.end());
  
  for(int i = 0; i < st.size(); i++){
    res.push_back(st[i]-'0');
  }
  
  return res;
}
```
