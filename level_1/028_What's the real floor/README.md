# <8 kyu> What's the real floor?

## Instructions

Americans are odd people: in their buildings, the first floor is actually the ground floor and there is no 13th floor (due to superstition).

Write a function that given a floor in the american system returns the floor in the european system.

With the 1st floor being replaced by the ground floor and the 13th floor being removed, the numbers move down to take their place. In case of above 13, they move down by two because there are two omitted numbers below them.

Basements (negatives) stay the same as the universal level.

## solution

```
int getRealFloor(int f) {
  if(f > 13){
    return f - 2;
  }
  
  else if(f > 0 && f < 14){
    return f - 1;
  }
  
  else{
    return f;
  }
}
```

## another solution

```
int getRealFloor(int f) {
  return f < 1 ? f : f < 14 ? f - 1 : f - 2;
}
```
