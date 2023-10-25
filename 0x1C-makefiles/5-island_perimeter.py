#!/usr/bin/python3
"""
Defines the island_perimeter.
"""


def island_perimeter(grid):
    """
    island_perimeter - Calculate the perimeter of the island.

    :param grid: List of lists representing the island grid.
    :return: The perimeter of the island.
    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # If the current cell is land,
                # add 4 to the perimeter (all sides).
                perimeter += 4

                # Check the cell above and subtract 2 if it's also land.
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2

                # Check the cell to the left and
                #subtract 2 if it's also land.
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
