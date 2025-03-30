# <8 kyu> Drink about

## Instructions

Kids drink toddy.
Teens drink coke.
Young adults drink beer.
Adults drink whisky.
Make a function that receive age, and return what they drink.

## solution

```
#include <string>

std::string people_with_age_drink(int age) {
  if(age < 14){
    return "drink toddy";
  }
  
  if(age < 18){
    return "drink coke";
  }
  
  if(age < 21){
    return "drink beer";
  }
  
  return "drink whisky";
  }
```

## another solution

```
#include <string>

std::string people_with_age_drink(int age) {
  switch(age){
      case 0 ... 13 : return "drink toddy";
      case 14 ... 17 : return "drink coke";
      case 18 ... 20 : return "drink beer";
      case 21 ... 99 : return "drink whisky";
  }
}
```
