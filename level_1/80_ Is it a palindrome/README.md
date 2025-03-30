# <8 kyu> Is it a palindrome?

## Instructions

Write a function that checks if a given string (case insensitive) is a palindrome.

A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar.

## solution

```
#include <string>

bool isPalindrom (const std::string& str)
{
  for(int i = 0; i < str.size(); i++){
    if(tolower(str[i]) != tolower(str[str.size() - 1 - i]))
      return false;
  }
    
  return true;
}
```
