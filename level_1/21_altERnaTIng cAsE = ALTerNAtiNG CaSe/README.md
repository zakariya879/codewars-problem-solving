# altERnaTIng cAsE <=> ALTerNAtiNG CaSe

## Instructions

altERnaTIng cAsE <=> ALTerNAtiNG CaSe
Define String.prototype.toAlternatingCase (or a similar function/method such as to_alternating_case/toAlternatingCase/ToAlternatingCase in your selected language; see the initial solution for details) such that each lowercase letter becomes uppercase and each uppercase letter becomes lowercase.

## solution

```
std::string to_alternating_case(const std::string& str)
{
  std::string a = "";
	for(int i = 0; i < str.size(); i++)
    {
    if(isupper(str[i]))
      a += tolower(str[i]);
    
    else
      a += toupper(str[i]);
  }
  return a;
}
```
