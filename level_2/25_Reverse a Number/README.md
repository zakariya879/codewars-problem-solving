# <7 kyu> Reverse a Number

## Instructions

Given a number, write a function to output its reverse digits. (e.g. given 123 the answer is 321)

Numbers should preserve their sign; i.e. a negative number should still be negative when reversed.

Examples
 123 ->  321
-456 -> -654
1000 ->    1

## solution

```
long long reverseNumber(long long n) {
  if(n >= 0){
    std::string str = std::to_string(n);
    reverse(str.begin(), str.end());
    n = std::stoi(str);
  }
  
  else{
    std::string str = std::to_string(n * -1);
    reverse(str.begin(), str.end());
    n = std::stoi(str) * -1;
  }
  
  return n;
}
```
