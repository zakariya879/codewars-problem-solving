# <7 kyu> String ends with?

## Instructions

Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false

## solution

```
#include <string>

bool solution(std::string const &str, std::string const &ending) {
  if(str.size() < ending.size()) return 0;
  return !str.compare(str.size() - ending.size(), ending.size(), ending);
}
```

## another soltuion

```
#include <string>

bool solution(std::string const &str, std::string const &ending) {
  if(str.size() < ending.size()){
    return false;
  }
  
  for(int i = 1; i <= ending.size(); i++){
    if(str[str.size() - i] != ending[ending.size() - i]){
      return false;
    }
  }
  
  return true;
}
```
