#!/usr/bin/python3
"""
This module contains a function to calculate the perimeter of an island
represented by a grid of 0s (water) and 1s (land),
where the grids are connected vertically and horizontally in a rectangle.
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island represented in the grid.

    Args:
        grid (list of list of ints): A grid where 0 represents water and,
        1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    column = len(grid[0]) if rows > 0 else 0

    for r in range(rows):
        for c in range(column):
            if grid[r][c] == 1:
                # Check top
                if r == 0 or grid[r - 1][c] == 0:
                    perimeter += 1
                # Check bottom
                if r == rows - 1 or grid[r + 1][c] == 0:
                    perimeter += 1
                # Check left
                if c == 0 or grid[r][c - 1] == 0:
                    perimeter += 1
                # Check right
                if c == column - 1 or grid[r][c + 1] == 0:
                    perimeter += 1

    return perimeter
