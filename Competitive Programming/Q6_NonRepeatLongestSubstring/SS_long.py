str=input("Enter your string: ")
l_string=[]
for i in range(len(str)):
    if str[i] not in l_string:
        l_string.append(str[i])
print(len(l_string))