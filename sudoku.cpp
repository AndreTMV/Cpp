#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector;

struct position {
  int x, y;
};

void printBoard(vector<vector<int>> board) {
  for (size_t index = 0; index < board.size(); ++index) {
    if (index % 3 == 0 and index != 0) {
      cout << "- - - - - - - - - - - - \n";
    }
    for (size_t jndex = 0; jndex < board[0].size(); ++jndex) {
      if (jndex % 3 == 0 and jndex != 0) {
        cout << " | ";
      }
      if (jndex == 8) {
        cout << board[index][jndex] << "\n";
      } else {
        cout << board[index][jndex] << " ";
      }
    }
  }
}

position findEmpty(vector<vector<int>> board) {
  position empty;
  for (size_t index = 0; index < board.size(); ++index) {
    for (size_t jndex = 0; jndex < board[0].size(); ++jndex) {
      if (board[index][jndex] == 0) {
        empty.x = index;
        empty.y = jndex;
        return empty;
      }
    }
  }
  empty.x = NULL;
  empty.y = NULL;
  return empty;
}

bool valid(vector<vector<int>> board, int number, position pos) {
  for (size_t index = 0; index < board[0].size(); ++index) {
    if (board[pos.x][index] == number and pos.y != index)
      return false;
  }
  for (size_t index = 0; index < board.size(); ++index) {
    if (board[index][pos.y] == number and pos.x != index)
      return false;
  }
  int boxX = pos.x / 3;
  int boxY = pos.y / 3;
  for (size_t index = boxY * 3; index < boxY * 3 + 3; ++index) {
    for (size_t jndex = boxX * 3; jndex < boxX * 3 + 3; ++jndex) {
      if (board[index][jndex] == number and (index != pos.x and jndex != pos.y))
        return false;
    }
  }
  return true;
}

bool solve(vector<vector<int>> &board) {
  position find = findEmpty(board);
  if (find.x == NULL or find.y == NULL) {
    return true;
  }
  for (size_t number = 0; number <= 9; ++number) {
    if (valid(board, number, find)) {
      board[find.x][find.y] = number;
      if (solve(board)) {
        return true;
      }
      board[find.x][find.y] = 0;
    }
  }
  return false;
}

int main() {
  vector<vector<int>> board = {
      {5, 1, 6, 0, 0, 0, 0, 0, 8}, {0, 0, 0, 0, 0, 1, 0, 0, 2},
      {0, 0, 0, 0, 7, 0, 1, 6, 0}, {4, 0, 0, 7, 0, 2, 0, 0, 0},
      {2, 0, 3, 0, 0, 0, 8, 0, 5}, {0, 0, 0, 8, 0, 5, 0, 0, 3},
      {0, 6, 2, 0, 5, 0, 0, 0, 0}, {7, 0, 0, 9, 0, 0, 0, 0, 0},
      {9, 0, 0, 0, 0, 0, 5, 3, 1}};
  cout << "Before solving:\n";
  printBoard(board);
  solve(board);
  cout << "After solving:\n";
  solve(board);
  printBoard(board);
  return 0;
}
