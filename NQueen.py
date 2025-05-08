def solve_n_queens(N):
    column = [False] * N
    diag1 = [False] * (2 * N - 1)
    diag2 = [False] * (2 * N - 1)
    board = [-1] * N
    solution_count = [0]  # Using list to allow modification in nested function

    def print_solution():
        for i in range(N):
            for j in range(N):
                if board[i] == j:
                    print("Q", end=" ")
                else:
                    print(".", end=" ")
            print()
        print()

    def backtrack(row):
        if row == N:
            print_solution()
            solution_count[0] += 1
            return

        for col in range(N):
            if not column[col] and not diag1[row - col + N - 1] and not diag2[row + col]:
                board[row] = col
                column[col] = diag1[row - col + N - 1] = diag2[row + col] = True

                backtrack(row + 1)

                column[col] = diag1[row - col + N - 1] = diag2[row + col] = False

    backtrack(0)
    print(f"Total solutions for {N}-Queens: {solution_count[0]}")


# You can change N here
N = 8
solve_n_queens(N)
