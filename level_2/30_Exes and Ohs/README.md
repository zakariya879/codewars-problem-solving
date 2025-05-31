# <7 kyu> Exes and Ohs

## Instructions

Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false

## solution

```
bool XO(const std::string& str){
  int no_x = 0;
  int no_o = 0;
  
  for(char c : str){
    if(c == 'X' || c == 'x') no_x++;
    if(c == 'O' || c == 'o') no_o++;
  }
  
  return no_x == no_o;
}
```
