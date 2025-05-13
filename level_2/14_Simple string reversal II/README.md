# <7 kyu> Simple string reversal II

## Instructions

In this Kata, you will be given a string and two indexes (a and b). Your task is to reverse the portion of that string between those two indices inclusive.

str = "codewars", a = 1, b = 5 --> "cawedors"
str = "cODEWArs", a = 1, b = 5 --> "cAWEDOrs"
Input will be lowercase and uppercase letters only.

The first index a will always be smaller than the string length; the second index b can be greater than the string length. More examples in the test cases. Good luck!

## solution

```
std::string solve(std::string s, int a, int b){
  std::string str;
  
  for(int i = 0; i < a; i++){
      str += s[i];
  }
  
  if(b >= s.size()){
    for(int j = s.size() - 1; j >= a; j--){
      str += s[j];
    }
  }
  
  else{
    for(int k = b; k >= a; k--){
      str += s[k];
    }
    
    for(int l = b + 1; l < s.size(); l++){
      str += s[l];
    }
  }
  
  return str;
}
```

## another solution

```
std::string solve(std::string s, int a, int b){
  if(b < s.size()){
    std::reverse(s.begin() + a, s.begin() + b + 1);
  }
  
  else{
    std::reverse(s.begin() + a, s.end());
  }
  
  return s;
}
```
