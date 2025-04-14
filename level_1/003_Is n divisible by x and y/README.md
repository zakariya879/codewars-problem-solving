# <8 kyu> Is n divisible by x and y?

## intstructions

Create a function that checks if a number n is divisible by two numbers x AND y. All inputs are positive, non-zero numbers.

## solution

```
function isDivisible(n, x, y) {
  if(n % x == 0 && n % y == 0)
    {
      return true;
    }
  else
    {
      return false;
    }
}
```

### another solution

```
function isDivisible(n, x, y) {
  return n % y == 0 && n % x == 0;
}
```
