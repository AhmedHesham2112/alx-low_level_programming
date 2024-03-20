#!/usr/bin/python3
"""
island_perimeter returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    island_perimeter returns the perimeter of the island described in grid
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j] + 1 == 0:
                    perimeter += 1
                if grid[i][j] - 1 == 0:
                    perimeter += 1
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
    if perimeter > 1:
        return perimeter + 1
    return 0
