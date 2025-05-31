# <7 kyu> Count the divisors of a number

## Instructions

Count the number of divisors of a positive integer n.

Random tests go up to n = 500000, but fixed tests go higher.

Examples (input --> output)
4 --> 3 // we have 3 divisors - 1, 2 and 4
5 --> 2 // we have 2 divisors - 1 and 5
12 --> 6 // we have 6 divisors - 1, 2, 3, 4, 6 and 12
30 --> 8 // we have 8 divisors - 1, 2, 3, 5, 6, 10, 15 and 30
Note you should only return a number, the count of divisors. The numbers between parentheses are shown only for you to see which numbers are counted in each case.

## solution

```
#include <cmath>

int divisors(long long n) {
  int count = 0;
  long long sqrt_n = sqrt(n);
  
  for(long long i = 1; i <= sqrt_n; i++){
    if(n % i == 0) count += 2;
  }
  
  if(sqrt_n * sqrt_n == n){
    count--;
  }
  
  return count;
}
```
