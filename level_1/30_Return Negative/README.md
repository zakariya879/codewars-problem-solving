# <8 kyu> Return Negative

## Instructions

In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?

## solution

```
int makeNegative(int num)
{
  return num > 0 ? num * -1 : num;
}
```

## another solution

```
int makeNegative(int num)
{
  return -abs(num);
}
```
