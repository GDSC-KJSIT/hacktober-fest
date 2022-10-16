
# Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix. Try to optimise for time.


# Taking input of Matrix

r = int(input("Enter number of rows "))
c = int(input("Enter number of columns "))
mat = []
for i in range(r):
	rowel = []
	for j in range(c):
		print("Enter element no. {} of row {}".format(j+1,i+1))
		rowel.append(int(input("Enter element ")))
	mat.append(rowel)

print("Matrix is ",mat)


# Searching 0 valued element 
zeros = []
for i in range(r):
	for j in range(c):
		temp = []
		if mat[i][j] == 0:
			temp.append(i)
			temp.append(j)
			zeros.append(temp)
# print("locations of zero are " ,zeros)


# Replacing correspong rows and columns with 0
for i in range(len(zeros)):
	rowx = zeros[i][0]
	coly = zeros[i][1]
	# replacing respective rows with 0
	for i in range(c):
		mat[rowx][i] = 0
	# replacing respective columns with 0
	for i in range(r):
		mat[i][coly] = 0

# Final Answer
print("After replacing rows and columns having 0 number, matrix is ", mat)



