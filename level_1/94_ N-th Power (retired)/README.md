# N-th Power (retired)

## Instructions

Removed due to copyright infringement.

## solution

```
#include <vector>
#include <cmath>

int index(const std::vector<int> &vector, int n) {
  return n < vector.size() ? pow(vector.at(n), n) : -1;
}
```
