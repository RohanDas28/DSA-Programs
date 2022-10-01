
public class SudokuSolver {

    public static boolean solve(char[][] board) {
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {

                if (board[i][j] == '.') {
                    for (char c = '1'; c <= '9'; c++) {
                        if (isValid(board, i, j, c)) {
                            board[i][j] = c;

                            if (solve(board) == true) {
                                return true;
                            } else {
                                // For backtracking
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    public static boolean isValid(char[][] board, int row, int column, char c) {
        for (int i = 0; i <= 8; i++) {
            // Checking in row
            if (board[row][i] == c) {
                return false;
            }
            // checking in each column
            if (board[i][column] == c) {
                return false;
            }
            if (board[3 * (row / 3) + i / 3][3 * (column / 3) * i % 3] == c) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {

        char[][] board = { { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
                { '6', '.', '.', '1', '9', '5', '.', '.', '.' }, { '.', '9', '8', '.', '.', '.', '.', '6', '.' },
                { '8', '.', '.', '.', '6', '.', '.', '.', '3' }, { '4', '.', '.', '8', '.', '3', '.', '.', '1' },
                { '7', '.', '.', '.', '2', '.', '.', '.', '6' }, { '.', '6', '.', '.', '.', '.', '2', '8', '.' },
                { '.', '.', '.', '4', '1', '9', '.', '.', '5' }, { '.', '.', '.', '.', '8', '.', '.', '7', '9' } };

        solve(board);

        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {
                System.out.print(board[i][j]);
            }
            System.out.println();
        }
    }
}
