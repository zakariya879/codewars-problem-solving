# All Star Code Challenge #18

## Instructions

Create a function that accepts a string and a single character, and returns an integer of the count of occurrences the 2nd argument is found in the first one.

If no occurrences can be found, a count of 0 should be returned.

## solution

```
#include <string>

unsigned int strCount(const std::string& word, char letter){
  int a = 0;
  for(int i = 0; i < word.size(); i++)
    {
    if(word[i] == letter)
      a++;
  }
  return a;
}
```
