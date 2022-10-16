s=input("Enter a string: ")
l1=s.split(" ")
s1=""

def reverse(str):
    s2=""
    for i in range(len(str)-1,-1,-1):
        s2=s2+str[i]
    return s2


for str in l1:
    s1=s1+reverse(str)+" "

print(s1)
    