# <8 kyu> You only need one - Beginner

## Instructions

You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

a can contain numbers or strings. x can be either.

Return true if the array contains the value, false if not.

## solution

```
#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    for(int i; i < seq.size(); i++){
      if(seq[i] == elem) return true;
    }
  
  return false;
}
```
