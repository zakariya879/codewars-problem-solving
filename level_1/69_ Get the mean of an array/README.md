# Get the mean of an array

## Instructions

It's the academic year's end, fateful moment of your school report. The averages must be calculated. All the students come to you and entreat you to calculate their average for them. Easy ! You just need to write a script.

Return the average of the given array rounded down to its nearest integer.

The array will never be empty.

## solution

```
#include <vector>

int get_average(std::vector <int> marks)
{
  int x = 0;
  
  for(int i = 0; i < marks.size(); i++){
    x += marks.at(i);
  }
  
  return x / marks.size();
}
```
