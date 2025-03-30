# <8 kyu> Find Maximum and Minimum Values of a List

## Instructions

Your task is to make two functions ( max and min, or maximum and minimum, etc., depending on the language ) that receive a list of integers as input, and return the largest and lowest number in that list, respectively. Each function returns one number.

## solution

```
#include <vector>
using namespace std;

int min(vector<int> list){
  int a = list[0];
  for(int i = 1; i < list.size(); i++)
    {
    if(list[i] < a)
      {
      a = list[i];
    }
  }
    return a;
}

int max(vector<int> list){
    int b = list[0];
  for(int i = 1; i < list.size(); i++)
    {
    if(list[i] > b)
      {
      b = list[i];
    }
  }
    return b;
}
```
