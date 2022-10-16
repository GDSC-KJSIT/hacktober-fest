s=input("Enter a string: ")
l1=s.split(" ")
s1=""
i=0

for j in range(len(l1)-1,-1,-1):
    s1=s1+l1[j]+" "  

print(s1)
    