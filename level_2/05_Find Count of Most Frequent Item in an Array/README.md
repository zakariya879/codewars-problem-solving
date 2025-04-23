# <7 kyu> Find Count of Most Frequent Item in an Array

## Instructions

Complete the function to find the count of the most frequent item of an array. You can assume that input is an array of integers. For an empty array return 0

Example
input array: [3, -1, -1, -1, 2, 3, -1, 3, -1, 2, 4, 9, 3]
ouptut: 5 
The most frequent number in the array is -1 and it occurs 5 times.

## solution

```
#include <vector>

unsigned int most_frequent_item_count(const std::vector<int>& collection) {
  int res = 0; 
  
  for(int i = 0; i < collection.size(); i++){
    int temp = 0;
    
    for(int j = 0; j < collection.size(); j++){
      if(collection[i] == collection[j]) temp++;
    }
    if(temp > res){
      res = temp;
    }
  }
  
  return res;
}
```
