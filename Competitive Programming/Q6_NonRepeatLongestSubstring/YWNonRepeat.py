str=input("Enter a string: ")
norepeat=[]
fcount = 0
for i in range(len(str)):
    if str[i] not in norepeat:
        norepeat.append(str[i])
    else:
        fcount = max(len(norepeat),fcount)
        norepeat.clear()
        norepeat.append(str[i])
fcount = max(len(norepeat),fcount)
print(fcount)