# Count of positives / sum of negatives

## Instructions

Given an array of integers.

Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

If the input is an empty array or is null, return an empty array.

Example
For input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15], you should return [10, -65].

## solution

```
std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  if(input.size() == 0) return input;
  
  int temp1 = 0;
  int temp2 = 0;
  std::vector<int> res;
  
    for(int i = 0; i < input.size(); i++){
      if(input.at(i) > 0) temp1++;
      else if(input.at(i) < 0) temp2 += input.at(i);
    }
  
  res.push_back(temp1);
  res.push_back(temp2);
  
  return res;
}
```
