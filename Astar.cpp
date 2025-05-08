#include <iostream>
#include <cmath>
using namespace std;

// Heuristic function (Manhattan distance)
int heuristic(int x, int y, int gx, int gy)
{
    return abs(x - gx) + abs(y - gy);
}

// Simplified A* simulation for a small grid
void aStar(int grid[3][3], int sx, int sy, int gx, int gy)
{
    int x = sx, y = sy;

    while (x != gx || y != gy)
    {
        cout << "(" << x << "," << y << ") -> ";

        if (x < gx && grid[x + 1][y] != 1)
            x++;
        else if (x > gx && grid[x - 1][y] != 1)
            x--;
        else if (y < gy && grid[x][y + 1] != 1)
            y++;
        else if (y > gy && grid[x][y - 1] != 1)
            y--;
        else
        {
            cout << "Blocked! No path found." << endl;
            return;
        }
    }

    cout << "(" << gx << "," << gy << ")" << endl;
}

int main()
{
    int grid[3][3] = {
        {0, 0, 0},
        {0, 1, 0}, // 1 is obstacle
        {0, 0, 0}};

    aStar(grid, 0, 0, 2, 2);

    return 0;
}
