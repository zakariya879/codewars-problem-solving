# <7 kyu> All Star Code Challenge #3

## Instructions

This Kata is intended as a small challenge for my students

Create a function that takes a string argument and returns that same string with all vowels removed (vowels are "a", "e", "i", "o", "u").

Example (Input --> Output)

"drake" --> "drk"
"aeiou" --> ""
remove_vowels("drake") // => "drk"
remove_vowels("aeiou") // => ""

## solution

```
#include <string>

std::string remove_vowels(const std::string& str) {
  std::string output;
  
  for(int t : str){
    if(t == 'a' ||
       t == 'e' ||
       t == 'i' ||
       t == 'o' ||
       t == 'u') continue;
    
    output += t;
  }
  
  return output;
}
```

## another solution

```
#include <string>
#include <regex>

std::string remove_vowels(const std::string& str) {
  return std::regex_replace(str, std::regex("[aeiou]"), ""); // regular expresion
}
```
