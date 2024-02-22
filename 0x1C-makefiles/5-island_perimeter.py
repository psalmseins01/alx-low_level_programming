#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, i, j):
    """Returns the number of water neighbors a cell has in a grid."""
    num = 0
    rows, cols = len(grid), len(grid[0])
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    for dx, dy in directions:
        ni, nj = i + dx, j + dy
        if ni < 0 or nj < 0 or ni >= rows or nj >= cols or not grid[ni][nj]:
            num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += num_water_neighbors(grid, i, j)
    return perimeter
