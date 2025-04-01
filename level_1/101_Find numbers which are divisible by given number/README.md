# <8 kyu> Find numbers which are divisible by given number

## Instructions

Complete the function which takes two arguments and returns all numbers which are divisible by the given divisor. First argument is an array of numbers and the second is the divisor.

Example(Input1, Input2 --> Output)
[1, 2, 3, 4, 5, 6], 2 --> [2, 4, 6]

## solution

```
std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
  std::vector<int> sum;
  
  for(int i = 0; i < numbers.size(); i++){
    if(numbers.at(i) % divisor == 0) sum.push_back(numbers.at(i));
  }
  
  return sum;
}
```
