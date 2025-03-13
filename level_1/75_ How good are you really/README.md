# How good are you really?

## Instructions

There was a test in your class and you passed it. Congratulations!

But you're an ambitious person. You want to know if you're better than the average student in your class.

You receive an array with your peers' test scores. Now calculate the average and compare your score!

Return true if you're better, else false!

Note:
Your points are not included in the array of your class's points. Do notforget them when calculating the average score!

## solution

```
#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  int x = 0;
  
  for(int i = 0; i < classPoints.size(); i++) x += classPoints[i];
  
  return yourPoints > x / classPoints.size();
}
```
