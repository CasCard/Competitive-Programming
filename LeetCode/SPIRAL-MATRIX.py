actual_matrix = [[2, 5], [8, 4], [0, -1]]
actual_matrix = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]


def padded_grid(grid):
    n = len(grid[0])
    x = [101 for _ in range(n + 2)]
    [lst.append(101) for lst in grid]
    [lst.insert(0, 101) for lst in grid]
    grid.insert(0, x)
    grid.append(x)
    return grid


# matrix = [[0, 0, 0, 0, 0], [0, 1, 2, 3, 0], [0, 4, 5, 6, 0], [0, 7, 8, 9, 0], [0, 0, 0, 0, 0]]
# print(type(matrix),len(matrix),len(matrix[0]))


# print(type(matrix1))
# add zeros to the exterior of the matrix
count = 0
direction = "right"
visited = []
spiral_matrix = []
i = 1
j = 1
n = len(actual_matrix)
m = len(actual_matrix[0])
matrix = padded_grid(actual_matrix)
print(type(matrix), len(matrix), len(matrix[0]))
print(matrix)

while len(visited) < n * m:
    print(matrix[i][j], direction, (i, j))
    spiral_matrix.append(matrix[i][j])
    visited.append((i, j))
    # right bottom left top - clockwise

    if direction == "right":
        if (i, j + 1) in visited:
            direction = "bottom"
            i = i + 1
            continue
        if matrix[i][j + 1] == 101:direction = "bottom"
        else:j += 1
    if direction == "bottom":
        if (i + 1, j) in visited:
            direction = "left"
            j = j - 1
            continue
        if matrix[i + 1][j] == 101:direction = "left"
        else:i += 1
    if direction == "left":
        if (i, j - 1) in visited:
            direction = "top"
            i = i - 1
            continue
        if matrix[i][j - 1] == 101:direction = "top"
        else:j -= 1
    if direction == "top":
        if (i - 1, j) in visited:
            direction = "right"
            j = j + 1
            continue
        if matrix[i - 1][j] == 101:direction = "right"
        else:i -= 1

print(spiral_matrix)
