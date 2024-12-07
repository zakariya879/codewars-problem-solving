# Convert a String to a Number!

## Instructions 

We need a function that can transform a string into a number. What ways of achieving this do you know?

Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

## solution

```
#include <string>

int string_to_number(const std::string& s) {
  return stoi(s);
}
```
