#!/usr/bin/python3
'''This function find the perimet of a grid'''


def island_perimeter(grid):
    '''Return the current perimeter of the grid from the main file'''
    per = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    per += 1
                if x == (len(grid) -1 ) or grid[x + 1][y] == 0:
                    per += 1
                if j == 0 or grid[x][y - 1] == 0:
                    per += 1
                if j == (len(grid)[i][j - 1] or grid[x][y + 1] == 0:
                    per += 1
    return per
