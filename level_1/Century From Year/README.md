# Centrury from year

## Instructions

The first century spans from the year 1 up to and including the year 100, the second century - from the year 101 up to and including the year 200, etc.

## Task

Given a year, return the century it is in.

## solution

```
int centuryFromYear(int y) 
{
return y % 100 == 0 ? y / 100 : y / 100 + 1;
}
```
### another solution
```
#include<cmath>
float centuryFromYear(float year)  
{
return std::ceil(year / 100) ;
}
```