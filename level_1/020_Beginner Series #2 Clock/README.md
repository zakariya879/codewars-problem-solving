# <8 kyu> Beginner Series #2 Clock

## Instructions

Clock shows h hours, m minutes and s seconds after midnight.

Your task is to write a function which returns the time since midnight in milliseconds.

## solution

```
int past(int h, int m, int s) {
  return h * 3600000 + m * 60000 + s * 1000;
}
```
