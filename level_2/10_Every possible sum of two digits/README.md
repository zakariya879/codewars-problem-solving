# <7 kyu> Every possible sum of two digits

## Instructions

Given a long number, return all the possible sum of two digits of it.

For example, 12345: all possible sum of two digits from that number are:

[ 1 + 2, 1 + 3, 1 + 4, 1 + 5, 2 + 3, 2 + 4, 2 + 5, 3 + 4, 3 + 5, 4 + 5 ]
Therefore the result must be:

[ 3, 4, 5, 6, 5, 6, 7, 7, 8, 9 ]

## solution

```
std::vector<int> digits(int n){
  std::vector<int> sum;
  std::string str = std::to_string(n);
  
  for(int i = 0; i < str.size() - 1; i++){
    for(int j = i + 1; j < str.size(); j++){
     sum.push_back(str[i] + str[j] - 96); 
    }
  }
  
  return sum;
}
```
