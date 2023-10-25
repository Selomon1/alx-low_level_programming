#!/usr/bin/python3
"""
Finds perimeter of island
"""


def island_perimeter(grid):
    """ Funtion that finds perimeter of island """
    preimeter = 0
    for i, height in enumerate(grid):
        for j, width in enumerate(height):
            if width == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == len(height) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
