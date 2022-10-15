
def fact(n):
    if n > 1:
        return (n * fact(n-1))
    elif n == 1:
        return 1

num = int(input("Enter number "))

ans = fact(num)
print("Factorial is {}".format(ans))