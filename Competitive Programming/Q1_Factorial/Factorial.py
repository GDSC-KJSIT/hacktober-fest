def fact_rec(num):
    if num==1:
        return num
    else:
        return num*fact_rec(num-1)
inp = int(input("number of inputs : "))
for i in range(inp):
    numb = int(input("number : "))
    if numb < 0:
        print("wrong")
    elif numb == 0:
        print("the factorial of the number is : 1")
    else:
        print("the factorial of the number is", fact_rec(numb)) 
