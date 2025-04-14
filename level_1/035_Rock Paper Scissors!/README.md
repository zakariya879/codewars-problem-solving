# <8 kyu> Rock Paper Scissors!

## Instructions
Let's play! You have to return which player won! In case of a draw return Draw!.

Examples(Input1, Input2 --> Output):

"scissors", "paper" --> "Player 1 won!"
"scissors", "rock" --> "Player 2 won!"
"paper", "paper" --> "Draw!"

## solution

```
#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
    if(p1 == "scissors" && p2 == "paper" || p1 == "paper" && p2 == "rock" || p1 == "rock" && p2 == "scissors")
      return "Player 1 won!";
      
    if(p2 == "scissors" && p1 == "paper" || p2 == "paper" && p1 == "rock" || p2 == "rock" && p1 == "scissors")
      return "Player 2 won!";
        
    return "Draw!";
}
```
