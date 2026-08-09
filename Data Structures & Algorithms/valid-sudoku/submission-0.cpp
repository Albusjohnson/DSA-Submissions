class Solution {
  public: 
// void visualise(vector < vector < char >> & board) {
//     for (int i = 0; i < 9; i++) {
//       for (int j = 0; j < 9; j++) {
//         cout << board[i][j] << " ";
//       }
//       cout << endl;
//     }
//   }
  bool isValidRow(vector < vector < char >> & board) {
    for (int i = 0; i < 9; i++) {
      vector < bool > num(10, 0);
      for (int j = 0; j < 9; j++) {
        int value = board[i][j] - '0';
        if (board[i][j] == '.') {
          continue;
        }
        if (num[value]) {
          return false;
        }
        num[value] = 1;
      }
    }
    return true;
  }
  bool isValidCol(vector < vector < char >> & board) {
    for (int i = 0; i < 9; i++) {
      vector < bool > num(10, 0);
      for (int j = 0; j < 9; j++) {
        if (board[j][i] == '.') {
          continue;
        }
        int value = board[j][i] - '0';
        if (num[value]) {
          return false;
        }
        num[value] = 1;
      }
    }
    return true;
  }
  bool isValidSquare(vector < vector < char >> & board) {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        vector < bool > num(10, 0);
        for (int k = 3 * i; k < 3 * i + 3; k++) {
          for (int l = 3 * j; l < 3 * j + 3; l++) {
            if (board[k][l] == '.') {
              continue;
            }
            int value = board[k][l] - '0';
            if (num[value]) {
              return false;
            }
            num[value] = 1;
            // cout<<board[k][l]<< " ";
          }
        }
        // cout<<endl;
      }
    }
    return true;
  }
  bool isValidSudoku(vector < vector < char >> & board) {
    // visualise(board);
    bool row = isValidRow(board);
    bool col = isValidCol(board);
    bool boxes = isValidSquare(board);
    // cout << row << " " << col << " " << boxes << endl;
    return row && col && boxes;
  }
};