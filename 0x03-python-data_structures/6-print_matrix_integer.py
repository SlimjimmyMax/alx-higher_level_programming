#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    if matrix:
        for row in matrix:
            length = len(row)

            for i, col in enumerate(row):
                if i == length - 1:
                    print('{:d}'.format(col), end='')
                else:
                    print('{:d}'.format(col), end=' ')

            print()
