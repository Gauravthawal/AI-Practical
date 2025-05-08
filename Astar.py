def heuristic(x, y, gx, gy):
    # Manhattan distance
    return abs(x - gx) + abs(y - gy)

def a_star(grid, sx, sy, gx, gy):
    x, y = sx, sy

    while (x, y) != (gx, gy):
        print(f"({x},{y}) -> ", end="")

        if x < gx and grid[x + 1][y] != 1:
            x += 1
        elif x > gx and grid[x - 1][y] != 1:
            x -= 1
        elif y < gy and grid[x][y + 1] != 1:
            y += 1
        elif y > gy and grid[x][y - 1] != 1:
            y -= 1
        else:
            print("Blocked! No path found.")
            return

    print(f"({gx},{gy})")

# 0 = empty cell, 1 = obstacle
grid = [
    [0, 0, 0],
    [0, 1, 0],  # obstacle in the middle
    [0, 0, 0]
]

a_star(grid, 0, 0, 2, 2)
