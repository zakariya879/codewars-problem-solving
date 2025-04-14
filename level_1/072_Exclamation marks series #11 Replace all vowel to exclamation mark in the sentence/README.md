# <8 kyu> Exclamation marks series #11: Replace all vowel to exclamation mark in the sentence

## Instructions

Description:
Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.

Examples
"Hi!" --> "H!!"
"!Hi! Hi!" --> "!H!! H!!"
"aeiou" --> "!!!!!"
"ABCDE" --> "!BCD!"

## solution

```
#include <regex>

using namespace std;

string replace(const string &s)
{
  regex pattern("[aeiouAEIOU]");
  return regex_replace(s, pattern, "!");
}
```
