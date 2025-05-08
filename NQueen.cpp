#include <iostream>
#include <vector>
using namespace std;

#define N 8 // Change N to solve for different board sizes

vector<bool> column(N, false), diag1(2 * N - 1, false), diag2(2 * N - 1, false);
vector<int> board(N, -1);

void printSolution()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (board[i] == j)
                cout << "Q ";
            else
                cout << ". ";
        }
        cout << endl;
    }
    cout << endl;
}

void solveNQueens(int row)
{
    if (row == N)
    {
        printSolution();
        return;
    }

    for (int col = 0; col < N; col++)
    {
        if (!column[col] && !diag1[row - col + N - 1] && !diag2[row + col])
        {
            // Place queen
            board[row] = col;
            column[col] = diag1[row - col + N - 1] = diag2[row + col] = true;

            solveNQueens(row + 1); // Recur for the next row

            // Backtrack
            column[col] = diag1[row - col + N - 1] = diag2[row + col] = false;
        }
    }
}

int main()
{
    solveNQueens(0);
    return 0;
}
