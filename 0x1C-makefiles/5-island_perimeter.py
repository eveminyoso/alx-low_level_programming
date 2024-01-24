#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the given grid.

    Parameters:
    - grid (List[List[int]]): A list of lists representing the grid where 0 represents water and 1 represents land.

    Returns:
    - int: The perimeter of the island.

    Constraints:
    - Grid is rectangular, with width and height not exceeding 100.
    - Grid is completely surrounded by water, and there is one island (or nothing).
    - Grid cells are connected horizontally/vertically (not diagonally).

    Example:
    grid = [
        [0, 1, 0, 0],
        [1, 1, 1, 0],
        [0, 1, 0, 0],
        [1, 1, 0, 0]
    ]
    island_perimeter(grid)  # Output: 16
    """

    perimeter = 0

    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Assume all four sides are land

                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter
