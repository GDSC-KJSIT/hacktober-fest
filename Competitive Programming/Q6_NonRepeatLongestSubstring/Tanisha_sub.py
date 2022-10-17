str=input("Enter a string: ")
l=[]
for i in range(len(str)):
    if str[i] not in l:
        l.append(str[i])
        
print(len(l))