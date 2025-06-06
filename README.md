
# C++ Tic Tac Toe Game

A simple console-based Tic Tac Toe game written in C++. This project demonstrates the use of arrays, control flow, and basic game logic to create an interactive two-player experience.

## Features

- Two-player game (Player 1 uses 'X', Player 2 uses 'O').
- Board display refreshed after each move.
- Input validation to prevent overwriting occupied cells or invalid positions.
- Win detection for rows, columns, and diagonals.
- Draw detection when all cells are filled with no winner.

## How to Compile and Run

1. **Clone the repository**
   ```bash
   git clone https://github.com/your-username/cpp-tic-tac-toe.git
   cd cpp-tic-tac-toe
   ```

2. **Compile the program**
   ```bash
   g++ -o tictactoe tictactoe.cpp
   ```

3. **Run the executable**
   ```bash
   ./tictactoe
   ```

4. **Play the game**
   - Follow on-screen prompts to enter positions (1-9).
   - The board positions correspond to:
     ```
      1 | 2 | 3
     ---+---+---
      4 | 5 | 6
     ---+---+---
      7 | 8 | 9
     ```
   - Player 1 ('X') always goes first, followed by Player 2 ('O').

## Project Structure

- `tictactoe.cpp`: Main source file containing game logic.

---

Created for practicing C++ fundamentals and interactive console games. 🚀
