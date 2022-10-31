def longeststr(str):
    temp = ""
    maxlength = -1
     
    if (len(str) == 0):
        return 0
        
    elif(len(str) == 1):
        return 1
        
    for c in list(str):
        cur = "".join(c)
         
        if (cur in temp):
            temp = temp[temp.index(cur) + 1:]
        temp = temp + "".join(c)
        maxlength = max(len(temp), maxlength)
    return maxlength
 
s= str(input("Enter string: "))
length = longeststr(s)
print("Length is", length)
