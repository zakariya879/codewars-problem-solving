# <8 kyu> Grasshopper - Terminal game combat function

## Instructions

Create a combat function that takes the player's current health and the amount of damage received, and returns the player's new health. Health can't be less than 0.

## solution

```
int combat(int health, int damage){
  return health > damage ? health - damage : 0 ;
}
```
