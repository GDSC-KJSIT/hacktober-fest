def fact(n):
    if n==1:
        return 1
    elif n==0:
        return 1
    else:
        return n*fact(n-1)
    
num=int(input("Enter a number: "))
print("Factorial is", fact(num))
