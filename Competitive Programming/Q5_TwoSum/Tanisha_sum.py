n=int(input("Enter the number of elements in the array: "))
print("Enter the elements of the array: ")
l=[]
for i in range(n):
    l.append(int(input()))
    
print("The elements are: ", l)
sum=int(input("Enter the sum: "))
c=0
for i in range(n-1):
    if l[i]+l[i+1]==sum:
        c+=1
        
if c==0:
    print("Not found")
else:
    print("Pairs of integers are: ", c)