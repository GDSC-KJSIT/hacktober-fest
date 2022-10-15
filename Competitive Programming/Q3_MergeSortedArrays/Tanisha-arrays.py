n=int(input("Enter the size of first array: "))
arr1=[]
print("Enter the elements of first array: ")
for i in range(n):
    arr1.append(int(input()))

m=int(input("Enter the size of second array: "))
arr2=[]
print("Enter the elements of secondt array: ")
for i in range(m):
    arr2.append(int(input()))
    
arr1.sort()
arr2.sort()
array=arr1+arr2
array.sort()
print("The merged array is", array)
arr1.clear()
arr2.clear()
N=int(input("Enter the value of N: "))
M=int(input("Enter the value of M: "))
for i in range(N):
    arr1.append(array[i])

for i in range(len(array)-M, len(array)):
    arr2.append(array[i])

print("The two arrays are")
print(arr1)
print(arr2)
