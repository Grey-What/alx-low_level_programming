#!/usr/bin/python3
"""determimes the perimeter of an island in a grid"""

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.

    Args:
         grid (list of lists): describing a island in 1's and 0's
    """
    row = len(grid)
    col = len(grid[0])
    perim = 0

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                perim += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perim -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perim -= 2

    return perim
