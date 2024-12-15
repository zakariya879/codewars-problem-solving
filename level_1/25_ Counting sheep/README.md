# Counting sheep...

## Instructions

Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).

## solution

```
#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int a = 0;
  for(int i = 0; i < arr.size(); i++)
    {
    if(arr[i])
      a++;
  }
  return a;
}
```
