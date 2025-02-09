# Abbreviate a Two Word Name

## Instructions

Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two capital letters with a dot separating them.

It should look like this:

Sam Harris => S.H

patrick feeney => P.F

## solution

```
#include <string>

std::string abbrevName(std::string name)
{
  std::string abb;
  
  abb += toupper(name[0]);
  abb += ".";
  
  for(int i; i < name.size(); i++){
    if(name[i] == ' ') abb += toupper(name[i+1]);
  }
  
  return abb;
}
```

## another solution

```
#include <string>

std::string abbrevName(std::string name)
{
  std::string abb;
  
  abb += toupper(name[0]);
  abb += ".";
  abb += toupper(name[name.find(" ") + 1]);
  
  return abb;
}
```
