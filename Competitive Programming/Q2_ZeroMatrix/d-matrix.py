def zero_matrix(matrix: list, m: int, n: int) -> list:
    """Takes a M x N matrix and returns a matrix with all the rows and columns containing 0 set to 0."""
    columns: list = []  # List of columns containing 0
    output: list = matrix.copy()  # Copy the input matrix to the output matrix

    for row in range(m):
        for col in range(n):
            if not matrix[row][col]:
                columns.append(col)
                output[row] = [0] * n  # Set the entire row to 0
                break

    for col in columns:
        for row in range(m):
            # Setting the value of the element at the row and column to 0.
            output[row][col] = 0

    return output


m: int = int(input("Enter number of rows: "))
n: int = int(input("Enter number of columns: "))
# Input the matrix using list comprehension
matrix: list = [[int(input()) for i in range(n)] for j in range(m)]
print(zero_matrix(matrix, m, n))
