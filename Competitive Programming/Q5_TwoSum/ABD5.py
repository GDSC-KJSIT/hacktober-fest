l = [int(item) for item in input().split()]
s = int(input())
c=0
for i in range(0,l.__len__()-1):
    for j in range(i,l.__len__()-1):
        if l[i]+l[j+1]==s:
            c+=1
print(c)