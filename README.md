# Shell Game (C Program)

## Name
**Bismah Farooq**

## Description
This is a C program that simulates a simple **Shell Game**.  
The game presents the user with **three cups**, where **one cup hides a ball**.  
The user places a bet and guesses which cup contains the ball.

- If the user guesses correctly, they **win the amount they bet**
- If the guess is incorrect, they **lose the bet amount**
- The game continues until the user chooses to stop or runs out of money

The program starts the user with **$100** and allows repeated play.

---

## Features
- Randomized ball placement using `rand()`
- User betting system
- ASCII art display of cups
- Input validation for bets and guesses
- Option to play again
- Game ends when the user runs out of money

---

## How the Game Works
1. The user starts with **$100**
2. The user enters a bet amount
3. Three cups are displayed
4. The user guesses which cup has the ball
5. The program reveals the ball’s location
6. The user either wins or loses the bet
7. The user can choose to play again

---

## Sample Output
```text
-Shell Game
Find the ball to double your bet!
You have $100
Bet Amount? 20
  ___     ___     ___
 /   \   /   \   /   \
/  1  \ /  2  \ /  3  \
------- ------- -------
Make a guess: 2
```

## Compilation and Execution
To compile and run the program using a terminal:
```text
gcc main.c -o shell_game
./shell_game
```

