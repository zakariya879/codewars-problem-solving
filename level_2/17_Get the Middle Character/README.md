# <7 kyu> Get the Middle Character

## Instructions

You are going to be given a non-empty string. Your job is to return the middle character(s) of the string.

If the string's length is odd, return the middle character.
If the string's length is even, return the middle 2 characters.
Examples:
"test" --> "es"
"testing" --> "t"
"middle" --> "dd"
"A" --> "A"

## solution

```
std::string get_middle(std::string input){
  std::string output;
  int size = input.size();
  
  if(size % 2 == 0){
    output += input[size / 2 - 1];
    output += input[size / 2];
  }
  
  else{
    output += input[size / 2];
  }
  
  return output;
}
```
