n=int(input("Enter the number of elements in the array: "))
l=[]
print("Enter the elements of the array: ")
for i in range(n):
    l.append(int(input()))

print("The array is: ",l)

max=0
for i in range(n-1):
    if l[i]+l[i+1]>max:
        max=l[i]+l[i+1]
        
print(max)