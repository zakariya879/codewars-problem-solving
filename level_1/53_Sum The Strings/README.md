# <8 kyu> Sum The Strings

## Instructions

Create a function that takes 2 integers in form of a string as an input, and outputs the sum (also as a string):

Example: (Input1, Input2 -->Output)

"4",  "5" --> "9"
"34", "5" --> "39"
"", "" --> "0"
"2", "" --> "2"
"-5", "3" --> "-2"

## solution

```
#include <string>

std::string sum_str(const std::string& a, const std::string& b) {
    return std::to_string(stoi(a == "" ? "0" : a) + stoi(b == "" ? "0" : b));
}
```
