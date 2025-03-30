# <8 kyu> Grasshopper - Grade book

## Instructions

Grade book
Complete the function so that it finds the average of the three scores passed to it and returns the letter value associated with that grade.

Numerical Score	Letter Grade
90 <= score <= 100	'A'
80 <= score < 90	'B'
70 <= score < 80	'C'
60 <= score < 70	'D'
0 <= score < 60	'F'
Tested values are all between 0 and 100. Theres is no need to check for negative values or values greater than 100.

## solution

```
char getGrade(int a, int b, int c) {
  return (a+b+c)/3 >= 90 ? 'A' :
  (a+b+c)/3 >= 80 ? 'B' :
  (a+b+c)/3 >= 70 ? 'C' :
  (a+b+c)/3 >= 60 ? 'D' : 'F';
}
```

## another solution

```
char getGrade(int a, int b, int c) {
  int score = (a + b + c) / 3;
  
  switch(score){
      case 90 ... 100 : return 'A';
      case 80 ... 89 : return 'B';
      case 70 ... 79 : return 'C';
      case 60 ... 69 : return 'D';
      default: return 'F';
  }
}
```
